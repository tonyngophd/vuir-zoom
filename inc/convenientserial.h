#ifndef CONVENIENTSERIAL_H
#define CONVENIENTSERIAL_H

#include "serial.h"
#include "bytes.h"
#include <unistd.h>
#include <time.h>
#include <stdint.h>

// Define COLOR CODES
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

#define SetFontYellow()    printf(YEL);   /* Yellow */
#define SetFontWhite()     printf(WHT);   /* White */
#define SetFontRed()       printf(RED);   /* Red */
#define SetFontGreen()     printf(GRN);   /* Green */
#define SetFontBlue()      printf(BLU);   /* Blue */
#define SetFontCyan()      printf(CYN);   /* Cyan  */
#define SetFontMagenta()   printf(MAG);   /* Magenta  */
#define SetFontReset()     printf(RESET); /* Reset */

// Define error codes

#define NoError                           0x00

void print_buffer(unsigned char *buffer, int bufferlen);
int64_t GetTickCount();
int Send_Serial_package( unsigned char *package, short package_len);
int Send_Serial_package(int serial, unsigned char *package, short package_len);
int Receive_Serial_package();
int Receive_Serial_package(HANDLE serial, uint8_t *ags_stuffed_message, unsigned short *ags_stuffed_frame_len);
int Receive_Serial_package_lossless(HANDLE serial, uint8_t *ags_stuffed_message, unsigned short *ags_stuffed_frame_len);
int openSerial(char *port_str, int  baudrate);
void ConnectSerial(char *port_str, int  baudrate);
uint32_t millis();

extern int byte_index;

#endif // CONVENIENTSERIAL_H
