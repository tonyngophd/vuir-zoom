#include "convenientserial.h"
#include <sys/time.h>

#define SERIAL_TIMEOUT 200 // Milliseconds
// GLOBAL declaration to have access to them
// from the other functions. Not the best practise, but simple and fast.

unsigned char   ags_stuffed_package[1544] = "";   // Max package with bit stuffing 1544
unsigned short  ags_stuffed_package_len   = 0 ;    // To storage real size of package
HANDLE serial;

/*
------------------------------------------------------------------------------
--- Aux functions: CRC, Serial port TX/RX , Gettickcount, Hex Operations   ---
------------------------------------------------------------------------------
*/

//#define DEBUGPRINT_AGSERIAL 1

int64_t GetTickCount() {
    unsigned long long   l_i64RetValue = 0;
    struct    timespec now;
    unsigned long long timestamp_secs_to_ms = 0;
    unsigned long long  timestamp_nsecs_to_ms = 0;
    unsigned long long   timestamp_ms = 0;

    //Clock Get Time ////////////////////
    clock_gettime(CLOCK_MONOTONIC, &now);
    timestamp_secs_to_ms = ( unsigned long long)now.tv_sec;
    timestamp_secs_to_ms = timestamp_secs_to_ms * 1000;
    timestamp_nsecs_to_ms = ( unsigned long long)now.tv_nsec;
    timestamp_nsecs_to_ms = timestamp_nsecs_to_ms / 1000000;
    timestamp_ms = timestamp_secs_to_ms + timestamp_nsecs_to_ms;
    l_i64RetValue = timestamp_ms;
    return l_i64RetValue;
}

// Low level function that sends a package through serial
// Returns  0 (NoError) if OK
// Returns -1 if ERROR
int Send_Serial_package( unsigned char *package, short package_len) {
    // Clear TX buffer
    flush_buffer_tx(serial);   // Serial GLobal Var
    return send_buffer(serial, package, package_len);
}

int Send_Serial_package(int serial, unsigned char *package, short package_len) {
    // Clear TX buffer
    flush_buffer_tx(serial);   // Serial GLobal Var
    int result = send_buffer(serial, package, package_len);
    flush_buffer_tx(serial);   // Serial GLobal Var
    return result;
}

