#ifndef LIBUSB_BINARY_PROTOCOL_H
#define LIBUSB_BINARY_PROTOCOL_H

//#include "UART_HalfDuplex.h"
#include <libusb-1.0/libusb.h>
//#include "flirCRC.h"
//#include "flirChannels.h"
#include "boson_sdk_cpp/FSLP_Files/src/inc/flirCRC.h"
#include "boson_sdk_cpp/FSLP_Files/src/inc/flirChannels.h"

#include <stdio.h>

#ifdef Q_OS_WIN32

#include <Windows.h>
#define CLOCK_MONOTONIC 0
struct timespec { long tv_sec; long tv_nsec; };    //header part
int clock_gettime(int _ignore, struct timespec *spec)      //C-file part
{
    __int64 wintime; GetSystemTimeAsFileTime((FILETIME*)&wintime);
    wintime      -=116444736000000000L;  //1jan1601 to 1jan1970
    spec->tv_sec  =wintime / 10000000L;           //seconds
    spec->tv_nsec =wintime % 10000000L *100;      //nano-seconds
    return 0;
}

double difftime(long current, long reference)
{
    return ((double)current - (double)reference);
}

#else

#include <time.h>
#include <unistd.h>
#include <sys/time.h>

#endif


uint8_t open_port(libusb_device_handle *devh);
void close_port(libusb_device_handle *devh);
double diff_timespec(struct timespec *current, struct timespec *reference);
static int16_t read_byte(libusb_device_handle *devh);
static void extract_payload(uint8_t* raw_payload_buf, uint32_t raw_payload_len, uint8_t* payload_buf, uint32_t* payload_len);
void read_frame(libusb_device_handle *devh,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
void read_unframed(libusb_device_handle *devh, uint16_t start_byte_ms, uint32_t *receiveBytes, uint8_t *receiveBuffer);
static int32_t create_frame(uint8_t *frame_buf, uint8_t channel_ID, uint8_t *payload, uint32_t payload_len);
static int write_frame(libusb_device_handle *devh,uint8_t *frame_buf, uint32_t len);
void send_to_camera(libusb_device_handle *devh, uint8_t channel_ID, uint32_t sendBytes, uint8_t *sendPayload);


#endif // LIBUSB_BINARY_PROTOCOL_H
