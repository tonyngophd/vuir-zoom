
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2015, FLIR Systems                                          */
/*  All rights reserved.                                                      */
/*                                                                            */
/*  This document is controlled to FLIR Technology Level 2. The information   */
/*  contained in this document pertains to a dual use product controlled for  */
/*  export by the Export Administration Regulations (EAR). Diversion contrary */
/*  to US law is prohibited. US Department of Commerce authorization is not   */
/*  required prior to export or transfer to foreign persons or parties unless */
/*  otherwise prohibited.                                                     */
/*                                                                            */
/******************************************************************************/

#include "UART_Connector.h"
#include "inc/globalflirvariables.h"

uint8_t isInitialized = 0;
uint8_t isInitializeds[6] = {0, 0, 0, 0, 0, 0};
int bosonUSBPort = 0; // ranges form 0 to a large number depending on the machine (Rasp Pi)
int bosonUSBPorts[6] = {0, 0, 0, 0, 0, 0}; // ranges form 0 to a large number depending on the machine (Rasp Pi)
int globalVideoViewOrderNo = 0; // This will go from 0 to n-1, n is the number of boson cameras,
int FOV_sorted_ttyACM_num[6] = {0, 1, 2, 3, 4, 5}; // Default values as in /dev/ttyACM0, /dev/tty/ACM1, /dev/ttyACM2, /dev/ttyACM3 and so on until /dev/ttyACM[n-1]

/* Defaults to 100ms, can be increased by the user for any commands that take
   longer to respond... */
//Tony Ngo: Timeout method is BLOCKING, so it's NOT good. Todo: Implement a CAlLBACK instead so it won't be blocking
int readTimeout = 100;

#ifdef _WIN32
#define FLR_IMPORT __declspec( dllimport )
#else
#define FLR_IMPORT
#endif


//static struct libusb_device_handle *devh = NULL;
/*FLR_RESULT Initialize(libusb_device_handle *indevh)
{
    if (isInitialized) return R_UART_PORT_ALREADY_OPEN;

    devh = indevh;

//	__declspec( dllimport ) uint8_t open_port(int32_t port_num, int32_t baud_rate);
    if (open_port(devh)) return R_UART_PORT_FAILURE;

    isInitialized = 1;
    return FLR_COMM_OK; // 0 == success.
}*/

FLR_RESULT Initialize(int32_t ttyACM_num, int32_t baud_rate)
{
    //if (isInitialized) return R_UART_PORT_ALREADY_OPEN;
    if (isInitializeds[ttyACM_num]) return R_UART_PORT_ALREADY_OPEN;

    //bosonUSBPort = ttyACM_num;
    //FLR_IMPORT int32_t FSLP_lookup_port_id( char *port_name, int32_t len );
	//https://stackoverflow.com/questions/10847237/how-to-convert-from-int-to-char
    /*std::string s = std::to_string(ttyACM_num);
	char const *pchar = s.c_str();  //use char const* as target type
	char port_name[16] = "/dev/ttyACM";
	port_name[11] = s[0];
	port_name[12] = s[1];
	port_name[15] = '\0';
    bosonUSBPorts[ttyACM_num] = FSLP_lookup_port_id(port_name, strlen(port_name));
    printf("port_name = %s, sizeof = %d, bosonUSBPort = %d\n", port_name, strlen(port_name), bosonUSBPorts[ttyACM_num]);*/

    bosonUSBPorts[ttyACM_num] = ttyACM_num;
	FLR_IMPORT uint8_t FSLP_open_port(int32_t port_num, int32_t baud_rate);
    if (FSLP_open_port(bosonUSBPorts[ttyACM_num], baud_rate)) return R_UART_PORT_FAILURE;

    //isInitialized = 1;
    isInitializeds[ttyACM_num] = 1;
    //printf("\n\n\nreturning return FLR_COMM_OK!\n\n\n");
	return FLR_COMM_OK; // 0 == success.
}

void Close_Port_Before_FOV_Sort(int32_t ttyACM_num)
{
    FLR_IMPORT void FSLP_close_port(int32_t port_num);
    FSLP_close_port((int32_t) bosonUSBPorts[ttyACM_num]);
    isInitializeds[ttyACM_num] = 0;
    bosonUSBPorts[ttyACM_num] = 0;
}

void Close_Port_After_FOV_Sort()
{
    FLR_IMPORT void FSLP_close_port(int32_t port_num);
    FSLP_close_port((int32_t) bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]]);
    isInitializeds[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]] = 0;
    bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]] = 0;
}

/*FLR_RESULT Initialize(char port_name[], int32_t baud_rate)
{
	if (isInitialized) return R_UART_PORT_ALREADY_OPEN;

	FLR_IMPORT int32_t FSLP_lookup_port_id( char *port_name, int32_t len );
    int32_t bosonUSBPort = FSLP_lookup_port_id(port_name, strlen(port_name) + 1);
    printf("port_name = %s, sizeof = %d, bosonUSBPort = %d\n", port_name, strlen(port_name), bosonUSBPort);


	FLR_IMPORT uint8_t FSLP_open_port(int32_t port_num, int32_t baud_rate);
    if (FSLP_open_port(bosonUSBPort, baud_rate)) return R_UART_PORT_FAILURE;

	isInitialized = 1;
	return FLR_COMM_OK; // 0 == success.
}*/

/*void Close(char *port_name)
{
    FLR_IMPORT int32_t FSLP_lookup_port_id( char *port_name, int32_t len );
    int bosonUSBPort = FSLP_lookup_port_id(port_name, sizeof(port_name));

    FLR_IMPORT void FSLP_close_port(int32_t port_num);
    FSLP_close_port((int32_t) bosonUSBPort);
    isInitialized = 0;
    bosonUSBPort = 0;
}*/

void Close()
{
	FLR_IMPORT void FSLP_close_port(int32_t port_num);
    FSLP_close_port((int32_t) bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]]);
    isInitializeds[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]] = 0;
    bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]] = 0;
}

void SendToCamera( uint8_t channelID,  uint32_t sendBytes, uint8_t *sendData)
{
    //if (!isInitialized) return;
    if (!isInitializeds[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]]) return;

	FLR_IMPORT void FSLP_send_to_camera(int32_t port_num, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload);
    FSLP_send_to_camera( (int32_t) bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]], channelID, sendBytes, sendData);
}


void ReadFrame(uint8_t channelID, uint32_t *receiveBytes, uint8_t *receiveData)
{
	FLR_IMPORT int32_t FSLP_read_frame(int32_t port_num,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
    FSLP_read_frame((int32_t) bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]], channelID, readTimeout, receiveBytes, receiveData);
}


void ReadUnframed(uint32_t *receiveBytes, uint8_t *receiveData)
{
	FLR_IMPORT void FSLP_read_unframed(int32_t port_num, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
	// hardcoded 25ms polling delay for now
    FSLP_read_unframed((int32_t)bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]], 25, receiveBytes,receiveData);
}

void ReadTimeoutSet(unsigned int timeout)
{
	readTimeout = timeout;
}

int32_t CheckDataReady(uint8_t *channel_ID, uint32_t *receiveBytes, const uint8_t **receiveData)
{
        FLR_IMPORT int32_t FSLP_check_data_ready(int32_t port_num, uint8_t *channel_ID, uint16_t start_byte_ms, uint32_t *receiveBytes, const uint8_t **receiveBuffer);
        return FSLP_check_data_ready((int32_t) bosonUSBPorts[FOV_sorted_ttyACM_num[globalVideoViewOrderNo]], channel_ID, readTimeout, receiveBytes, receiveData);
}