//https://stackoverflow.com/questions/19555121/how-to-get-current-timestamp-in-milliseconds-since-1970-just-the-way-java-gets
//https://stackoverflow.com/questions/41077377/how-to-get-current-time-in-milliseconds/41077420
uint32_t millis(){
    struct timeval tp;
    gettimeofday(&tp, NULL);
    return tp.tv_sec * 1000 + tp.tv_usec / 1000;
    //return duration<uint64_t>(high_resolution_clock::now()).count();
    //return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

int byte_index = 0;
int Receive_Serial_package_lossless(HANDLE serial, uint8_t *ags_stuffed_message, unsigned short *ags_stuffed_frame_len) {
    //static int i=0;
    unsigned char car; // byte read from serial
    int64_t endwait;
    bool new_frame = false;

    if(byte_index == 0){
        ags_stuffed_message[byte_index++] = 0x7E;
        new_frame = true;
    }
    *ags_stuffed_frame_len = byte_index;

    //printf("Outside byte_index = %d, new_frame = %d\n", byte_index, new_frame);

    // Receive data until Start of FRAME is received.
    endwait = millis() + SERIAL_TIMEOUT;
    while ( (millis() < endwait) )  {
        while ( rxbyte_waiting(serial) ) {
            car = read_byte(serial);
            if ( car == 0x7E ){
                if(byte_index > (new_frame?2:1)){
                    #ifdef DEBUGPRINT_AGSERIAL
                    printf("DEBUGPRINT_AGSERIAL 1 , new_frame = %d, byte_index = %d\n", new_frame, byte_index);
                    for(int j = 0; j < *ags_stuffed_frame_len; j++){
                        printf("0x%02hhx ", ags_stuffed_message[j]);
                    }
                    printf("\n");
                    fflush(stdout);
                    #endif
                    byte_index = 0;
                    return NoError;
                } else {
                    continue; // Because we already checked if byte_index == 0 above and already assigned ags_stuffed_message[0] = 0x7E
                }
            }
            ags_stuffed_message[byte_index++] = car;
            *ags_stuffed_frame_len = byte_index;
            if (byte_index >= 1544) {  // Check MAX_BUFFER size received
                return -2; // Error : Max buffer reached without START_OF_PACKAGE
            }
            usleep(50); // 0.5 millisecond
        }
        // Let catch frames at the end of rx buffer, where there would be no next START_OF_PACKAGE to be read/found
        if((ags_stuffed_message[0] == 0x7E) && (*ags_stuffed_frame_len == 15)) {
        #ifdef DEBUGPRINT_AGSERIAL
            printf("2 DEBUGPRINT_AGSERIAL ");
            for(int j = 0; j < *ags_stuffed_frame_len; j++){
                printf("0x%02hhx ", ags_stuffed_message[j]);
            }
            printf("\n");
            fflush(stdout);
        #endif
            byte_index = 0;
            return NoError;
        }
        usleep(50); // 0.5 millisecond
    }

    // ERROR TIMEOUT -> whole package not received. The partial package received will be kept and used in the next reading try
    // where it will try to fill up the remaining missing stretch of bytes of the package
    return -3;
}

// Low level function that waits to receive a package from serial
// It is prepared for Boson, so will start receiving bytes when 0x8E is
// received, and will finish when 0xAE is received... or after a timeout
// Returns  0 if OK
// Returns -1 if TIMEOUT (no start byte, or no data)
// Returns -2 if MAX BUFFER REACHED
// Returns -3 if TIMEOUT ( without gettign End_of_frame)
int Receive_Serial_package(HANDLE serial, uint8_t *ags_stuffed_message, unsigned short *ags_stuffed_frame_len) {
    int i=0;
    unsigned char car; // byte read from serial
    int64_t endwait;

    // Clear the reception buffer
    flush_buffer_rx(serial);   // Serial GLobal Var

    // Repeat until START BYTE is received or timeout (10sec) happens!!
    int64_t now;
    now = GetTickCount();
    endwait = now + SERIAL_TIMEOUT;
    while ( now < endwait )  {
        if ( rxbyte_waiting(serial) ) {
            car = read_byte(serial)&0xFF;
            if ( car == 0x7E ) {
                ags_stuffed_message[i++]=0x7E;
                break;
            }
        }
        now = GetTickCount();
        usleep(1000);
    }

    if ( i==0 ) {
        *ags_stuffed_frame_len=i;
        if (now >= endwait) {
            return -3; //  // ERROR TIMEOUT
        } else {
            return -1; // ERROR START FRAME not received
        }
    }

    // Receive data until END of FRAME is received.
    endwait = GetTickCount () + SERIAL_TIMEOUT;
    while ( (GetTickCount() < endwait) )  {
        if ( rxbyte_waiting(serial) ) {
            car = read_byte(serial);
            ags_stuffed_message[i++]=car;
            *ags_stuffed_frame_len=i;
            if (i == 15) {    // Received full frame // In the future, must modify the whole scheme to inclue an end-of-frame byte
#ifdef DEBUGPRINT_AGSERIAL
                printf("DEBUGPRINT_AGSERIAL ");
                for(int j = 0; j < *ags_stuffed_frame_len; j++){
                    printf("0x%02hhx ", ags_stuffed_message[j]);
                }
                printf("\n");
                fflush(stdout);
#endif
                return NoError;   // Package received
            }
            if (i>=1544) {  // Check MAX_BUFFER size received
                return -2; // Error : Max buffer reached without END_OF_PACKAGE
            }
        }
        usleep(1000);
    }
    return -3; // ERROR TIMEOUT -> End of package not received
}

int Receive_Serial_package() {
    int i=0;
    unsigned char car; // byte read from serial
    int64_t endwait;

    // Clear the reception buffer
    flush_buffer_rx(serial);   // Serial GLobal Var

    // Repeat until START BYTE is received or timeout (10sec) happens!!
    int64_t now;
    now = GetTickCount();
    endwait = now + SERIAL_TIMEOUT;
    while ( now < endwait )  {
        if ( rxbyte_waiting(serial) ) {
            car = read_byte(serial)&0xFF;
            if ( car == 0x7E ) {
                ags_stuffed_package[i++]=0x7E;
                break;
            }
        }
        now = GetTickCount();
    }

    if ( i==0 ) {
        ags_stuffed_package_len=i;
        if (now >= endwait) {
            return -3; //  // ERROR TIMEOUT
        } else {
            return -1; // ERROR START FRAME not received
        }
    }

    // Receive data until END of FRAME is received.
    endwait = GetTickCount () + SERIAL_TIMEOUT;
    while ( (GetTickCount() < endwait) )  {
        if ( rxbyte_waiting(serial) ) {
            car = read_byte(serial);
            ags_stuffed_package[i++]=car;
            ags_stuffed_package_len=i;
            //if (car == 0xAE) {    // Check END of PACKAGE
            if (car == 0x7F && i > 10) {    // Check BEGINNING of NEXT PACKAGE
                for(int j = 0; j < ags_stuffed_package_len; j++){
                    printf("0x%02hhx ", car);
                }
                printf("\n");
                fflush(stdout);
                return NoError;   // Package received
            }
            if (i>=1544) {  // Check MAX_BUFFER size received
                return -2; // Error : Max buffer reached without END_OF_PACKAGE
            }
        }
    }
    return -3; // ERROR TIMEOUT -> End of package not received
}



// Print Buffer in HEX
void print_buffer(unsigned char *buffer, int bufferlen) {
    for (int i=0; i<bufferlen; i++) {
        printf("%02X ", buffer[i]);
    }
    printf("\n");
}

int openSerial(char port_str[], int  baudrate){
    char aux_cad[20];
    sprintf(aux_cad,"%i,8,n,1", baudrate);

    PortSettingsType port_series_conf;
    // open serial port
    port_series_conf=str2ps(port_str,aux_cad);
    HANDLE serial;
    int ret=open_port(port_series_conf, &serial);
    if ( ret != 0) {
        printf(RED ">>> Error while opening serial port " CYN "%s" RESET "\n", port_str);
        fflush(stdout);
        return -1;   // Exit program
    }
    return serial;
}

void ConnectSerial(char port_str[], int  baudrate){
    openSerial(port_str, baudrate);

    //while(rxbyte_waiting(serial) > 0){

    //}
    Receive_Serial_package();
    print_buffer(ags_stuffed_package, ags_stuffed_package_len);
}
