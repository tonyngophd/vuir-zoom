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

#ifndef UART_CONNECTOR_H
#define UART_CONNECTOR_H

#include <stdint.h>
#include <stdio.h> 
#include <cstring>
#include "ReturnCodes.h"
#include <sstream>
#include <string.h>
#include <libusb-1.0/libusb.h>
extern "C" {
#include "libusb_binary_protocol.h"
}

using namespace std;

#ifdef _WIN32
#define FLR_EXPORT __declspec(dllexport)
#else
#define FLR_EXPORT
#endif

FLR_EXPORT void ReadTimeoutSet(unsigned int timeout);
FLR_EXPORT void SendToCamera( uint8_t channelID,  uint32_t sendBytes, uint8_t *sendData);
FLR_EXPORT void ReadFrame( uint8_t channelID, uint32_t *receiveBytes, uint8_t *receiveData);
FLR_EXPORT void ReadUnframed(uint32_t *receiveBytes, uint8_t *receiveData);
FLR_EXPORT FLR_RESULT Initialize(int32_t port_num, int32_t baud_rate);
FLR_EXPORT FLR_RESULT Initialize(char *port_name, int32_t baud_rate);
FLR_EXPORT FLR_RESULT Initialize(libusb_device_handle *devh);
FLR_EXPORT void Close(void);

FLR_EXPORT int32_t CheckDataReady(uint8_t *channel_ID, uint32_t *receiveBytes, const uint8_t **receiveData);
FLR_EXPORT void Close_Port_Before_FOV_Sort(int32_t ttyACM_num);

extern uint8_t isInitialized;
extern uint8_t isInitializeds[6];
extern int bosonUSBPort; // ranges form 0 to a large number depending on the machine (Rasp Pi)
extern int bosonUSBPorts[6]; // ranges form 0 to a large number depending on the machine (Rasp Pi)
extern int readTimeout;

#endif //UART_CONNECTOR_H
