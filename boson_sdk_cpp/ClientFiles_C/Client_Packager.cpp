//  /////////////////////////////////////////////////////
//  // DO NOT EDIT.  This is a machine generated file. //
//  /////////////////////////////////////////////////////
/******************************************************************************/
/*                                                                            */
/*  Copyright (C) 2018, FLIR Systems                                          */
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

#include "Client_Packager.h"

static uint32_t commandCount = 0;

// Begin Module: gao
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetGainState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETGAINSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetGainState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetGainState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETGAINSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetGainState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetFfcState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetFfcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetFfcState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetFfcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetTempCorrectionState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETTEMPCORRECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetTempCorrectionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetTempCorrectionState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETTEMPCORRECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetTempCorrectionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetIConstL(const int16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = data;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETICONSTL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetIConstL()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetIConstL(int16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETICONSTL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int16_t outVal;
        byteToINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (int16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetIConstL()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetIConstM(const int16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = data;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETICONSTM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetIConstM()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetIConstM(int16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETICONSTM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int16_t outVal;
        byteToINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (int16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetIConstM()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetAveragerState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETAVERAGERSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetAveragerState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetAveragerState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetAveragerState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetNumFFCFrames(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETNUMFFCFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetNumFFCFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetNumFFCFrames(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETNUMFFCFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetNumFFCFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetAveragerThreshold(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetAveragerThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetTestRampState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETTESTRAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetTestRampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetTestRampState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETTESTRAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetTestRampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetSffcState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETSFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetSffcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetSffcState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETSFFCSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetSffcState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetNucType(const FLR_GAO_NUC_TYPE_E nucType) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write nucType to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_GAO_NUC_TYPE_E inVal = nucType;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETNUCTYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetNucType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetNucType(FLR_GAO_NUC_TYPE_E *nucType) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETNUCTYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read nucType from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *nucType = (FLR_GAO_NUC_TYPE_E)outVal;
        inPtr+=4;
    }// end of nucType handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetNucType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetFfcZeroMeanState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETFFCZEROMEANSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetFfcZeroMeanState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetFfcZeroMeanState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETFFCZEROMEANSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetFfcZeroMeanState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetCombineMeansEnableState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETCOMBINEMEANSENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetCombineMeansEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetCombineMeansEnableState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETCOMBINEMEANSENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetCombineMeansEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsPopThreshold(const uint16_t threshold) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write threshold to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = threshold;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSPOPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsPopThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsPopThreshold(uint16_t *threshold) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSPOPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read threshold from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *threshold = (uint16_t)outVal;
        inPtr+=2;
    }// end of threshold handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsPopThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsCloseThreshold(const uint16_t threshold) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write threshold to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = threshold;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSCLOSETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsCloseThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsCloseThreshold(uint16_t *threshold) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSCLOSETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read threshold from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *threshold = (uint16_t)outVal;
        inPtr+=2;
    }// end of threshold handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsCloseThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsTooFewQuit(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSTOOFEWQUIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsTooFewQuit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsTooFewQuit(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSTOOFEWQUIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsTooFewQuit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsTooFew(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSTOOFEW, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsTooFew()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsTooFew(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSTOOFEW, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsTooFew()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsMinCorrection(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSMINCORRECTION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsMinCorrection()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsMinCorrection(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSMINCORRECTION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsMinCorrection()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsDamping(const uint8_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = data;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsDamping(uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *data = (uint8_t)outVal;
        inPtr+=1;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsFrameHysteresis(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSFRAMEHYSTERESIS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsFrameHysteresis()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsFrameHysteresis(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSFRAMEHYSTERESIS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsFrameHysteresis()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsBadDamping(const uint8_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = data;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSBADDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsBadDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsBadDamping(uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSBADDAMPING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *data = (uint8_t)outVal;
        inPtr+=1;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsBadDamping()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoSetRnsNumGoodDampingThreshold(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_SETRNSNUMGOODDAMPINGTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoSetRnsNumGoodDampingThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsNumGoodDampingThreshold(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSNUMGOODDAMPINGTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsNumGoodDampingThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetRnsFfcDesired(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETRNSFFCDESIRED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetRnsFfcDesired()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgGaoGetAveragerDesiredState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, GAO_GETAVERAGERDESIREDSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgGaoGetAveragerDesiredState()

// End Module: gao
// Begin Module: lagrange
// End Module: lagrange
// Begin Module: roic
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFPATemp(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFPATemp()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFrameCount(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFRAMECOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFrameCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetActiveNormalizationTarget(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETACTIVENORMALIZATIONTARGET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetActiveNormalizationTarget()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicSetFPARampState(const FLR_ENABLE_E state) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write state to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = state;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPARAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicSetFPARampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFPARampState(FLR_ENABLE_E *state) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPARAMPSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read state from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *state = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of state handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFPARampState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetSensorADC1(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETSENSORADC1, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetSensorADC1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetSensorADC2(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETSENSORADC2, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetSensorADC2()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicSetFPATempOffset(const int16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = data;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicSetFPATempOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFPATempOffset(int16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int16_t outVal;
        byteToINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (int16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFPATempOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicSetFPATempMode(const FLR_ROIC_TEMP_MODE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ROIC_TEMP_MODE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicSetFPATempMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFPATempMode(FLR_ROIC_TEMP_MODE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ROIC_TEMP_MODE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFPATempMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFPATempTable(FLR_ROIC_FPATEMP_TABLE_T *table) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 64;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPTABLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read table from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_ROIC_FPATEMP_TABLE_T outVal;
        byteToFLR_ROIC_FPATEMP_TABLE_T( (const uint8_t *) inPtr, &outVal);
        *table = (FLR_ROIC_FPATEMP_TABLE_T)outVal;
        inPtr+=64;
    }// end of table handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFPATempTable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicSetFPATempValue(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_SETFPATEMPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicSetFPATempValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetFPATempValue(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETFPATEMPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetFPATempValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetPreambleError(uint32_t *preambleError) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETPREAMBLEERROR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read preambleError from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *preambleError = (uint32_t)outVal;
        inPtr+=4;
    }// end of preambleError handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetPreambleError()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicInducePreambleError(const uint32_t everyNthFrame) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write everyNthFrame to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = everyNthFrame;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_INDUCEPREAMBLEERROR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicInducePreambleError()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgRoicGetRoicStarted(FLR_ENABLE_E *roicStarted) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, ROIC_GETROICSTARTED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read roicStarted from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *roicStarted = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of roicStarted handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgRoicGetRoicStarted()

// End Module: roic
// Begin Module: bpr
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprSetState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprSetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetStats(uint32_t *threeby, uint32_t *fiveby, uint32_t *rows, uint32_t *budget, uint32_t *used) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 20;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETSTATS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read threeby from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *threeby = (uint32_t)outVal;
        inPtr+=4;
    }// end of threeby handling
    
    // read fiveby from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *fiveby = (uint32_t)outVal;
        inPtr+=4;
    }// end of fiveby handling
    
    // read rows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *rows = (uint32_t)outVal;
        inPtr+=4;
    }// end of rows handling
    
    // read budget from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *budget = (uint32_t)outVal;
        inPtr+=4;
    }// end of budget handling
    
    // read used from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *used = (uint32_t)outVal;
        inPtr+=4;
    }// end of used handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetStats()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetDisplayMode(FLR_BPR_DISPLAY_MODE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_BPR_DISPLAY_MODE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetDisplayMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprSetDisplayMode(const FLR_BPR_DISPLAY_MODE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_BPR_DISPLAY_MODE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprSetDisplayMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetDisplayModeMinValue(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETDISPLAYMODEMINVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetDisplayModeMinValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprSetDisplayModeMinValue(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETDISPLAYMODEMINVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprSetDisplayModeMinValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetDisplayModeMaxValue(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETDISPLAYMODEMAXVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetDisplayModeMaxValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprSetDisplayModeMaxValue(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETDISPLAYMODEMAXVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprSetDisplayModeMaxValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetWorkBufIndex(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETWORKBUFINDEX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetWorkBufIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprSetWorkBufIndex(const uint32_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = data;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_SETWORKBUFINDEX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprSetWorkBufIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBprGetWorkBufStats(uint32_t *threeby, uint32_t *fiveby, uint32_t *rows, uint32_t *budget, uint32_t *used) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 20;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BPR_GETWORKBUFSTATS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read threeby from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *threeby = (uint32_t)outVal;
        inPtr+=4;
    }// end of threeby handling
    
    // read fiveby from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *fiveby = (uint32_t)outVal;
        inPtr+=4;
    }// end of fiveby handling
    
    // read rows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *rows = (uint32_t)outVal;
        inPtr+=4;
    }// end of rows handling
    
    // read budget from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *budget = (uint32_t)outVal;
        inPtr+=4;
    }// end of budget handling
    
    // read used from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *used = (uint32_t)outVal;
        inPtr+=4;
    }// end of used handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBprGetWorkBufStats()

// End Module: bpr
// Begin Module: telemetry
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTelemetrySetState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTelemetrySetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTelemetryGetState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTelemetryGetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTelemetrySetLocation(const FLR_TELEMETRY_LOC_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_TELEMETRY_LOC_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTelemetrySetLocation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTelemetryGetLocation(FLR_TELEMETRY_LOC_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_TELEMETRY_LOC_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTelemetryGetLocation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTelemetrySetPacking(const FLR_TELEMETRY_PACKING_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_TELEMETRY_PACKING_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_SETPACKING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTelemetrySetPacking()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTelemetryGetPacking(FLR_TELEMETRY_PACKING_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TELEMETRY_GETPACKING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_TELEMETRY_PACKING_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTelemetryGetPacking()

// End Module: telemetry
// Begin Module: boson
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetCameraSN(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCAMERASN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetCameraSN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetCameraPN(FLR_BOSON_PARTNUMBER_T *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 20;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCAMERAPN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_BOSON_PARTNUMBER_T outVal;
        byteToFLR_BOSON_PARTNUMBER_T( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_BOSON_PARTNUMBER_T)outVal;
        inPtr+=20;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetCameraPN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSensorSN(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORSN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSensorSN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonRunFFC() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RUNFFC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonRunFFC()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFFCTempThreshold(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFFCTempThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFFCTempThreshold(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFFCTempThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFFCFrameThreshold(const uint32_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = data;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCFRAMETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFFCFrameThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFFCFrameThreshold(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCFRAMETHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFFCFrameThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFFCInProgress(int16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCINPROGRESS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int16_t outVal;
        byteToINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (int16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFFCInProgress()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonReboot() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_REBOOT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonReboot()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFFCMode(const FLR_BOSON_FFCMODE_E ffcMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ffcMode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_BOSON_FFCMODE_E inVal = ffcMode;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFFCMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFFCMode(FLR_BOSON_FFCMODE_E *ffcMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read ffcMode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *ffcMode = (FLR_BOSON_FFCMODE_E)outVal;
        inPtr+=4;
    }// end of ffcMode handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFFCMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetGainMode(const FLR_BOSON_GAINMODE_E gainMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write gainMode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_BOSON_GAINMODE_E inVal = gainMode;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETGAINMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetGainMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetGainMode(FLR_BOSON_GAINMODE_E *gainMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETGAINMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read gainMode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *gainMode = (FLR_BOSON_GAINMODE_E)outVal;
        inPtr+=4;
    }// end of gainMode handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetGainMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonWriteDynamicHeaderToFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEDYNAMICHEADERTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonWriteDynamicHeaderToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonReadDynamicHeaderFromFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_READDYNAMICHEADERFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonReadDynamicHeaderFromFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESTOREFACTORYDEFAULTSFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonRestoreFactoryDefaultsFromFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESTOREFACTORYBADPIXELSFROMFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonRestoreFactoryBadPixelsFromFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonWriteBadPixelsToFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEBADPIXELSTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonWriteBadPixelsToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 12;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSOFTWAREREV, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read major from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *major = (uint32_t)outVal;
        inPtr+=4;
    }// end of major handling
    
    // read minor from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *minor = (uint32_t)outVal;
        inPtr+=4;
    }// end of minor handling
    
    // read patch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *patch = (uint32_t)outVal;
        inPtr+=4;
    }// end of patch handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSoftwareRev()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetBadPixelLocation(const uint32_t row, const uint32_t col) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write row to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = row;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write col to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = col;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETBADPIXELLOCATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetBadPixelLocation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonlookupFPATempDegCx10(int16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_LOOKUPFPATEMPDEGCX10, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int16_t outVal;
        byteToINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (int16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonlookupFPATempDegCx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonlookupFPATempDegKx10(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_LOOKUPFPATEMPDEGKX10, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonlookupFPATempDegKx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonWriteLensNvFfcToFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITELENSNVFFCTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonWriteLensNvFfcToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonWriteLensGainToFlash() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITELENSGAINTOFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonWriteLensGainToFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetLensNumber(const uint32_t lensNumber) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write lensNumber to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = lensNumber;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETLENSNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetLensNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetLensNumber(uint32_t *lensNumber) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLENSNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read lensNumber from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *lensNumber = (uint32_t)outVal;
        inPtr+=4;
    }// end of lensNumber handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetLensNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetTableNumber(const uint32_t tableNumber) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write tableNumber to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = tableNumber;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetTableNumber(uint32_t *tableNumber) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read tableNumber from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *tableNumber = (uint32_t)outVal;
        inPtr+=4;
    }// end of tableNumber handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSensorPN(FLR_BOSON_SENSOR_PARTNUMBER_T *sensorPN) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 32;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORPN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read sensorPN from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_BOSON_SENSOR_PARTNUMBER_T outVal;
        byteToFLR_BOSON_SENSOR_PARTNUMBER_T( (const uint8_t *) inPtr, &outVal);
        *sensorPN = (FLR_BOSON_SENSOR_PARTNUMBER_T)outVal;
        inPtr+=32;
    }// end of sensorPN handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSensorPN()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetGainSwitchParams(const FLR_BOSON_GAIN_SWITCH_PARAMS_T parm_struct) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 16;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write parm_struct to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_BOSON_GAIN_SWITCH_PARAMS_T *inVal = (const FLR_BOSON_GAIN_SWITCH_PARAMS_T *) &parm_struct;
        FLR_BOSON_GAIN_SWITCH_PARAMS_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 16;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETGAINSWITCHPARAMS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetGainSwitchParams()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetGainSwitchParams(FLR_BOSON_GAIN_SWITCH_PARAMS_T *parm_struct) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 16;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETGAINSWITCHPARAMS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read parm_struct from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_BOSON_GAIN_SWITCH_PARAMS_T outVal;
        byteToFLR_BOSON_GAIN_SWITCH_PARAMS_T( (const uint8_t *) inPtr, &outVal);
        *parm_struct = (FLR_BOSON_GAIN_SWITCH_PARAMS_T)outVal;
        inPtr+=16;
    }// end of parm_struct handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetGainSwitchParams()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSwitchToHighGainFlag(uint8_t *switchToHighGainFlag) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWITCHTOHIGHGAINFLAG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read switchToHighGainFlag from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *switchToHighGainFlag = (uint8_t)outVal;
        inPtr+=1;
    }// end of switchToHighGainFlag handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSwitchToHighGainFlag()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSwitchToLowGainFlag(uint8_t *switchToLowGainFlag) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWITCHTOLOWGAINFLAG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read switchToLowGainFlag from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *switchToLowGainFlag = (uint8_t)outVal;
        inPtr+=1;
    }// end of switchToLowGainFlag handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSwitchToLowGainFlag()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetCLowToHighPercent(uint32_t *cLowToHighPercent) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETCLOWTOHIGHPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read cLowToHighPercent from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *cLowToHighPercent = (uint32_t)outVal;
        inPtr+=4;
    }// end of cLowToHighPercent handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetCLowToHighPercent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetMaxNUCTables(uint32_t *maxNUCTables) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMAXNUCTABLES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read maxNUCTables from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *maxNUCTables = (uint32_t)outVal;
        inPtr+=4;
    }// end of maxNUCTables handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetMaxNUCTables()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetMaxLensTables(uint32_t *maxLensTables) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMAXLENSTABLES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read maxLensTables from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *maxLensTables = (uint32_t)outVal;
        inPtr+=4;
    }// end of maxLensTables handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetMaxLensTables()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFfcWaitCloseFrames(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWAITCLOSEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFfcWaitCloseFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFfcWaitCloseFrames(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWAITCLOSEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFfcWaitCloseFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonCheckForTableSwitch() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_CHECKFORTABLESWITCH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonCheckForTableSwitch()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetDesiredTableNumber(uint32_t *desiredTableNumber) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETDESIREDTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read desiredTableNumber from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *desiredTableNumber = (uint32_t)outVal;
        inPtr+=4;
    }// end of desiredTableNumber handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetDesiredTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFfcStatus(FLR_BOSON_FFCSTATUS_E *ffcStatus) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCSTATUS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read ffcStatus from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *ffcStatus = (FLR_BOSON_FFCSTATUS_E)outVal;
        inPtr+=4;
    }// end of ffcStatus handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFfcStatus()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFfcDesired(uint32_t *ffcDesired) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCDESIRED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read ffcDesired from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *ffcDesired = (uint32_t)outVal;
        inPtr+=4;
    }// end of ffcDesired handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFfcDesired()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSwRevInHeader(uint32_t *major, uint32_t *minor, uint32_t *patch) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 12;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSWREVINHEADER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read major from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *major = (uint32_t)outVal;
        inPtr+=4;
    }// end of major handling
    
    // read minor from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *minor = (uint32_t)outVal;
        inPtr+=4;
    }// end of minor handling
    
    // read patch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *patch = (uint32_t)outVal;
        inPtr+=4;
    }// end of patch handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSwRevInHeader()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetLastFFCFrameCount(uint32_t *frameCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLASTFFCFRAMECOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read frameCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *frameCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of frameCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetLastFFCFrameCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetLastFFCTempDegKx10(uint16_t *temp) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLASTFFCTEMPDEGKX10, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read temp from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *temp = (uint16_t)outVal;
        inPtr+=2;
    }// end of temp handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetLastFFCTempDegKx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetTableSwitchDesired(uint16_t *tableSwitchDesired) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTABLESWITCHDESIRED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read tableSwitchDesired from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *tableSwitchDesired = (uint16_t)outVal;
        inPtr+=2;
    }// end of tableSwitchDesired handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetTableSwitchDesired()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetOverTempThreshold(float *temperatureInC) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read temperatureInC from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *temperatureInC = (float)outVal;
        inPtr+=4;
    }// end of temperatureInC handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetOverTempThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetLowPowerMode(uint16_t *lowPowerMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLOWPOWERMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read lowPowerMode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *lowPowerMode = (uint16_t)outVal;
        inPtr+=2;
    }// end of lowPowerMode handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetLowPowerMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetOverTempEventOccurred(uint16_t *overTempEventOccurred) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPEVENTOCCURRED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read overTempEventOccurred from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *overTempEventOccurred = (uint16_t)outVal;
        inPtr+=2;
    }// end of overTempEventOccurred handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetOverTempEventOccurred()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetPermitThermalShutdownOverride(const FLR_ENABLE_E permitThermalShutdownOverride) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write permitThermalShutdownOverride to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = permitThermalShutdownOverride;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETPERMITTHERMALSHUTDOWNOVERRIDE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetPermitThermalShutdownOverride()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetPermitThermalShutdownOverride(FLR_ENABLE_E *permitThermalShutdownOverride) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETPERMITTHERMALSHUTDOWNOVERRIDE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read permitThermalShutdownOverride from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *permitThermalShutdownOverride = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of permitThermalShutdownOverride handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetPermitThermalShutdownOverride()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetMyriadTemp(float *myriadTemp) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETMYRIADTEMP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read myriadTemp from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *myriadTemp = (float)outVal;
        inPtr+=4;
    }// end of myriadTemp handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetMyriadTemp()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetNvFFCNucTableNumberLens0(int32_t *nvFFCNucTableNumberLens0) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCNUCTABLENUMBERLENS0, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read nvFFCNucTableNumberLens0 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *nvFFCNucTableNumberLens0 = (int32_t)outVal;
        inPtr+=4;
    }// end of nvFFCNucTableNumberLens0 handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetNvFFCNucTableNumberLens0()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetNvFFCNucTableNumberLens1(int32_t *nvFFCNucTableNumberLens1) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCNUCTABLENUMBERLENS1, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read nvFFCNucTableNumberLens1 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *nvFFCNucTableNumberLens1 = (int32_t)outVal;
        inPtr+=4;
    }// end of nvFFCNucTableNumberLens1 handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetNvFFCNucTableNumberLens1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens0(uint16_t *nvFFCFPATempDegKx10Lens0) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCFPATEMPDEGKX10LENS0, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read nvFFCFPATempDegKx10Lens0 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *nvFFCFPATempDegKx10Lens0 = (uint16_t)outVal;
        inPtr+=2;
    }// end of nvFFCFPATempDegKx10Lens0 handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens0()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens1(uint16_t *nvFFCFPATempDegKx10Lens1) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCFPATEMPDEGKX10LENS1, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read nvFFCFPATempDegKx10Lens1 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *nvFFCFPATempDegKx10Lens1 = (uint16_t)outVal;
        inPtr+=2;
    }// end of nvFFCFPATempDegKx10Lens1 handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetNvFFCFPATempDegKx10Lens1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFFCWarnTimeInSecx10(const uint16_t ffcWarnTime) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ffcWarnTime to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = ffcWarnTime;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWARNTIMEINSECX10, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFFCWarnTimeInSecx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFFCWarnTimeInSecx10(uint16_t *ffcWarnTime) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWARNTIMEINSECX10, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read ffcWarnTime from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *ffcWarnTime = (uint16_t)outVal;
        inPtr+=2;
    }// end of ffcWarnTime handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFFCWarnTimeInSecx10()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetOverTempEventCounter(uint32_t *overTempEventCounter) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPEVENTCOUNTER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read overTempEventCounter from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *overTempEventCounter = (uint32_t)outVal;
        inPtr+=4;
    }// end of overTempEventCounter handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetOverTempEventCounter()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetOverTempTimerInSec(const uint16_t overTempTimerInSec) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write overTempTimerInSec to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = overTempTimerInSec;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETOVERTEMPTIMERINSEC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetOverTempTimerInSec()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetOverTempTimerInSec(uint16_t *overTempTimerInSec) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETOVERTEMPTIMERINSEC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read overTempTimerInSec from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *overTempTimerInSec = (uint16_t)outVal;
        inPtr+=2;
    }// end of overTempTimerInSec handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetOverTempTimerInSec()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonUnloadCurrentLensCorrections() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_UNLOADCURRENTLENSCORRECTIONS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonUnloadCurrentLensCorrections()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetTimeForQuickFFCsInSecs(const uint32_t timeForQuickFFCsInSecs) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write timeForQuickFFCsInSecs to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = timeForQuickFFCsInSecs;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETTIMEFORQUICKFFCSINSECS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetTimeForQuickFFCsInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetTimeForQuickFFCsInSecs(uint32_t *timeForQuickFFCsInSecs) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTIMEFORQUICKFFCSINSECS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read timeForQuickFFCsInSecs from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *timeForQuickFFCsInSecs = (uint32_t)outVal;
        inPtr+=4;
    }// end of timeForQuickFFCsInSecs handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetTimeForQuickFFCsInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonReloadCurrentLensCorrections() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RELOADCURRENTLENSCORRECTIONS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonReloadCurrentLensCorrections()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetBootTimestamps(float *FirstLight, float *StartInit, float *BosonExecDone, float *Timestamp4) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 16;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETBOOTTIMESTAMPS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read FirstLight from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *FirstLight = (float)outVal;
        inPtr+=4;
    }// end of FirstLight handling
    
    // read StartInit from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *StartInit = (float)outVal;
        inPtr+=4;
    }// end of StartInit handling
    
    // read BosonExecDone from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *BosonExecDone = (float)outVal;
        inPtr+=4;
    }// end of BosonExecDone handling
    
    // read Timestamp4 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *Timestamp4 = (float)outVal;
        inPtr+=4;
    }// end of Timestamp4 handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetBootTimestamps()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSet2ptResponsivityHighLimit(const float responsivityHighLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write responsivityHighLimit to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = responsivityHighLimit;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SET2PTRESPONSIVITYHIGHLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSet2ptResponsivityHighLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptResponsivityHighLimit(float *responsivityHighLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTRESPONSIVITYHIGHLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read responsivityHighLimit from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *responsivityHighLimit = (float)outVal;
        inPtr+=4;
    }// end of responsivityHighLimit handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptResponsivityHighLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSet2ptResponsivityLowLimit(const float responsivityLowLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write responsivityLowLimit to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = responsivityLowLimit;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SET2PTRESPONSIVITYLOWLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSet2ptResponsivityLowLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptResponsivityLowLimit(float *responsivityLowLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTRESPONSIVITYLOWLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read responsivityLowLimit from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *responsivityLowLimit = (float)outVal;
        inPtr+=4;
    }// end of responsivityLowLimit handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptResponsivityLowLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptResponsivityHighLimitErrorCount(uint32_t *responsivityHighLimitErrorCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTRESPONSIVITYHIGHLIMITERRORCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read responsivityHighLimitErrorCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *responsivityHighLimitErrorCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of responsivityHighLimitErrorCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptResponsivityHighLimitErrorCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptResponsivityLowLimitErrorCount(uint32_t *responsivityLowLimitErrorCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTRESPONSIVITYLOWLIMITERRORCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read responsivityLowLimitErrorCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *responsivityLowLimitErrorCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of responsivityLowLimitErrorCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptResponsivityLowLimitErrorCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptPixelHighLimit(uint32_t *pixelHighLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTPIXELHIGHLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read pixelHighLimit from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *pixelHighLimit = (uint32_t)outVal;
        inPtr+=4;
    }// end of pixelHighLimit handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptPixelHighLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSet2ptPixelHighLimit(const uint32_t pixelHighLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write pixelHighLimit to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = pixelHighLimit;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SET2PTPIXELHIGHLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSet2ptPixelHighLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptPixelLowLimit(uint32_t *pixelLowLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTPIXELLOWLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read pixelLowLimit from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *pixelLowLimit = (uint32_t)outVal;
        inPtr+=4;
    }// end of pixelLowLimit handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptPixelLowLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSet2ptPixelLowLimit(const uint32_t pixelLowLimit) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write pixelLowLimit to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = pixelLowLimit;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SET2PTPIXELLOWLIMIT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSet2ptPixelLowLimit()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptPixelHighLimitErrorCount(uint32_t *pixelHighLimitErrorCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTPIXELHIGHLIMITERRORCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read pixelHighLimitErrorCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *pixelHighLimitErrorCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of pixelHighLimitErrorCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptPixelHighLimitErrorCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptPixelLowLimitErrorCount(uint32_t *pixelLowLimitErrorCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTPIXELLOWLIMITERRORCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read pixelLowLimitErrorCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *pixelLowLimitErrorCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of pixelLowLimitErrorCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptPixelLowLimitErrorCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptTotalBadPixelErrorCount(uint32_t *totalBadPixelErrorCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTTOTALBADPIXELERRORCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read totalBadPixelErrorCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *totalBadPixelErrorCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of totalBadPixelErrorCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptTotalBadPixelErrorCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptNucStatusState(uint32_t *statusState, uint32_t *statusStringLength) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTNUCSTATUSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read statusState from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *statusState = (uint32_t)outVal;
        inPtr+=4;
    }// end of statusState handling
    
    // read statusStringLength from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *statusStringLength = (uint32_t)outVal;
        inPtr+=4;
    }// end of statusStringLength handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptNucStatusState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSet2ptNucStatusState(const uint32_t statusState) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write statusState to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = statusState;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SET2PTNUCSTATUSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSet2ptNucStatusState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonReset2ptNucStatusState() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_RESET2PTNUCSTATUSSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonReset2ptNucStatusState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptNucStatusStateString(const uint32_t statusState, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 6;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write statusState to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = statusState;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTNUCSTATUSSTATESTRING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
        inPtr+=sizeInBytes;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptNucStatusStateString()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptNucResultCode(uint32_t *resultCode, uint32_t *resultStringLength) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTNUCRESULTCODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read resultCode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *resultCode = (uint32_t)outVal;
        inPtr+=4;
    }// end of resultCode handling
    
    // read resultStringLength from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *resultStringLength = (uint32_t)outVal;
        inPtr+=4;
    }// end of resultStringLength handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptNucResultCode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptNucResultString(const uint32_t resultNumber, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 6;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write resultNumber to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = resultNumber;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTNUCRESULTSTRING, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
        inPtr+=sizeInBytes;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptNucResultString()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBoson2ptNucStart() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_2PTNUCSTART, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBoson2ptNucStart()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBoson2ptNucNext() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_2PTNUCNEXT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBoson2ptNucNext()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBoson2ptNucAbort() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_2PTNUCABORT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBoson2ptNucAbort()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetExtSyncMode(const FLR_BOSON_EXT_SYNC_MODE_E mode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write mode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_BOSON_EXT_SYNC_MODE_E inVal = mode;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETEXTSYNCMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetExtSyncMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetExtSyncMode(FLR_BOSON_EXT_SYNC_MODE_E *mode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETEXTSYNCMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read mode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *mode = (FLR_BOSON_EXT_SYNC_MODE_E)outVal;
        inPtr+=4;
    }// end of mode handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetExtSyncMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetLastCommand(uint32_t *sequenceNum, uint32_t *cmdID) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETLASTCOMMAND, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read sequenceNum from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *sequenceNum = (uint32_t)outVal;
        inPtr+=4;
    }// end of sequenceNum handling
    
    // read cmdID from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *cmdID = (uint32_t)outVal;
        inPtr+=4;
    }// end of cmdID handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetLastCommand()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSet2ptFrameStdClipValue(const float frameStdClipValue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write frameStdClipValue to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = frameStdClipValue;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SET2PTFRAMESTDCLIPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSet2ptFrameStdClipValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGet2ptFrameStdClipValue(float *frameStdClipValue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GET2PTFRAMESTDCLIPVALUE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read frameStdClipValue from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *frameStdClipValue = (float)outVal;
        inPtr+=4;
    }// end of frameStdClipValue handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGet2ptFrameStdClipValue()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetSensorHostCalVersion(uint32_t *version) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETSENSORHOSTCALVERSION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read version from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *version = (uint32_t)outVal;
        inPtr+=4;
    }// end of version handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetSensorHostCalVersion()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetDesiredStartupTableNumber(const int32_t table) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write table to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int32_t inVal = table;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETDESIREDSTARTUPTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetDesiredStartupTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetDesiredStartupTableNumber(int32_t *table) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETDESIREDSTARTUPTABLENUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read table from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *table = (int32_t)outVal;
        inPtr+=4;
    }// end of table handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetDesiredStartupTableNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetNvFFCMeanValueLens0(const float meanValue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write meanValue to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = meanValue;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETNVFFCMEANVALUELENS0, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetNvFFCMeanValueLens0()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetNvFFCMeanValueLens0(float *meanValue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCMEANVALUELENS0, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read meanValue from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *meanValue = (float)outVal;
        inPtr+=4;
    }// end of meanValue handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetNvFFCMeanValueLens0()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetNvFFCMeanValueLens1(const float meanValue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write meanValue to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = meanValue;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETNVFFCMEANVALUELENS1, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetNvFFCMeanValueLens1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetNvFFCMeanValueLens1(float *meanValue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETNVFFCMEANVALUELENS1, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read meanValue from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *meanValue = (float)outVal;
        inPtr+=4;
    }// end of meanValue handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetNvFFCMeanValueLens1()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetInvertImage(const FLR_ENABLE_E invertImage) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write invertImage to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = invertImage;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETINVERTIMAGE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetInvertImage()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetInvertImage(FLR_ENABLE_E *invertImage) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETINVERTIMAGE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read invertImage from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *invertImage = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of invertImage handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetInvertImage()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetRevertImage(const FLR_ENABLE_E revertImage) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write revertImage to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = revertImage;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETREVERTIMAGE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetRevertImage()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetRevertImage(FLR_ENABLE_E *revertImage) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETREVERTIMAGE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read revertImage from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *revertImage = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of revertImage handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetRevertImage()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetTimeStamp(const FLR_BOSON_TIMESTAMPTYPE_E timeStampType, float *timeStamp) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write timeStampType to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_BOSON_TIMESTAMPTYPE_E inVal = timeStampType;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTIMESTAMP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read timeStamp from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *timeStamp = (float)outVal;
        inPtr+=4;
    }// end of timeStamp handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetTimeStamp()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetISPFrameCount(uint32_t *ispFrameCount) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETISPFRAMECOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read ispFrameCount from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *ispFrameCount = (uint32_t)outVal;
        inPtr+=4;
    }// end of ispFrameCount handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetISPFrameCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonWriteUserBadPixelsToAllTables() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEUSERBADPIXELSTOALLTABLES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonWriteUserBadPixelsToAllTables()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonWriteFactoryBadPixelsToAllTables() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_WRITEFACTORYBADPIXELSTOALLTABLES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonWriteFactoryBadPixelsToAllTables()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetTempDiodeStatus(FLR_BOSON_TEMP_DIODE_STATUS_E *status) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETTEMPDIODESTATUS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read status from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *status = (FLR_BOSON_TEMP_DIODE_STATUS_E)outVal;
        inPtr+=4;
    }// end of status handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetTempDiodeStatus()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonClearFactoryBadPixelsInDDR() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_CLEARFACTORYBADPIXELSINDDR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonClearFactoryBadPixelsInDDR()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFfcWaitOpenFrames(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWAITOPENFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFfcWaitOpenFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFfcWaitOpenFrames(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWAITOPENFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFfcWaitOpenFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonGetFfcWaitOpenFlagSettleFrames(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_GETFFCWAITOPENFLAGSETTLEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonGetFfcWaitOpenFlagSettleFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgBosonSetFfcWaitOpenFlagSettleFrames(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, BOSON_SETFFCWAITOPENFLAGSETTLEFRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgBosonSetFfcWaitOpenFlagSettleFrames()

// End Module: boson
// Begin Module: dvo
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetAnalogVideoState(const FLR_ENABLE_E analogVideoState) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write analogVideoState to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = analogVideoState;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETANALOGVIDEOSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetAnalogVideoState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetAnalogVideoState(FLR_ENABLE_E *analogVideoState) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETANALOGVIDEOSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read analogVideoState from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *analogVideoState = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of analogVideoState handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetAnalogVideoState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetOutputFormat(const FLR_DVO_OUTPUT_FORMAT_E format) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write format to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_OUTPUT_FORMAT_E inVal = format;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTFORMAT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetOutputFormat()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetOutputFormat(FLR_DVO_OUTPUT_FORMAT_E *format) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTFORMAT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read format from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *format = (FLR_DVO_OUTPUT_FORMAT_E)outVal;
        inPtr+=4;
    }// end of format handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetOutputFormat()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetOutputYCbCrSettings(const FLR_DVO_YCBCR_SETTINGS_T settings) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 12;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write settings to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_YCBCR_SETTINGS_T *inVal = (const FLR_DVO_YCBCR_SETTINGS_T *) &settings;
        FLR_DVO_YCBCR_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 12;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTYCBCRSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetOutputYCbCrSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetOutputYCbCrSettings(FLR_DVO_YCBCR_SETTINGS_T *settings) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 12;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTYCBCRSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read settings from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_DVO_YCBCR_SETTINGS_T outVal;
        byteToFLR_DVO_YCBCR_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
        *settings = (FLR_DVO_YCBCR_SETTINGS_T)outVal;
        inPtr+=12;
    }// end of settings handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetOutputYCbCrSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetOutputRGBSettings(const FLR_DVO_RGB_SETTINGS_T settings) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write settings to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_RGB_SETTINGS_T *inVal = (const FLR_DVO_RGB_SETTINGS_T *) &settings;
        FLR_DVO_RGB_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 8;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTRGBSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetOutputRGBSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetOutputRGBSettings(FLR_DVO_RGB_SETTINGS_T *settings) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTRGBSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read settings from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_DVO_RGB_SETTINGS_T outVal;
        byteToFLR_DVO_RGB_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
        *settings = (FLR_DVO_RGB_SETTINGS_T)outVal;
        inPtr+=8;
    }// end of settings handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetOutputRGBSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoApplyCustomSettings() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_APPLYCUSTOMSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoApplyCustomSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetDisplayMode(const FLR_DVO_DISPLAY_MODE_E displayMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write displayMode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_DISPLAY_MODE_E inVal = displayMode;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetDisplayMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetDisplayMode(FLR_DVO_DISPLAY_MODE_E *displayMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETDISPLAYMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read displayMode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *displayMode = (FLR_DVO_DISPLAY_MODE_E)outVal;
        inPtr+=4;
    }// end of displayMode handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetDisplayMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetType(const FLR_DVO_TYPE_E tap) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write tap to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_TYPE_E inVal = tap;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetType(FLR_DVO_TYPE_E *tap) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read tap from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *tap = (FLR_DVO_TYPE_E)outVal;
        inPtr+=4;
    }// end of tap handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetVideoStandard(const FLR_DVO_VIDEO_STANDARD_E videoStandard) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write videoStandard to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_VIDEO_STANDARD_E inVal = videoStandard;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETVIDEOSTANDARD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetVideoStandard()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetVideoStandard(FLR_DVO_VIDEO_STANDARD_E *videoStandard) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETVIDEOSTANDARD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read videoStandard from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *videoStandard = (FLR_DVO_VIDEO_STANDARD_E)outVal;
        inPtr+=4;
    }// end of videoStandard handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetVideoStandard()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetCheckVideoDacPresent(const FLR_ENABLE_E checkVideoDacPresent) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write checkVideoDacPresent to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = checkVideoDacPresent;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETCHECKVIDEODACPRESENT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetCheckVideoDacPresent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetCheckVideoDacPresent(FLR_ENABLE_E *checkVideoDacPresent) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETCHECKVIDEODACPRESENT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read checkVideoDacPresent from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *checkVideoDacPresent = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of checkVideoDacPresent handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetCheckVideoDacPresent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetCustomLcdConfig(const FLR_DVO_LCD_CONFIG_ID_E id, const FLR_DVO_LCD_CONFIG_T config) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 52;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_LCD_CONFIG_ID_E inVal = id;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write config to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_LCD_CONFIG_T *inVal = (const FLR_DVO_LCD_CONFIG_T *) &config;
        FLR_DVO_LCD_CONFIG_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 48;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETCUSTOMLCDCONFIG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetCustomLcdConfig()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetCustomLcdConfig(const FLR_DVO_LCD_CONFIG_ID_E id, FLR_DVO_LCD_CONFIG_T *config) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 48;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_LCD_CONFIG_ID_E inVal = id;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETCUSTOMLCDCONFIG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read config from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_DVO_LCD_CONFIG_T outVal;
        byteToFLR_DVO_LCD_CONFIG_T( (const uint8_t *) inPtr, &outVal);
        *config = (FLR_DVO_LCD_CONFIG_T)outVal;
        inPtr+=48;
    }// end of config handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetCustomLcdConfig()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetLCDConfig(const FLR_DVO_LCD_CONFIG_ID_E id) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_LCD_CONFIG_ID_E inVal = id;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETLCDCONFIG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetLCDConfig()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetLCDConfig(FLR_DVO_LCD_CONFIG_ID_E *id) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETLCDCONFIG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read id from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *id = (FLR_DVO_LCD_CONFIG_ID_E)outVal;
        inPtr+=4;
    }// end of id handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetLCDConfig()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetClockInfo(uint32_t *horizontalSyncWidth, uint32_t *verticalSyncWidth, uint32_t *clocksPerRowPeriod, uint32_t *horizontalFrontPorch, uint32_t *horizontalBackPorch, uint32_t *frontTelemetryPixels, uint32_t *rearTelemetryPixels, uint32_t *videoColumns, uint32_t *validColumns, uint32_t *telemetryRows, uint32_t *videoRows, uint32_t *validRows, uint32_t *verticalFrontPorch, uint32_t *verticalBackPorch, uint32_t *rowPeriodsPerFrame, uint32_t *clocksPerFrame, float *clockRateInMHz, float *frameRateInHz, uint32_t *validOnRisingEdge, uint32_t *dataWidthInBits) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 80;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETCLOCKINFO, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read horizontalSyncWidth from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *horizontalSyncWidth = (uint32_t)outVal;
        inPtr+=4;
    }// end of horizontalSyncWidth handling
    
    // read verticalSyncWidth from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *verticalSyncWidth = (uint32_t)outVal;
        inPtr+=4;
    }// end of verticalSyncWidth handling
    
    // read clocksPerRowPeriod from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *clocksPerRowPeriod = (uint32_t)outVal;
        inPtr+=4;
    }// end of clocksPerRowPeriod handling
    
    // read horizontalFrontPorch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *horizontalFrontPorch = (uint32_t)outVal;
        inPtr+=4;
    }// end of horizontalFrontPorch handling
    
    // read horizontalBackPorch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *horizontalBackPorch = (uint32_t)outVal;
        inPtr+=4;
    }// end of horizontalBackPorch handling
    
    // read frontTelemetryPixels from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *frontTelemetryPixels = (uint32_t)outVal;
        inPtr+=4;
    }// end of frontTelemetryPixels handling
    
    // read rearTelemetryPixels from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *rearTelemetryPixels = (uint32_t)outVal;
        inPtr+=4;
    }// end of rearTelemetryPixels handling
    
    // read videoColumns from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *videoColumns = (uint32_t)outVal;
        inPtr+=4;
    }// end of videoColumns handling
    
    // read validColumns from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *validColumns = (uint32_t)outVal;
        inPtr+=4;
    }// end of validColumns handling
    
    // read telemetryRows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *telemetryRows = (uint32_t)outVal;
        inPtr+=4;
    }// end of telemetryRows handling
    
    // read videoRows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *videoRows = (uint32_t)outVal;
        inPtr+=4;
    }// end of videoRows handling
    
    // read validRows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *validRows = (uint32_t)outVal;
        inPtr+=4;
    }// end of validRows handling
    
    // read verticalFrontPorch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *verticalFrontPorch = (uint32_t)outVal;
        inPtr+=4;
    }// end of verticalFrontPorch handling
    
    // read verticalBackPorch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *verticalBackPorch = (uint32_t)outVal;
        inPtr+=4;
    }// end of verticalBackPorch handling
    
    // read rowPeriodsPerFrame from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *rowPeriodsPerFrame = (uint32_t)outVal;
        inPtr+=4;
    }// end of rowPeriodsPerFrame handling
    
    // read clocksPerFrame from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *clocksPerFrame = (uint32_t)outVal;
        inPtr+=4;
    }// end of clocksPerFrame handling
    
    // read clockRateInMHz from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *clockRateInMHz = (float)outVal;
        inPtr+=4;
    }// end of clockRateInMHz handling
    
    // read frameRateInHz from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *frameRateInHz = (float)outVal;
        inPtr+=4;
    }// end of frameRateInHz handling
    
    // read validOnRisingEdge from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *validOnRisingEdge = (uint32_t)outVal;
        inPtr+=4;
    }// end of validOnRisingEdge handling
    
    // read dataWidthInBits from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *dataWidthInBits = (uint32_t)outVal;
        inPtr+=4;
    }// end of dataWidthInBits handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetClockInfo()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetAllCustomLcdConfigs(const FLR_DVO_LCD_CONFIG_T config0, const FLR_DVO_LCD_CONFIG_T config1) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 96;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write config0 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_LCD_CONFIG_T *inVal = (const FLR_DVO_LCD_CONFIG_T *) &config0;
        FLR_DVO_LCD_CONFIG_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 48;
    }
    
    //write config1 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_LCD_CONFIG_T *inVal = (const FLR_DVO_LCD_CONFIG_T *) &config1;
        FLR_DVO_LCD_CONFIG_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 48;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETALLCUSTOMLCDCONFIGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetAllCustomLcdConfigs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetAllCustomLcdConfigs(FLR_DVO_LCD_CONFIG_T *config0, FLR_DVO_LCD_CONFIG_T *config1) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 96;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETALLCUSTOMLCDCONFIGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read config0 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_DVO_LCD_CONFIG_T outVal;
        byteToFLR_DVO_LCD_CONFIG_T( (const uint8_t *) inPtr, &outVal);
        *config0 = (FLR_DVO_LCD_CONFIG_T)outVal;
        inPtr+=48;
    }// end of config0 handling
    
    // read config1 from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_DVO_LCD_CONFIG_T outVal;
        byteToFLR_DVO_LCD_CONFIG_T( (const uint8_t *) inPtr, &outVal);
        *config1 = (FLR_DVO_LCD_CONFIG_T)outVal;
        inPtr+=48;
    }// end of config1 handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetAllCustomLcdConfigs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoSetOutputIr16Format(const FLR_DVO_OUTPUT_IR16_FORMAT_E format) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write format to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_DVO_OUTPUT_IR16_FORMAT_E inVal = format;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_SETOUTPUTIR16FORMAT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoSetOutputIr16Format()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDvoGetOutputIr16Format(FLR_DVO_OUTPUT_IR16_FORMAT_E *format) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DVO_GETOUTPUTIR16FORMAT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read format from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *format = (FLR_DVO_OUTPUT_IR16_FORMAT_E)outVal;
        inPtr+=4;
    }// end of format handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDvoGetOutputIr16Format()

// End Module: dvo
// Begin Module: capture
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgCaptureSingleFrame() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAME, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgCaptureSingleFrame()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgCaptureFrames(const FLR_CAPTURE_SETTINGS_T data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 10;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_CAPTURE_SETTINGS_T *inVal = (const FLR_CAPTURE_SETTINGS_T *) &data;
        FLR_CAPTURE_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 10;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_FRAMES, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgCaptureFrames()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgCaptureSingleFrameWithSrc(const FLR_CAPTURE_SRC_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_CAPTURE_SRC_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAMEWITHSRC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgCaptureSingleFrameWithSrc()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgCaptureSingleFrameToFile() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, CAPTURE_SINGLEFRAMETOFILE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgCaptureSingleFrameToFile()

// End Module: capture
// Begin Module: scnr
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetEnableState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetEnableState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetThColSum(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHCOLSUM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetThColSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetThColSum(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHCOLSUM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetThColSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetThPixel(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetThPixel(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetMaxCorr(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetMaxCorr(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetThPixelApplied(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXELAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetThPixelApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetMaxCorrApplied(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORRAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetMaxCorrApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetThColSumSafe(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHCOLSUMSAFE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetThColSumSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetThColSumSafe(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHCOLSUMSAFE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetThColSumSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetThPixelSafe(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETTHPIXELSAFE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetThPixelSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetThPixelSafe(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETTHPIXELSAFE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetThPixelSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrSetMaxCorrSafe(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_SETMAXCORRSAFE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrSetMaxCorrSafe()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScnrGetMaxCorrSafe(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCNR_GETMAXCORRSAFE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScnrGetMaxCorrSafe()

// End Module: scnr
// Begin Module: agc
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetPercentPerBin(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETPERCENTPERBIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetPercentPerBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetPercentPerBin(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETPERCENTPERBIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetPercentPerBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetLinearPercent(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETLINEARPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetLinearPercent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetLinearPercent(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETLINEARPERCENT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetLinearPercent()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetOutlierCut(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETOUTLIERCUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetOutlierCut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetOutlierCut(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetOutlierCut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetDrOut(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDROUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetDrOut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetMaxGain(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETMAXGAIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetMaxGain()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetMaxGain(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMAXGAIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetMaxGain()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetdf(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetdf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetdf(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetdf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetGamma(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETGAMMA, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetGamma()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetGamma(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETGAMMA, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetGamma()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetFirstBin(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETFIRSTBIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetFirstBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetLastBin(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETLASTBIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetLastBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetDetailHeadroom(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETDETAILHEADROOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetDetailHeadroom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetDetailHeadroom(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETDETAILHEADROOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetDetailHeadroom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetd2br(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETD2BR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetd2br()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetd2br(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETD2BR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetd2br()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetSigmaR(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETSIGMAR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetSigmaR()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetSigmaR(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETSIGMAR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetSigmaR()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetUseEntropy(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETUSEENTROPY, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetUseEntropy()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetUseEntropy(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETUSEENTROPY, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetUseEntropy()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetROI(const FLR_ROI_T roi) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write roi to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ROI_T *inVal = (const FLR_ROI_T *) &roi;
        FLR_ROI_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 8;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetROI(FLR_ROI_T *roi) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read roi from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_ROI_T outVal;
        byteToFLR_ROI_T( (const uint8_t *) inPtr, &outVal);
        *roi = (FLR_ROI_T)outVal;
        inPtr+=8;
    }// end of roi handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetMaxGainApplied(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMAXGAINAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetMaxGainApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetSigmaRApplied(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETSIGMARAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetSigmaRApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetOutlierCutBalance(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETOUTLIERCUTBALANCE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetOutlierCutBalance()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetOutlierCutBalance(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUTBALANCE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetOutlierCutBalance()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetOutlierCutApplied(float *percentHigh, float *percentLow) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETOUTLIERCUTAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read percentHigh from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *percentHigh = (float)outVal;
        inPtr+=4;
    }// end of percentHigh handling
    
    // read percentLow from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *percentLow = (float)outVal;
        inPtr+=4;
    }// end of percentLow handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetOutlierCutApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetTfThresholds(uint16_t *tf_thresholdMin, uint16_t *tf_thresholdMax) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETTFTHRESHOLDS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read tf_thresholdMin from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *tf_thresholdMin = (uint16_t)outVal;
        inPtr+=2;
    }// end of tf_thresholdMin handling
    
    // read tf_thresholdMax from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *tf_thresholdMax = (uint16_t)outVal;
        inPtr+=2;
    }// end of tf_thresholdMax handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetTfThresholds()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetTfThresholds(const uint16_t tf_thresholdMin, const uint16_t tf_thresholdMax) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write tf_thresholdMin to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = tf_thresholdMin;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write tf_thresholdMax to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = tf_thresholdMax;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETTFTHRESHOLDS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetTfThresholds()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcGetMode(FLR_AGC_MODE_E *mode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_GETMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read mode from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *mode = (FLR_AGC_MODE_E)outVal;
        inPtr+=4;
    }// end of mode handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcGetMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgAgcSetMode(const FLR_AGC_MODE_E mode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write mode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_AGC_MODE_E inVal = mode;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, AGC_SETMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgAgcSetMode()

// End Module: agc
// Begin Module: tf
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfSetEnableState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfSetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetEnableState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfSetDelta_nf(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETDELTA_NF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfSetDelta_nf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetDelta_nf(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETDELTA_NF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetDelta_nf()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfSetTHDeltaMotion(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETTHDELTAMOTION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfSetTHDeltaMotion()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetTHDeltaMotion(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTHDELTAMOTION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetTHDeltaMotion()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfSetWLut(const FLR_TF_WLUT_T data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 32;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_TF_WLUT_T *inVal = (const FLR_TF_WLUT_T *) &data;
        FLR_TF_WLUT_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 32;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETWLUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfSetWLut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetWLut(FLR_TF_WLUT_T *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 32;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETWLUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_TF_WLUT_T outVal;
        byteToFLR_TF_WLUT_T( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_TF_WLUT_T)outVal;
        inPtr+=32;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetWLut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetMotionCount(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONCOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetMotionCount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfSetMotionThreshold(const uint32_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = data;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETMOTIONTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfSetMotionThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetMotionThreshold(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETMOTIONTHRESHOLD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetMotionThreshold()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetDelta_nfApplied(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETDELTA_NFAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetDelta_nfApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetTHDeltaMotionApplied(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTHDELTAMOTIONAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetTHDeltaMotionApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfSetTempSignalCompFactorLut(const FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 34;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T *inVal = (const FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T *) &data;
        FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 34;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_SETTEMPSIGNALCOMPFACTORLUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfSetTempSignalCompFactorLut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetTempSignalCompFactorLut(FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 34;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETTEMPSIGNALCOMPFACTORLUT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T outVal;
        byteToFLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_TF_TEMP_SIGNAL_COMP_FACTOR_LUT_T)outVal;
        inPtr+=34;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetTempSignalCompFactorLut()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTfGetRnf(uint16_t *rnf) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TF_GETRNF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read rnf from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *rnf = (uint16_t)outVal;
        inPtr+=2;
    }// end of rnf handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTfGetRnf()

// End Module: tf
// Begin Module: mem
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemReadCapture(const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 7;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write bufferNum to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = bufferNum;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READCAPTURE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
        inPtr+=sizeInBytes;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemReadCapture()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemGetCaptureSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETCAPTURESIZE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read bytes from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *bytes = (uint32_t)outVal;
        inPtr+=4;
    }// end of bytes handling
    
    // read rows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *rows = (uint16_t)outVal;
        inPtr+=2;
    }// end of rows handling
    
    // read columns from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *columns = (uint16_t)outVal;
        inPtr+=2;
    }// end of columns handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemGetCaptureSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemWriteFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = (uint32_t) sizeInBytes + 11;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write location to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_MEM_LOCATION_E inVal = location;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        UCHARArrayToByte(data,sizeInBytes,(const uint8_t *) outPtr);
        outPtr += sizeInBytes;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_WRITEFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemWriteFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemReadFlash(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 11;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write location to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_MEM_LOCATION_E inVal = location;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
        inPtr+=sizeInBytes;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemReadFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemGetFlashSize(const FLR_MEM_LOCATION_E location, uint32_t *bytes) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write location to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_MEM_LOCATION_E inVal = location;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETFLASHSIZE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read bytes from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *bytes = (uint32_t)outVal;
        inPtr+=4;
    }// end of bytes handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemGetFlashSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemEraseFlash(const FLR_MEM_LOCATION_E location, const uint8_t index) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 5;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write location to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_MEM_LOCATION_E inVal = location;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_ERASEFLASH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemEraseFlash()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemEraseFlashPartial(const FLR_MEM_LOCATION_E location, const uint8_t index, const uint32_t offset, const uint32_t length) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 13;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write location to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_MEM_LOCATION_E inVal = location;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write length to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = length;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_ERASEFLASHPARTIAL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemEraseFlashPartial()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemReadCurrentGain(const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 6;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READCURRENTGAIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
        inPtr+=sizeInBytes;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemReadCurrentGain()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemGetGainSize(uint32_t *bytes, uint16_t *rows, uint16_t *columns) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETGAINSIZE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read bytes from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *bytes = (uint32_t)outVal;
        inPtr+=4;
    }// end of bytes handling
    
    // read rows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *rows = (uint16_t)outVal;
        inPtr+=2;
    }// end of rows handling
    
    // read columns from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *columns = (uint16_t)outVal;
        inPtr+=2;
    }// end of columns handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemGetGainSize()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemGetCaptureSizeSrc(const FLR_CAPTURE_SRC_E src, uint32_t *bytes, uint16_t *rows, uint16_t *columns) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write src to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_CAPTURE_SRC_E inVal = src;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_GETCAPTURESIZESRC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read bytes from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *bytes = (uint32_t)outVal;
        inPtr+=4;
    }// end of bytes handling
    
    // read rows from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *rows = (uint16_t)outVal;
        inPtr+=2;
    }// end of rows handling
    
    // read columns from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *columns = (uint16_t)outVal;
        inPtr+=2;
    }// end of columns handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemGetCaptureSizeSrc()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgMemReadCaptureSrc(const FLR_CAPTURE_SRC_E src, const uint8_t bufferNum, const uint32_t offset, const uint16_t sizeInBytes, uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 11;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write src to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_CAPTURE_SRC_E inVal = src;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write bufferNum to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = bufferNum;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write sizeInBytes to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = sizeInBytes;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, MEM_READCAPTURESRC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        byteToUCHARArray((const uint8_t *) inPtr, data,sizeInBytes);
        inPtr+=sizeInBytes;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgMemReadCaptureSrc()

// End Module: mem
// Begin Module: colorLut
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutSetControl(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETCONTROL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutSetControl()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutGetControl(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETCONTROL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutGetControl()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutSetId(const FLR_COLORLUT_ID_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_COLORLUT_ID_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETID, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutSetId()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutGetId(FLR_COLORLUT_ID_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETID, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_COLORLUT_ID_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutGetId()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutSetOutlineColor(const uint8_t red, const uint8_t green, const uint8_t blue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 3;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write red to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = red;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write green to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = green;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write blue to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = blue;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETOUTLINECOLOR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutSetOutlineColor()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutGetOutlineColor(uint8_t *red, uint8_t *green, uint8_t *blue) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 3;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETOUTLINECOLOR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read red from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *red = (uint8_t)outVal;
        inPtr+=1;
    }// end of red handling
    
    // read green from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *green = (uint8_t)outVal;
        inPtr+=1;
    }// end of green handling
    
    // read blue from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *blue = (uint8_t)outVal;
        inPtr+=1;
    }// end of blue handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutGetOutlineColor()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutSetOutlineDisplay(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_SETOUTLINEDISPLAY, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutSetOutlineDisplay()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgColorlutGetOutlineDisplay(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, COLORLUT_GETOUTLINEDISPLAY, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgColorlutGetOutlineDisplay()

// End Module: colorLut
// Begin Module: spnr
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetEnableState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetEnableState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetState(FLR_SPNR_STATE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_SPNR_STATE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetFrameDelay(const uint32_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = data;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETFRAMEDELAY, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetFrameDelay()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetFrameDelay(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETFRAMEDELAY, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetFrameDelay()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetSFApplied(float *sf) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read sf from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *sf = (float)outVal;
        inPtr+=4;
    }// end of sf handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetSFApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetPSDKernel(const FLR_SPNR_PSD_KERNEL_T data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 256;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SPNR_PSD_KERNEL_T *inVal = (const FLR_SPNR_PSD_KERNEL_T *) &data;
        FLR_SPNR_PSD_KERNEL_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 256;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETPSDKERNEL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetPSDKernel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetPSDKernel(FLR_SPNR_PSD_KERNEL_T *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 256;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETPSDKERNEL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_SPNR_PSD_KERNEL_T outVal;
        byteToFLR_SPNR_PSD_KERNEL_T( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_SPNR_PSD_KERNEL_T)outVal;
        inPtr+=256;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetPSDKernel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetSFMin(const float sfmin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write sfmin to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = sfmin;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETSFMIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetSFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetSFMin(float *sfmin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFMIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read sfmin from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *sfmin = (float)outVal;
        inPtr+=4;
    }// end of sfmin handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetSFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetSFMax(const float sfmax) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write sfmax to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = sfmax;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETSFMAX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetSFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetSFMax(float *sfmax) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETSFMAX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read sfmax from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *sfmax = (float)outVal;
        inPtr+=4;
    }// end of sfmax handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetSFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetDFMin(const float dfmin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write dfmin to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = dfmin;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETDFMIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetDFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetDFMin(float *dfmin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETDFMIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read dfmin from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *dfmin = (float)outVal;
        inPtr+=4;
    }// end of dfmin handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetDFMin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetDFMax(const float dfmax) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write dfmax to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = dfmax;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETDFMAX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetDFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetDFMax(float *dfmax) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETDFMAX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read dfmax from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *dfmax = (float)outVal;
        inPtr+=4;
    }// end of dfmax handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetDFMax()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetNormTarget(const float normTarget) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write normTarget to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = normTarget;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETNORMTARGET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetNormTarget()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetNormTarget(float *normTarget) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETNORMTARGET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read normTarget from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *normTarget = (float)outVal;
        inPtr+=4;
    }// end of normTarget handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetNormTarget()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetNormTargetApplied(float *normTargetApplied) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETNORMTARGETAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read normTargetApplied from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *normTargetApplied = (float)outVal;
        inPtr+=4;
    }// end of normTargetApplied handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetNormTargetApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetThPix(const uint16_t th_pix) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write th_pix to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = th_pix;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETTHPIX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetThPix()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetThPix(uint16_t *th_pix) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETTHPIX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read th_pix from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *th_pix = (uint16_t)outVal;
        inPtr+=2;
    }// end of th_pix handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetThPix()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetThPixSum(const uint16_t th_pixSum) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write th_pixSum to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = th_pixSum;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETTHPIXSUM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetThPixSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetThPixSum(uint16_t *th_pixSum) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETTHPIXSUM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read th_pixSum from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *th_pixSum = (uint16_t)outVal;
        inPtr+=2;
    }// end of th_pixSum handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetThPixSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrSetMaxcorr(const uint16_t maxcorr) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write maxcorr to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = maxcorr;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_SETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrSetMaxcorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSpnrGetMaxcorr(uint16_t *maxcorr) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPNR_GETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read maxcorr from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *maxcorr = (uint16_t)outVal;
        inPtr+=2;
    }// end of maxcorr handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSpnrGetMaxcorr()

// End Module: spnr
// Begin Module: scaler
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScalerGetMaxZoom(uint32_t *zoom) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETMAXZOOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read zoom from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *zoom = (uint32_t)outVal;
        inPtr+=4;
    }// end of zoom handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScalerGetMaxZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScalerSetZoom(const FLR_SCALER_ZOOM_PARAMS_T zoomParams) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 12;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write zoomParams to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SCALER_ZOOM_PARAMS_T *inVal = (const FLR_SCALER_ZOOM_PARAMS_T *) &zoomParams;
        FLR_SCALER_ZOOM_PARAMS_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 12;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETZOOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScalerSetZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScalerGetZoom(FLR_SCALER_ZOOM_PARAMS_T *zoomParams) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 12;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_GETZOOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read zoomParams from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_SCALER_ZOOM_PARAMS_T outVal;
        byteToFLR_SCALER_ZOOM_PARAMS_T( (const uint8_t *) inPtr, &outVal);
        *zoomParams = (FLR_SCALER_ZOOM_PARAMS_T)outVal;
        inPtr+=12;
    }// end of zoomParams handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScalerGetZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScalerSetFractionalZoom(const uint32_t zoomNumerator, const uint32_t zoomDenominator, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 32;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write zoomNumerator to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomNumerator;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomDenominator to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomDenominator;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomXCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomXCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomYCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomYCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write inChangeEnable to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = inChangeEnable;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomOutXCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomOutXCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomOutYCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomOutYCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write outChangeEnable to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = outChangeEnable;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETFRACTIONALZOOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScalerSetFractionalZoom()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgScalerSetIndexZoom(const uint32_t zoomIndex, const uint32_t zoomXCenter, const uint32_t zoomYCenter, const FLR_ENABLE_E inChangeEnable, const uint32_t zoomOutXCenter, const uint32_t zoomOutYCenter, const FLR_ENABLE_E outChangeEnable) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 28;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write zoomIndex to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomIndex;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomXCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomXCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomYCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomYCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write inChangeEnable to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = inChangeEnable;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomOutXCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomOutXCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write zoomOutYCenter to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = zoomOutYCenter;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write outChangeEnable to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = outChangeEnable;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SCALER_SETINDEXZOOM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgScalerSetIndexZoom()

// End Module: scaler
// Begin Module: sysctrl
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysctrlSetFreezeState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_SETFREEZESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysctrlSetFreezeState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysctrlGetFreezeState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETFREEZESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysctrlGetFreezeState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysctrlGetCameraFrameRate(uint32_t *frameRate) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETCAMERAFRAMERATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read frameRate from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *frameRate = (uint32_t)outVal;
        inPtr+=4;
    }// end of frameRate handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysctrlGetCameraFrameRate()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysctrlGetUptimeSecs(uint32_t *uptime) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSCTRL_GETUPTIMESECS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read uptime from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *uptime = (uint32_t)outVal;
        inPtr+=4;
    }// end of uptime handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysctrlGetUptimeSecs()

// End Module: sysctrl
// Begin Module: testRamp
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampSetType(const uint8_t index, const FLR_TESTRAMP_TYPE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 5;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_TESTRAMP_TYPE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampSetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampGetType(const uint8_t index, FLR_TESTRAMP_TYPE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETTYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_TESTRAMP_TYPE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampGetType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampSetSettings(const uint8_t index, const FLR_TESTRAMP_SETTINGS_T data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 7;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_TESTRAMP_SETTINGS_T *inVal = (const FLR_TESTRAMP_SETTINGS_T *) &data;
        FLR_TESTRAMP_SETTINGS_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 6;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampSetSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampGetSettings(const uint8_t index, FLR_TESTRAMP_SETTINGS_T *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 6;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write index to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = index;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETSETTINGS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_TESTRAMP_SETTINGS_T outVal;
        byteToFLR_TESTRAMP_SETTINGS_T( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_TESTRAMP_SETTINGS_T)outVal;
        inPtr+=6;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampGetSettings()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampSetMotionState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampSetMotionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampGetMotionState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETMOTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampGetMotionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampSetIndex(const uint8_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = data;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_SETINDEX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampSetIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampGetIndex(uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETINDEX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *data = (uint8_t)outVal;
        inPtr+=1;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampGetIndex()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgTestrampGetMaxIndex(uint8_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, TESTRAMP_GETMAXINDEX, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *data = (uint8_t)outVal;
        inPtr+=1;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgTestrampGetMaxIndex()

// End Module: testRamp
// Begin Module: symbology
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySetEnable(const FLR_ENABLE_E draw_symbols) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write draw_symbols to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = draw_symbols;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 9;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateBitmap()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySendData(const uint8_t ID, const int16_t size, const uint8_t text[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 131;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write size to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = size;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write text to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7], text[8], text[9], text[10], text[11], text[12], text[13], text[14], text[15], text[16], text[17], text[18], text[19], text[20], text[21], text[22], text[23], text[24], text[25], text[26], text[27], text[28], text[29], text[30], text[31], text[32], text[33], text[34], text[35], text[36], text[37], text[38], text[39], text[40], text[41], text[42], text[43], text[44], text[45], text[46], text[47], text[48], text[49], text[50], text[51], text[52], text[53], text[54], text[55], text[56], text[57], text[58], text[59], text[60], text[61], text[62], text[63], text[64], text[65], text[66], text[67], text[68], text[69], text[70], text[71], text[72], text[73], text[74], text[75], text[76], text[77], text[78], text[79], text[80], text[81], text[82], text[83], text[84], text[85], text[86], text[87], text[88], text[89], text[90], text[91], text[92], text[93], text[94], text[95], text[96], text[97], text[98], text[99], text[100], text[101], text[102], text[103], text[104], text[105], text[106], text[107], text[108], text[109], text[110], text[111], text[112], text[113], text[114], text[115], text[116], text[117], text[118], text[119], text[120], text[121], text[122], text[123], text[124], text[125], text[126], text[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SENDDATA, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySendData()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateArc(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const float start_angle, const float end_angle, const uint32_t color) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 21;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write start_angle to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = start_angle;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write end_angle to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = end_angle;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEARC, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateArc()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateText(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color, const uint8_t text[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 146;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write font to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int8_t inVal = font;
        CHARToByte(inVal, (const uint8_t *) outPtr );
        outPtr += 1;
    }
    
    //write size to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = size;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write alignment to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E inVal = alignment;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write text to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7], text[8], text[9], text[10], text[11], text[12], text[13], text[14], text[15], text[16], text[17], text[18], text[19], text[20], text[21], text[22], text[23], text[24], text[25], text[26], text[27], text[28], text[29], text[30], text[31], text[32], text[33], text[34], text[35], text[36], text[37], text[38], text[39], text[40], text[41], text[42], text[43], text[44], text[45], text[46], text[47], text[48], text[49], text[50], text[51], text[52], text[53], text[54], text[55], text[56], text[57], text[58], text[59], text[60], text[61], text[62], text[63], text[64], text[65], text[66], text[67], text[68], text[69], text[70], text[71], text[72], text[73], text[74], text[75], text[76], text[77], text[78], text[79], text[80], text[81], text[82], text[83], text[84], text[85], text[86], text[87], text[88], text[89], text[90], text[91], text[92], text[93], text[94], text[95], text[96], text[97], text[98], text[99], text[100], text[101], text[102], text[103], text[104], text[105], text[106], text[107], text[108], text[109], text[110], text[111], text[112], text[113], text[114], text[115], text[116], text[117], text[118], text[119], text[120], text[121], text[122], text[123], text[124], text[125], text[126], text[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATETEXT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateText()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyMoveSprite(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 5;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVESPRITE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyMoveSprite()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyAddToGroup(const uint8_t ID, const uint8_t group_ID) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write group_ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = group_ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_ADDTOGROUP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyAddToGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyRemoveFromGroup(const uint8_t ID, const uint8_t group_ID) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write group_ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = group_ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_REMOVEFROMGROUP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyRemoveFromGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyUpdateAndShow(const uint8_t ID, const uint8_t visible) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write visible to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = visible;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_UPDATEANDSHOW, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyUpdateAndShow()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyUpdateAndShowGroup(const uint8_t group_ID, const uint8_t visible) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write group_ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = group_ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write visible to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = visible;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_UPDATEANDSHOWGROUP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyUpdateAndShowGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyDelete(const uint8_t ID) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_DELETE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyDelete()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyDeleteGroup(const uint8_t group_ID) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write group_ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = group_ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_DELETEGROUP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyDeleteGroup()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateFilledRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 13;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEFILLEDRECTANGLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateFilledRectangle()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateOutlinedRectangle(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 13;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEOUTLINEDRECTANGLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateOutlinedRectangle()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromPng(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t size) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 7;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write size to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = size;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAPFROMPNG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateBitmapFromPng()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateCompressedBitmap(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 9;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATECOMPRESSEDBITMAP, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateCompressedBitmap()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromPngFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const uint8_t path[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 133;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAPFROMPNGFILE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateBitmapFromPngFile()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateBitmapFromFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const uint8_t path[], const FLR_SYMBOLOGY_IMAGE_TYPE_E imageType) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 135;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    //write imageType to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_IMAGE_TYPE_E inVal = imageType;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEBITMAPFROMFILE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateBitmapFromFile()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyResetWritePosition(const uint8_t ID) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 1;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_RESETWRITEPOSITION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyResetWritePosition()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyMoveByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 5;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write off_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = off_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write off_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = off_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVEBYOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyMoveByOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyMoveGroupByOffset(const uint8_t ID, const int16_t off_X, const int16_t off_Y) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 5;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write off_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = off_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write off_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = off_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVEGROUPBYOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyMoveGroupByOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateFilledEllipse(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const uint32_t color) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 13;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATEFILLEDELLIPSE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateFilledEllipse()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateLine(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t pos_X2, const int16_t pos_Y2, const uint32_t color) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 13;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_X2 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X2;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y2 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y2;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATELINE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateLine()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySetZorder(const uint8_t ID, const uint8_t zorder) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write zorder to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = zorder;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETZORDER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySetZorder()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySaveConfiguration() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SAVECONFIGURATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySaveConfiguration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyReloadConfiguration() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_RELOADCONFIGURATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyReloadConfiguration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyGetEnable(FLR_ENABLE_E *draw_symbols) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_GETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read draw_symbols from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *draw_symbols = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of draw_symbols handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyGetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySetClonesNumber(const uint8_t ID, const uint8_t numberOfClones) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write numberOfClones to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = numberOfClones;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETCLONESNUMBER, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySetClonesNumber()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyMoveCloneByOffset(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 6;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write cloneID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = cloneID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVECLONEBYOFFSET, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyMoveCloneByOffset()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyMoveCloneSprite(const uint8_t ID, const uint8_t cloneID, const int16_t pos_X, const int16_t pos_Y) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 6;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write cloneID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = cloneID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_MOVECLONESPRITE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyMoveCloneSprite()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySetTransformation(const FLR_SYMBOLOGY_TRANSFORMATION_E transformation) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write transformation to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_TRANSFORMATION_E inVal = transformation;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETTRANSFORMATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySetTransformation()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyUpdateAllVisible() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_UPDATEALLVISIBLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyUpdateAllVisible()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologySetSizeAndScalingMode(const uint8_t ID, const int16_t width, const int16_t height, const FLR_SYMBOLOGY_SCALING_MODE_E scalingMode) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 7;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write scalingMode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_SCALING_MODE_E inVal = scalingMode;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_SETSIZEANDSCALINGMODE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologySetSizeAndScalingMode()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateLineHVT(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t pos_X2, const int16_t pos_Y2, const uint32_t color1, const uint32_t color2, const uint16_t dashLen, const uint16_t thickness) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 21;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_X2 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X2;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y2 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y2;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color1 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color1;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write color2 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color2;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write dashLen to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = dashLen;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write thickness to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = thickness;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATELINEHVT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateLineHVT()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateTextHVT(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color1, const uint32_t color2, const uint8_t dashLen, const uint8_t text[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 151;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write font to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int8_t inVal = font;
        CHARToByte(inVal, (const uint8_t *) outPtr );
        outPtr += 1;
    }
    
    //write size to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = size;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write alignment to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E inVal = alignment;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color1 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color1;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write color2 to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color2;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write dashLen to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = dashLen;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write text to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7], text[8], text[9], text[10], text[11], text[12], text[13], text[14], text[15], text[16], text[17], text[18], text[19], text[20], text[21], text[22], text[23], text[24], text[25], text[26], text[27], text[28], text[29], text[30], text[31], text[32], text[33], text[34], text[35], text[36], text[37], text[38], text[39], text[40], text[41], text[42], text[43], text[44], text[45], text[46], text[47], text[48], text[49], text[50], text[51], text[52], text[53], text[54], text[55], text[56], text[57], text[58], text[59], text[60], text[61], text[62], text[63], text[64], text[65], text[66], text[67], text[68], text[69], text[70], text[71], text[72], text[73], text[74], text[75], text[76], text[77], text[78], text[79], text[80], text[81], text[82], text[83], text[84], text[85], text[86], text[87], text[88], text[89], text[90], text[91], text[92], text[93], text[94], text[95], text[96], text[97], text[98], text[99], text[100], text[101], text[102], text[103], text[104], text[105], text[106], text[107], text[108], text[109], text[110], text[111], text[112], text[113], text[114], text[115], text[116], text[117], text[118], text[119], text[120], text[121], text[122], text[123], text[124], text[125], text[126], text[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATETEXTHVT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateTextHVT()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateTextBg(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const int8_t font, const int16_t size, const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E alignment, const uint32_t color, const uint32_t bgColor, const uint8_t text[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 150;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write font to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int8_t inVal = font;
        CHARToByte(inVal, (const uint8_t *) outPtr );
        outPtr += 1;
    }
    
    //write size to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = size;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write alignment to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_TEXT_ALIGNMENT_E inVal = alignment;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write color to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = color;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write bgColor to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = bgColor;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write text to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {text[0], text[1], text[2], text[3], text[4], text[5], text[6], text[7], text[8], text[9], text[10], text[11], text[12], text[13], text[14], text[15], text[16], text[17], text[18], text[19], text[20], text[21], text[22], text[23], text[24], text[25], text[26], text[27], text[28], text[29], text[30], text[31], text[32], text[33], text[34], text[35], text[36], text[37], text[38], text[39], text[40], text[41], text[42], text[43], text[44], text[45], text[46], text[47], text[48], text[49], text[50], text[51], text[52], text[53], text[54], text[55], text[56], text[57], text[58], text[59], text[60], text[61], text[62], text[63], text[64], text[65], text[66], text[67], text[68], text[69], text[70], text[71], text[72], text[73], text[74], text[75], text[76], text[77], text[78], text[79], text[80], text[81], text[82], text[83], text[84], text[85], text[86], text[87], text[88], text[89], text[90], text[91], text[92], text[93], text[94], text[95], text[96], text[97], text[98], text[99], text[100], text[101], text[102], text[103], text[104], text[105], text[106], text[107], text[108], text[109], text[110], text[111], text[112], text[113], text[114], text[115], text[116], text[117], text[118], text[119], text[120], text[121], text[122], text[123], text[124], text[125], text[126], text[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATETEXTBG, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateTextBg()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSymbologyCreateScaledBitmapFromFile(const uint8_t ID, const int16_t pos_X, const int16_t pos_Y, const int16_t width, const int16_t height, const FLR_SYMBOLOGY_SCALING_MODE_E scalingMode, const uint8_t path[], const FLR_SYMBOLOGY_IMAGE_TYPE_E imageType) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 141;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write ID to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = ID;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write pos_X to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_X;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write pos_Y to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = pos_Y;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write width to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = width;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write height to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const int16_t inVal = height;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write scalingMode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_SCALING_MODE_E inVal = scalingMode;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    //write imageType to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYMBOLOGY_IMAGE_TYPE_E inVal = imageType;
        INT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYMBOLOGY_CREATESCALEDBITMAPFROMFILE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSymbologyCreateScaledBitmapFromFile()

// End Module: symbology
// Begin Module: normalize
// End Module: normalize
// Begin Module: fileOps
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsDir(uint8_t *dirent) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 128;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_DIR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read dirent from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal[128];
        byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
        dirent[0] = outVal[0];
        dirent[1] = outVal[1];
        dirent[2] = outVal[2];
        dirent[3] = outVal[3];
        dirent[4] = outVal[4];
        dirent[5] = outVal[5];
        dirent[6] = outVal[6];
        dirent[7] = outVal[7];
        dirent[8] = outVal[8];
        dirent[9] = outVal[9];
        dirent[10] = outVal[10];
        dirent[11] = outVal[11];
        dirent[12] = outVal[12];
        dirent[13] = outVal[13];
        dirent[14] = outVal[14];
        dirent[15] = outVal[15];
        dirent[16] = outVal[16];
        dirent[17] = outVal[17];
        dirent[18] = outVal[18];
        dirent[19] = outVal[19];
        dirent[20] = outVal[20];
        dirent[21] = outVal[21];
        dirent[22] = outVal[22];
        dirent[23] = outVal[23];
        dirent[24] = outVal[24];
        dirent[25] = outVal[25];
        dirent[26] = outVal[26];
        dirent[27] = outVal[27];
        dirent[28] = outVal[28];
        dirent[29] = outVal[29];
        dirent[30] = outVal[30];
        dirent[31] = outVal[31];
        dirent[32] = outVal[32];
        dirent[33] = outVal[33];
        dirent[34] = outVal[34];
        dirent[35] = outVal[35];
        dirent[36] = outVal[36];
        dirent[37] = outVal[37];
        dirent[38] = outVal[38];
        dirent[39] = outVal[39];
        dirent[40] = outVal[40];
        dirent[41] = outVal[41];
        dirent[42] = outVal[42];
        dirent[43] = outVal[43];
        dirent[44] = outVal[44];
        dirent[45] = outVal[45];
        dirent[46] = outVal[46];
        dirent[47] = outVal[47];
        dirent[48] = outVal[48];
        dirent[49] = outVal[49];
        dirent[50] = outVal[50];
        dirent[51] = outVal[51];
        dirent[52] = outVal[52];
        dirent[53] = outVal[53];
        dirent[54] = outVal[54];
        dirent[55] = outVal[55];
        dirent[56] = outVal[56];
        dirent[57] = outVal[57];
        dirent[58] = outVal[58];
        dirent[59] = outVal[59];
        dirent[60] = outVal[60];
        dirent[61] = outVal[61];
        dirent[62] = outVal[62];
        dirent[63] = outVal[63];
        dirent[64] = outVal[64];
        dirent[65] = outVal[65];
        dirent[66] = outVal[66];
        dirent[67] = outVal[67];
        dirent[68] = outVal[68];
        dirent[69] = outVal[69];
        dirent[70] = outVal[70];
        dirent[71] = outVal[71];
        dirent[72] = outVal[72];
        dirent[73] = outVal[73];
        dirent[74] = outVal[74];
        dirent[75] = outVal[75];
        dirent[76] = outVal[76];
        dirent[77] = outVal[77];
        dirent[78] = outVal[78];
        dirent[79] = outVal[79];
        dirent[80] = outVal[80];
        dirent[81] = outVal[81];
        dirent[82] = outVal[82];
        dirent[83] = outVal[83];
        dirent[84] = outVal[84];
        dirent[85] = outVal[85];
        dirent[86] = outVal[86];
        dirent[87] = outVal[87];
        dirent[88] = outVal[88];
        dirent[89] = outVal[89];
        dirent[90] = outVal[90];
        dirent[91] = outVal[91];
        dirent[92] = outVal[92];
        dirent[93] = outVal[93];
        dirent[94] = outVal[94];
        dirent[95] = outVal[95];
        dirent[96] = outVal[96];
        dirent[97] = outVal[97];
        dirent[98] = outVal[98];
        dirent[99] = outVal[99];
        dirent[100] = outVal[100];
        dirent[101] = outVal[101];
        dirent[102] = outVal[102];
        dirent[103] = outVal[103];
        dirent[104] = outVal[104];
        dirent[105] = outVal[105];
        dirent[106] = outVal[106];
        dirent[107] = outVal[107];
        dirent[108] = outVal[108];
        dirent[109] = outVal[109];
        dirent[110] = outVal[110];
        dirent[111] = outVal[111];
        dirent[112] = outVal[112];
        dirent[113] = outVal[113];
        dirent[114] = outVal[114];
        dirent[115] = outVal[115];
        dirent[116] = outVal[116];
        dirent[117] = outVal[117];
        dirent[118] = outVal[118];
        dirent[119] = outVal[119];
        dirent[120] = outVal[120];
        dirent[121] = outVal[121];
        dirent[122] = outVal[122];
        dirent[123] = outVal[123];
        dirent[124] = outVal[124];
        dirent[125] = outVal[125];
        dirent[126] = outVal[126];
        dirent[127] = outVal[127];
        inPtr+=128;
    }// end of dirent handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsDir()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsCd(const uint8_t path[], uint8_t *pwd) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 128;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 128;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_CD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read pwd from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal[128];
        byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
        pwd[0] = outVal[0];
        pwd[1] = outVal[1];
        pwd[2] = outVal[2];
        pwd[3] = outVal[3];
        pwd[4] = outVal[4];
        pwd[5] = outVal[5];
        pwd[6] = outVal[6];
        pwd[7] = outVal[7];
        pwd[8] = outVal[8];
        pwd[9] = outVal[9];
        pwd[10] = outVal[10];
        pwd[11] = outVal[11];
        pwd[12] = outVal[12];
        pwd[13] = outVal[13];
        pwd[14] = outVal[14];
        pwd[15] = outVal[15];
        pwd[16] = outVal[16];
        pwd[17] = outVal[17];
        pwd[18] = outVal[18];
        pwd[19] = outVal[19];
        pwd[20] = outVal[20];
        pwd[21] = outVal[21];
        pwd[22] = outVal[22];
        pwd[23] = outVal[23];
        pwd[24] = outVal[24];
        pwd[25] = outVal[25];
        pwd[26] = outVal[26];
        pwd[27] = outVal[27];
        pwd[28] = outVal[28];
        pwd[29] = outVal[29];
        pwd[30] = outVal[30];
        pwd[31] = outVal[31];
        pwd[32] = outVal[32];
        pwd[33] = outVal[33];
        pwd[34] = outVal[34];
        pwd[35] = outVal[35];
        pwd[36] = outVal[36];
        pwd[37] = outVal[37];
        pwd[38] = outVal[38];
        pwd[39] = outVal[39];
        pwd[40] = outVal[40];
        pwd[41] = outVal[41];
        pwd[42] = outVal[42];
        pwd[43] = outVal[43];
        pwd[44] = outVal[44];
        pwd[45] = outVal[45];
        pwd[46] = outVal[46];
        pwd[47] = outVal[47];
        pwd[48] = outVal[48];
        pwd[49] = outVal[49];
        pwd[50] = outVal[50];
        pwd[51] = outVal[51];
        pwd[52] = outVal[52];
        pwd[53] = outVal[53];
        pwd[54] = outVal[54];
        pwd[55] = outVal[55];
        pwd[56] = outVal[56];
        pwd[57] = outVal[57];
        pwd[58] = outVal[58];
        pwd[59] = outVal[59];
        pwd[60] = outVal[60];
        pwd[61] = outVal[61];
        pwd[62] = outVal[62];
        pwd[63] = outVal[63];
        pwd[64] = outVal[64];
        pwd[65] = outVal[65];
        pwd[66] = outVal[66];
        pwd[67] = outVal[67];
        pwd[68] = outVal[68];
        pwd[69] = outVal[69];
        pwd[70] = outVal[70];
        pwd[71] = outVal[71];
        pwd[72] = outVal[72];
        pwd[73] = outVal[73];
        pwd[74] = outVal[74];
        pwd[75] = outVal[75];
        pwd[76] = outVal[76];
        pwd[77] = outVal[77];
        pwd[78] = outVal[78];
        pwd[79] = outVal[79];
        pwd[80] = outVal[80];
        pwd[81] = outVal[81];
        pwd[82] = outVal[82];
        pwd[83] = outVal[83];
        pwd[84] = outVal[84];
        pwd[85] = outVal[85];
        pwd[86] = outVal[86];
        pwd[87] = outVal[87];
        pwd[88] = outVal[88];
        pwd[89] = outVal[89];
        pwd[90] = outVal[90];
        pwd[91] = outVal[91];
        pwd[92] = outVal[92];
        pwd[93] = outVal[93];
        pwd[94] = outVal[94];
        pwd[95] = outVal[95];
        pwd[96] = outVal[96];
        pwd[97] = outVal[97];
        pwd[98] = outVal[98];
        pwd[99] = outVal[99];
        pwd[100] = outVal[100];
        pwd[101] = outVal[101];
        pwd[102] = outVal[102];
        pwd[103] = outVal[103];
        pwd[104] = outVal[104];
        pwd[105] = outVal[105];
        pwd[106] = outVal[106];
        pwd[107] = outVal[107];
        pwd[108] = outVal[108];
        pwd[109] = outVal[109];
        pwd[110] = outVal[110];
        pwd[111] = outVal[111];
        pwd[112] = outVal[112];
        pwd[113] = outVal[113];
        pwd[114] = outVal[114];
        pwd[115] = outVal[115];
        pwd[116] = outVal[116];
        pwd[117] = outVal[117];
        pwd[118] = outVal[118];
        pwd[119] = outVal[119];
        pwd[120] = outVal[120];
        pwd[121] = outVal[121];
        pwd[122] = outVal[122];
        pwd[123] = outVal[123];
        pwd[124] = outVal[124];
        pwd[125] = outVal[125];
        pwd[126] = outVal[126];
        pwd[127] = outVal[127];
        inPtr+=128;
    }// end of pwd handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsCd()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsMd(const uint8_t path[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 128;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_MD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsMd()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFopen(const uint8_t path[], const uint8_t mode[], uint32_t *id) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 256;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    //write mode to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {mode[0], mode[1], mode[2], mode[3], mode[4], mode[5], mode[6], mode[7], mode[8], mode[9], mode[10], mode[11], mode[12], mode[13], mode[14], mode[15], mode[16], mode[17], mode[18], mode[19], mode[20], mode[21], mode[22], mode[23], mode[24], mode[25], mode[26], mode[27], mode[28], mode[29], mode[30], mode[31], mode[32], mode[33], mode[34], mode[35], mode[36], mode[37], mode[38], mode[39], mode[40], mode[41], mode[42], mode[43], mode[44], mode[45], mode[46], mode[47], mode[48], mode[49], mode[50], mode[51], mode[52], mode[53], mode[54], mode[55], mode[56], mode[57], mode[58], mode[59], mode[60], mode[61], mode[62], mode[63], mode[64], mode[65], mode[66], mode[67], mode[68], mode[69], mode[70], mode[71], mode[72], mode[73], mode[74], mode[75], mode[76], mode[77], mode[78], mode[79], mode[80], mode[81], mode[82], mode[83], mode[84], mode[85], mode[86], mode[87], mode[88], mode[89], mode[90], mode[91], mode[92], mode[93], mode[94], mode[95], mode[96], mode[97], mode[98], mode[99], mode[100], mode[101], mode[102], mode[103], mode[104], mode[105], mode[106], mode[107], mode[108], mode[109], mode[110], mode[111], mode[112], mode[113], mode[114], mode[115], mode[116], mode[117], mode[118], mode[119], mode[120], mode[121], mode[122], mode[123], mode[124], mode[125], mode[126], mode[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FOPEN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read id from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *id = (uint32_t)outVal;
        inPtr+=4;
    }// end of id handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFopen()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFclose(const uint32_t id) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = id;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FCLOSE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFclose()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFread(const uint32_t id, const uint32_t length, uint8_t *buf, uint32_t *ret) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 132;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = id;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write length to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = length;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FREAD, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read buf from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal[128];
        byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
        buf[0] = outVal[0];
        buf[1] = outVal[1];
        buf[2] = outVal[2];
        buf[3] = outVal[3];
        buf[4] = outVal[4];
        buf[5] = outVal[5];
        buf[6] = outVal[6];
        buf[7] = outVal[7];
        buf[8] = outVal[8];
        buf[9] = outVal[9];
        buf[10] = outVal[10];
        buf[11] = outVal[11];
        buf[12] = outVal[12];
        buf[13] = outVal[13];
        buf[14] = outVal[14];
        buf[15] = outVal[15];
        buf[16] = outVal[16];
        buf[17] = outVal[17];
        buf[18] = outVal[18];
        buf[19] = outVal[19];
        buf[20] = outVal[20];
        buf[21] = outVal[21];
        buf[22] = outVal[22];
        buf[23] = outVal[23];
        buf[24] = outVal[24];
        buf[25] = outVal[25];
        buf[26] = outVal[26];
        buf[27] = outVal[27];
        buf[28] = outVal[28];
        buf[29] = outVal[29];
        buf[30] = outVal[30];
        buf[31] = outVal[31];
        buf[32] = outVal[32];
        buf[33] = outVal[33];
        buf[34] = outVal[34];
        buf[35] = outVal[35];
        buf[36] = outVal[36];
        buf[37] = outVal[37];
        buf[38] = outVal[38];
        buf[39] = outVal[39];
        buf[40] = outVal[40];
        buf[41] = outVal[41];
        buf[42] = outVal[42];
        buf[43] = outVal[43];
        buf[44] = outVal[44];
        buf[45] = outVal[45];
        buf[46] = outVal[46];
        buf[47] = outVal[47];
        buf[48] = outVal[48];
        buf[49] = outVal[49];
        buf[50] = outVal[50];
        buf[51] = outVal[51];
        buf[52] = outVal[52];
        buf[53] = outVal[53];
        buf[54] = outVal[54];
        buf[55] = outVal[55];
        buf[56] = outVal[56];
        buf[57] = outVal[57];
        buf[58] = outVal[58];
        buf[59] = outVal[59];
        buf[60] = outVal[60];
        buf[61] = outVal[61];
        buf[62] = outVal[62];
        buf[63] = outVal[63];
        buf[64] = outVal[64];
        buf[65] = outVal[65];
        buf[66] = outVal[66];
        buf[67] = outVal[67];
        buf[68] = outVal[68];
        buf[69] = outVal[69];
        buf[70] = outVal[70];
        buf[71] = outVal[71];
        buf[72] = outVal[72];
        buf[73] = outVal[73];
        buf[74] = outVal[74];
        buf[75] = outVal[75];
        buf[76] = outVal[76];
        buf[77] = outVal[77];
        buf[78] = outVal[78];
        buf[79] = outVal[79];
        buf[80] = outVal[80];
        buf[81] = outVal[81];
        buf[82] = outVal[82];
        buf[83] = outVal[83];
        buf[84] = outVal[84];
        buf[85] = outVal[85];
        buf[86] = outVal[86];
        buf[87] = outVal[87];
        buf[88] = outVal[88];
        buf[89] = outVal[89];
        buf[90] = outVal[90];
        buf[91] = outVal[91];
        buf[92] = outVal[92];
        buf[93] = outVal[93];
        buf[94] = outVal[94];
        buf[95] = outVal[95];
        buf[96] = outVal[96];
        buf[97] = outVal[97];
        buf[98] = outVal[98];
        buf[99] = outVal[99];
        buf[100] = outVal[100];
        buf[101] = outVal[101];
        buf[102] = outVal[102];
        buf[103] = outVal[103];
        buf[104] = outVal[104];
        buf[105] = outVal[105];
        buf[106] = outVal[106];
        buf[107] = outVal[107];
        buf[108] = outVal[108];
        buf[109] = outVal[109];
        buf[110] = outVal[110];
        buf[111] = outVal[111];
        buf[112] = outVal[112];
        buf[113] = outVal[113];
        buf[114] = outVal[114];
        buf[115] = outVal[115];
        buf[116] = outVal[116];
        buf[117] = outVal[117];
        buf[118] = outVal[118];
        buf[119] = outVal[119];
        buf[120] = outVal[120];
        buf[121] = outVal[121];
        buf[122] = outVal[122];
        buf[123] = outVal[123];
        buf[124] = outVal[124];
        buf[125] = outVal[125];
        buf[126] = outVal[126];
        buf[127] = outVal[127];
        inPtr+=128;
    }// end of buf handling
    
    // read ret from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *ret = (uint32_t)outVal;
        inPtr+=4;
    }// end of ret handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFread()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFwrite(const uint32_t id, const uint32_t length, const uint8_t buf[], uint32_t *ret) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 136;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = id;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write length to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = length;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write buf to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7], buf[8], buf[9], buf[10], buf[11], buf[12], buf[13], buf[14], buf[15], buf[16], buf[17], buf[18], buf[19], buf[20], buf[21], buf[22], buf[23], buf[24], buf[25], buf[26], buf[27], buf[28], buf[29], buf[30], buf[31], buf[32], buf[33], buf[34], buf[35], buf[36], buf[37], buf[38], buf[39], buf[40], buf[41], buf[42], buf[43], buf[44], buf[45], buf[46], buf[47], buf[48], buf[49], buf[50], buf[51], buf[52], buf[53], buf[54], buf[55], buf[56], buf[57], buf[58], buf[59], buf[60], buf[61], buf[62], buf[63], buf[64], buf[65], buf[66], buf[67], buf[68], buf[69], buf[70], buf[71], buf[72], buf[73], buf[74], buf[75], buf[76], buf[77], buf[78], buf[79], buf[80], buf[81], buf[82], buf[83], buf[84], buf[85], buf[86], buf[87], buf[88], buf[89], buf[90], buf[91], buf[92], buf[93], buf[94], buf[95], buf[96], buf[97], buf[98], buf[99], buf[100], buf[101], buf[102], buf[103], buf[104], buf[105], buf[106], buf[107], buf[108], buf[109], buf[110], buf[111], buf[112], buf[113], buf[114], buf[115], buf[116], buf[117], buf[118], buf[119], buf[120], buf[121], buf[122], buf[123], buf[124], buf[125], buf[126], buf[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FWRITE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read ret from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *ret = (uint32_t)outVal;
        inPtr+=4;
    }// end of ret handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFwrite()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFtell(const uint32_t id, uint32_t *offset) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = id;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FTELL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read offset from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *offset = (uint32_t)outVal;
        inPtr+=4;
    }// end of offset handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFtell()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFseek(const uint32_t id, const uint32_t offset, const uint32_t origin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 12;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = id;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write offset to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = offset;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write origin to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = origin;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FSEEK, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFseek()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsFtruncate(const uint32_t id, const uint32_t length) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = id;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write length to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = length;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_FTRUNCATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsFtruncate()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsRmdir(const uint8_t path[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 128;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_RMDIR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsRmdir()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsRm(const uint8_t path[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 128;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_RM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsRm()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsRename(const uint8_t oldpath[], const uint8_t newpath[]) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 256;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write oldpath to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {oldpath[0], oldpath[1], oldpath[2], oldpath[3], oldpath[4], oldpath[5], oldpath[6], oldpath[7], oldpath[8], oldpath[9], oldpath[10], oldpath[11], oldpath[12], oldpath[13], oldpath[14], oldpath[15], oldpath[16], oldpath[17], oldpath[18], oldpath[19], oldpath[20], oldpath[21], oldpath[22], oldpath[23], oldpath[24], oldpath[25], oldpath[26], oldpath[27], oldpath[28], oldpath[29], oldpath[30], oldpath[31], oldpath[32], oldpath[33], oldpath[34], oldpath[35], oldpath[36], oldpath[37], oldpath[38], oldpath[39], oldpath[40], oldpath[41], oldpath[42], oldpath[43], oldpath[44], oldpath[45], oldpath[46], oldpath[47], oldpath[48], oldpath[49], oldpath[50], oldpath[51], oldpath[52], oldpath[53], oldpath[54], oldpath[55], oldpath[56], oldpath[57], oldpath[58], oldpath[59], oldpath[60], oldpath[61], oldpath[62], oldpath[63], oldpath[64], oldpath[65], oldpath[66], oldpath[67], oldpath[68], oldpath[69], oldpath[70], oldpath[71], oldpath[72], oldpath[73], oldpath[74], oldpath[75], oldpath[76], oldpath[77], oldpath[78], oldpath[79], oldpath[80], oldpath[81], oldpath[82], oldpath[83], oldpath[84], oldpath[85], oldpath[86], oldpath[87], oldpath[88], oldpath[89], oldpath[90], oldpath[91], oldpath[92], oldpath[93], oldpath[94], oldpath[95], oldpath[96], oldpath[97], oldpath[98], oldpath[99], oldpath[100], oldpath[101], oldpath[102], oldpath[103], oldpath[104], oldpath[105], oldpath[106], oldpath[107], oldpath[108], oldpath[109], oldpath[110], oldpath[111], oldpath[112], oldpath[113], oldpath[114], oldpath[115], oldpath[116], oldpath[117], oldpath[118], oldpath[119], oldpath[120], oldpath[121], oldpath[122], oldpath[123], oldpath[124], oldpath[125], oldpath[126], oldpath[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    //write newpath to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {newpath[0], newpath[1], newpath[2], newpath[3], newpath[4], newpath[5], newpath[6], newpath[7], newpath[8], newpath[9], newpath[10], newpath[11], newpath[12], newpath[13], newpath[14], newpath[15], newpath[16], newpath[17], newpath[18], newpath[19], newpath[20], newpath[21], newpath[22], newpath[23], newpath[24], newpath[25], newpath[26], newpath[27], newpath[28], newpath[29], newpath[30], newpath[31], newpath[32], newpath[33], newpath[34], newpath[35], newpath[36], newpath[37], newpath[38], newpath[39], newpath[40], newpath[41], newpath[42], newpath[43], newpath[44], newpath[45], newpath[46], newpath[47], newpath[48], newpath[49], newpath[50], newpath[51], newpath[52], newpath[53], newpath[54], newpath[55], newpath[56], newpath[57], newpath[58], newpath[59], newpath[60], newpath[61], newpath[62], newpath[63], newpath[64], newpath[65], newpath[66], newpath[67], newpath[68], newpath[69], newpath[70], newpath[71], newpath[72], newpath[73], newpath[74], newpath[75], newpath[76], newpath[77], newpath[78], newpath[79], newpath[80], newpath[81], newpath[82], newpath[83], newpath[84], newpath[85], newpath[86], newpath[87], newpath[88], newpath[89], newpath[90], newpath[91], newpath[92], newpath[93], newpath[94], newpath[95], newpath[96], newpath[97], newpath[98], newpath[99], newpath[100], newpath[101], newpath[102], newpath[103], newpath[104], newpath[105], newpath[106], newpath[107], newpath[108], newpath[109], newpath[110], newpath[111], newpath[112], newpath[113], newpath[114], newpath[115], newpath[116], newpath[117], newpath[118], newpath[119], newpath[120], newpath[121], newpath[122], newpath[123], newpath[124], newpath[125], newpath[126], newpath[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_RENAME, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsRename()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFileopsGetFileSize(const uint8_t path[], uint32_t *fileLength) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 128;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write path to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal[] = {path[0], path[1], path[2], path[3], path[4], path[5], path[6], path[7], path[8], path[9], path[10], path[11], path[12], path[13], path[14], path[15], path[16], path[17], path[18], path[19], path[20], path[21], path[22], path[23], path[24], path[25], path[26], path[27], path[28], path[29], path[30], path[31], path[32], path[33], path[34], path[35], path[36], path[37], path[38], path[39], path[40], path[41], path[42], path[43], path[44], path[45], path[46], path[47], path[48], path[49], path[50], path[51], path[52], path[53], path[54], path[55], path[56], path[57], path[58], path[59], path[60], path[61], path[62], path[63], path[64], path[65], path[66], path[67], path[68], path[69], path[70], path[71], path[72], path[73], path[74], path[75], path[76], path[77], path[78], path[79], path[80], path[81], path[82], path[83], path[84], path[85], path[86], path[87], path[88], path[89], path[90], path[91], path[92], path[93], path[94], path[95], path[96], path[97], path[98], path[99], path[100], path[101], path[102], path[103], path[104], path[105], path[106], path[107], path[108], path[109], path[110], path[111], path[112], path[113], path[114], path[115], path[116], path[117], path[118], path[119], path[120], path[121], path[122], path[123], path[124], path[125], path[126], path[127]};
        UCHARArrayToByte(inVal, (uint16_t) 128, (const uint8_t *) outPtr);
        outPtr += 128;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FILEOPS_GETFILESIZE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read fileLength from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *fileLength = (uint32_t)outVal;
        inPtr+=4;
    }// end of fileLength handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFileopsGetFileSize()

// End Module: fileOps
// Begin Module: jffs2
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgJffs2Mount() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, JFFS2_MOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgJffs2Mount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgJffs2Unmount() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, JFFS2_UNMOUNT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgJffs2Unmount()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgJffs2GetState(FLR_JFFS2_STATE_E *state) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, JFFS2_GETSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read state from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *state = (FLR_JFFS2_STATE_E)outVal;
        inPtr+=4;
    }// end of state handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgJffs2GetState()

// End Module: jffs2
// Begin Module: splashScreen
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSplashscreenSetDuration(const uint32_t screen_num, const uint32_t periodMs) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write screen_num to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = screen_num;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write periodMs to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = periodMs;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_SETDURATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSplashscreenSetDuration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSplashscreenSetDataType(const uint32_t screen_num, const FLR_SPLASHSCREEN_FILETYPE_E filetype) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write screen_num to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = screen_num;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write filetype to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SPLASHSCREEN_FILETYPE_E inVal = filetype;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_SETDATATYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSplashscreenSetDataType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSplashscreenSetBackground(const uint32_t screen_num, const uint32_t backgroundColor) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write screen_num to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = screen_num;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write backgroundColor to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = backgroundColor;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_SETBACKGROUND, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSplashscreenSetBackground()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSplashscreenGetDuration(const uint32_t screen_num, uint32_t *periodMs) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write screen_num to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = screen_num;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_GETDURATION, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read periodMs from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *periodMs = (uint32_t)outVal;
        inPtr+=4;
    }// end of periodMs handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSplashscreenGetDuration()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSplashscreenGetDataType(const uint32_t screen_num, FLR_SPLASHSCREEN_FILETYPE_E *filetype) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write screen_num to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = screen_num;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_GETDATATYPE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read filetype from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *filetype = (FLR_SPLASHSCREEN_FILETYPE_E)outVal;
        inPtr+=4;
    }// end of filetype handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSplashscreenGetDataType()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSplashscreenGetBackground(const uint32_t screen_num, uint32_t *backgroundColor) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write screen_num to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = screen_num;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SPLASHSCREEN_GETBACKGROUND, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read backgroundColor from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *backgroundColor = (uint32_t)outVal;
        inPtr+=4;
    }// end of backgroundColor handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSplashscreenGetBackground()

// End Module: splashScreen
// Begin Module: systemSymbols
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSystemsymbolsGetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, uint8_t *id, FLR_SYSTEMSYMBOLS_ID_TYPE_E *id_type) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 5;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write symbol to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_GETID, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read id from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal;
        byteToUCHAR( (const uint8_t *) inPtr, &outVal);
        *id = (uint8_t)outVal;
        inPtr+=1;
    }// end of id handling
    
    // read id_type from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *id_type = (FLR_SYSTEMSYMBOLS_ID_TYPE_E)outVal;
        inPtr+=4;
    }// end of id_type handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSystemsymbolsGetID()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSystemsymbolsSetID(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const uint8_t id, const FLR_SYSTEMSYMBOLS_ID_TYPE_E id_type) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 9;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write symbol to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write id to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint8_t inVal = id;
        UCHARToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 1;
    }
    
    //write id_type to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYSTEMSYMBOLS_ID_TYPE_E inVal = id_type;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_SETID, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSystemsymbolsSetID()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSystemsymbolsGetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, FLR_ENABLE_E *enabled) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write symbol to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_GETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read enabled from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *enabled = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of enabled handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSystemsymbolsGetEnable()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSystemsymbolsSetEnable(const FLR_SYSTEMSYMBOLS_SYMBOL_E symbol, const FLR_ENABLE_E enabled) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write symbol to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_SYSTEMSYMBOLS_SYMBOL_E inVal = symbol;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    //write enabled to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = enabled;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSTEMSYMBOLS_SETENABLE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSystemsymbolsSetEnable()

// End Module: systemSymbols
// Begin Module: sffc
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcGetScaleFactor(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETSCALEFACTOR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcGetScaleFactor()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcGetDeltaTempLinearCoeff(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETDELTATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcGetDeltaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcSetDeltaTempLinearCoeff(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETDELTATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcSetDeltaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcGetDeltaTempOffsetCoeff(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETDELTATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcGetDeltaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcSetDeltaTempOffsetCoeff(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETDELTATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcSetDeltaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcGetFpaTempLinearCoeff(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETFPATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcGetFpaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcSetFpaTempLinearCoeff(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETFPATEMPLINEARCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcSetFpaTempLinearCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcGetFpaTempOffsetCoeff(float *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETFPATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        float outVal;
        byteToFLOAT( (const uint8_t *) inPtr, &outVal);
        *data = (float)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcGetFpaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcSetFpaTempOffsetCoeff(const float data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const float inVal = data;
        FLOATToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETFPATEMPOFFSETCOEFF, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcSetFpaTempOffsetCoeff()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcGetDeltaTempTimeLimitInSecs(uint32_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_GETDELTATEMPTIMELIMITINSECS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (uint32_t)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcGetDeltaTempTimeLimitInSecs()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSffcSetDeltaTempTimeLimitInSecs(const uint32_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint32_t inVal = data;
        UINT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SFFC_SETDELTATEMPTIMELIMITINSECS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSffcSetDeltaTempTimeLimitInSecs()

// End Module: sffc
// Begin Module: imageStats
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetTotalHistPixelsInROI(uint32_t *totalPixelsInROI) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETTOTALHISTPIXELSINROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read totalPixelsInROI from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *totalPixelsInROI = (uint32_t)outVal;
        inPtr+=4;
    }// end of totalPixelsInROI handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetTotalHistPixelsInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetPopBelowLowToHighThresh(uint32_t *popBelowLowToHighThresh) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETPOPBELOWLOWTOHIGHTHRESH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read popBelowLowToHighThresh from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *popBelowLowToHighThresh = (uint32_t)outVal;
        inPtr+=4;
    }// end of popBelowLowToHighThresh handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetPopBelowLowToHighThresh()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetPopAboveHighToLowThresh(uint32_t *popAboveHighToLowThresh) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETPOPABOVEHIGHTOLOWTHRESH, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read popAboveHighToLowThresh from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *popAboveHighToLowThresh = (uint32_t)outVal;
        inPtr+=4;
    }// end of popAboveHighToLowThresh handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetPopAboveHighToLowThresh()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsSetROI(const FLR_ROI_T roi) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 8;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write roi to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ROI_T *inVal = (const FLR_ROI_T *) &roi;
        FLR_ROI_TToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 8;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_SETROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsSetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetROI(FLR_ROI_T *roi) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 8;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read roi from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_ROI_T outVal;
        byteToFLR_ROI_T( (const uint8_t *) inPtr, &outVal);
        *roi = (FLR_ROI_T)outVal;
        inPtr+=8;
    }// end of roi handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetFirstBin(uint16_t *firstBin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETFIRSTBIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read firstBin from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *firstBin = (uint16_t)outVal;
        inPtr+=2;
    }// end of firstBin handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetFirstBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetLastBin(uint16_t *lastBin) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETLASTBIN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read lastBin from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *lastBin = (uint16_t)outVal;
        inPtr+=2;
    }// end of lastBin handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetLastBin()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetMean(uint16_t *mean) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETMEAN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read mean from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *mean = (uint16_t)outVal;
        inPtr+=2;
    }// end of mean handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetMean()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetFirstBinInROI(uint16_t *firstBinInROI) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETFIRSTBININROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read firstBinInROI from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *firstBinInROI = (uint16_t)outVal;
        inPtr+=2;
    }// end of firstBinInROI handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetFirstBinInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetLastBinInROI(uint16_t *lastBinInROI) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETLASTBININROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read lastBinInROI from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *lastBinInROI = (uint16_t)outVal;
        inPtr+=2;
    }// end of lastBinInROI handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetLastBinInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetMeanInROI(uint16_t *meanInROI) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETMEANINROI, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read meanInROI from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *meanInROI = (uint16_t)outVal;
        inPtr+=2;
    }// end of meanInROI handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetMeanInROI()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgImagestatsGetImageStats(uint16_t *meanIntensity, uint16_t *peakIntensity, uint16_t *baseIntensity) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 6;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, IMAGESTATS_GETIMAGESTATS, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read meanIntensity from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *meanIntensity = (uint16_t)outVal;
        inPtr+=2;
    }// end of meanIntensity handling
    
    // read peakIntensity from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *peakIntensity = (uint16_t)outVal;
        inPtr+=2;
    }// end of peakIntensity handling
    
    // read baseIntensity from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *baseIntensity = (uint16_t)outVal;
        inPtr+=2;
    }// end of baseIntensity handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgImagestatsGetImageStats()

// End Module: imageStats
// Begin Module: srnr
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrSetEnableState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrSetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrGetEnableState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrGetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrSetThRowSum(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETTHROWSUM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrSetThRowSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrGetThRowSum(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETTHROWSUM, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrGetThRowSum()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrSetThPixel(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrSetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrGetThPixel(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETTHPIXEL, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrGetThPixel()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrSetMaxCorr(const uint16_t data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 2;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const uint16_t inVal = data;
        UINT_16ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 2;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_SETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrSetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrGetMaxCorr(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETMAXCORR, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrGetMaxCorr()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrGetThPixelApplied(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETTHPIXELAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrGetThPixelApplied()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSrnrGetMaxCorrApplied(uint16_t *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 2;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SRNR_GETMAXCORRAPPLIED, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint16_t outVal;
        byteToUINT_16( (const uint8_t *) inPtr, &outVal);
        *data = (uint16_t)outVal;
        inPtr+=2;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSrnrGetMaxCorrApplied()

// End Module: srnr
// Begin Module: lfsr
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgLfsrSetApplyOffsetEnableState(const FLR_ENABLE_E data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write data to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = data;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, LFSR_SETAPPLYOFFSETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgLfsrSetApplyOffsetEnableState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgLfsrGetApplyOffsetEnableState(FLR_ENABLE_E *data) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, LFSR_GETAPPLYOFFSETENABLESTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read data from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *data = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of data handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgLfsrGetApplyOffsetEnableState()

// End Module: lfsr
// Begin Module: sysinfo
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysinfoGetMonitorSoftwareRev(uint32_t *major, uint32_t *minor, uint32_t *patch) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 12;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSINFO_GETMONITORSOFTWAREREV, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read major from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *major = (uint32_t)outVal;
        inPtr+=4;
    }// end of major handling
    
    // read minor from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *minor = (uint32_t)outVal;
        inPtr+=4;
    }// end of minor handling
    
    // read patch from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint32_t outVal;
        byteToUINT_32( (const uint8_t *) inPtr, &outVal);
        *patch = (uint32_t)outVal;
        inPtr+=4;
    }// end of patch handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysinfoGetMonitorSoftwareRev()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysinfoGetMonitorBuildVariant(FLR_SYSINFO_MONITOR_BUILD_VARIANT_T *monitorBuildVariant) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 50;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSINFO_GETMONITORBUILDVARIANT, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read monitorBuildVariant from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        FLR_SYSINFO_MONITOR_BUILD_VARIANT_T outVal;
        byteToFLR_SYSINFO_MONITOR_BUILD_VARIANT_T( (const uint8_t *) inPtr, &outVal);
        *monitorBuildVariant = (FLR_SYSINFO_MONITOR_BUILD_VARIANT_T)outVal;
        inPtr+=50;
    }// end of monitorBuildVariant handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysinfoGetMonitorBuildVariant()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysinfoGetProductName(uint8_t *name) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 128;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSINFO_GETPRODUCTNAME, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read name from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal[128];
        byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
        name[0] = outVal[0];
        name[1] = outVal[1];
        name[2] = outVal[2];
        name[3] = outVal[3];
        name[4] = outVal[4];
        name[5] = outVal[5];
        name[6] = outVal[6];
        name[7] = outVal[7];
        name[8] = outVal[8];
        name[9] = outVal[9];
        name[10] = outVal[10];
        name[11] = outVal[11];
        name[12] = outVal[12];
        name[13] = outVal[13];
        name[14] = outVal[14];
        name[15] = outVal[15];
        name[16] = outVal[16];
        name[17] = outVal[17];
        name[18] = outVal[18];
        name[19] = outVal[19];
        name[20] = outVal[20];
        name[21] = outVal[21];
        name[22] = outVal[22];
        name[23] = outVal[23];
        name[24] = outVal[24];
        name[25] = outVal[25];
        name[26] = outVal[26];
        name[27] = outVal[27];
        name[28] = outVal[28];
        name[29] = outVal[29];
        name[30] = outVal[30];
        name[31] = outVal[31];
        name[32] = outVal[32];
        name[33] = outVal[33];
        name[34] = outVal[34];
        name[35] = outVal[35];
        name[36] = outVal[36];
        name[37] = outVal[37];
        name[38] = outVal[38];
        name[39] = outVal[39];
        name[40] = outVal[40];
        name[41] = outVal[41];
        name[42] = outVal[42];
        name[43] = outVal[43];
        name[44] = outVal[44];
        name[45] = outVal[45];
        name[46] = outVal[46];
        name[47] = outVal[47];
        name[48] = outVal[48];
        name[49] = outVal[49];
        name[50] = outVal[50];
        name[51] = outVal[51];
        name[52] = outVal[52];
        name[53] = outVal[53];
        name[54] = outVal[54];
        name[55] = outVal[55];
        name[56] = outVal[56];
        name[57] = outVal[57];
        name[58] = outVal[58];
        name[59] = outVal[59];
        name[60] = outVal[60];
        name[61] = outVal[61];
        name[62] = outVal[62];
        name[63] = outVal[63];
        name[64] = outVal[64];
        name[65] = outVal[65];
        name[66] = outVal[66];
        name[67] = outVal[67];
        name[68] = outVal[68];
        name[69] = outVal[69];
        name[70] = outVal[70];
        name[71] = outVal[71];
        name[72] = outVal[72];
        name[73] = outVal[73];
        name[74] = outVal[74];
        name[75] = outVal[75];
        name[76] = outVal[76];
        name[77] = outVal[77];
        name[78] = outVal[78];
        name[79] = outVal[79];
        name[80] = outVal[80];
        name[81] = outVal[81];
        name[82] = outVal[82];
        name[83] = outVal[83];
        name[84] = outVal[84];
        name[85] = outVal[85];
        name[86] = outVal[86];
        name[87] = outVal[87];
        name[88] = outVal[88];
        name[89] = outVal[89];
        name[90] = outVal[90];
        name[91] = outVal[91];
        name[92] = outVal[92];
        name[93] = outVal[93];
        name[94] = outVal[94];
        name[95] = outVal[95];
        name[96] = outVal[96];
        name[97] = outVal[97];
        name[98] = outVal[98];
        name[99] = outVal[99];
        name[100] = outVal[100];
        name[101] = outVal[101];
        name[102] = outVal[102];
        name[103] = outVal[103];
        name[104] = outVal[104];
        name[105] = outVal[105];
        name[106] = outVal[106];
        name[107] = outVal[107];
        name[108] = outVal[108];
        name[109] = outVal[109];
        name[110] = outVal[110];
        name[111] = outVal[111];
        name[112] = outVal[112];
        name[113] = outVal[113];
        name[114] = outVal[114];
        name[115] = outVal[115];
        name[116] = outVal[116];
        name[117] = outVal[117];
        name[118] = outVal[118];
        name[119] = outVal[119];
        name[120] = outVal[120];
        name[121] = outVal[121];
        name[122] = outVal[122];
        name[123] = outVal[123];
        name[124] = outVal[124];
        name[125] = outVal[125];
        name[126] = outVal[126];
        name[127] = outVal[127];
        inPtr+=128;
    }// end of name handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysinfoGetProductName()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgSysinfoGetCameraSN(uint8_t *number) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 128;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, SYSINFO_GETCAMERASN, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read number from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        uint8_t outVal[128];
        byteToUCHARArray( (const uint8_t *) inPtr, outVal, (uint16_t)128);
        number[0] = outVal[0];
        number[1] = outVal[1];
        number[2] = outVal[2];
        number[3] = outVal[3];
        number[4] = outVal[4];
        number[5] = outVal[5];
        number[6] = outVal[6];
        number[7] = outVal[7];
        number[8] = outVal[8];
        number[9] = outVal[9];
        number[10] = outVal[10];
        number[11] = outVal[11];
        number[12] = outVal[12];
        number[13] = outVal[13];
        number[14] = outVal[14];
        number[15] = outVal[15];
        number[16] = outVal[16];
        number[17] = outVal[17];
        number[18] = outVal[18];
        number[19] = outVal[19];
        number[20] = outVal[20];
        number[21] = outVal[21];
        number[22] = outVal[22];
        number[23] = outVal[23];
        number[24] = outVal[24];
        number[25] = outVal[25];
        number[26] = outVal[26];
        number[27] = outVal[27];
        number[28] = outVal[28];
        number[29] = outVal[29];
        number[30] = outVal[30];
        number[31] = outVal[31];
        number[32] = outVal[32];
        number[33] = outVal[33];
        number[34] = outVal[34];
        number[35] = outVal[35];
        number[36] = outVal[36];
        number[37] = outVal[37];
        number[38] = outVal[38];
        number[39] = outVal[39];
        number[40] = outVal[40];
        number[41] = outVal[41];
        number[42] = outVal[42];
        number[43] = outVal[43];
        number[44] = outVal[44];
        number[45] = outVal[45];
        number[46] = outVal[46];
        number[47] = outVal[47];
        number[48] = outVal[48];
        number[49] = outVal[49];
        number[50] = outVal[50];
        number[51] = outVal[51];
        number[52] = outVal[52];
        number[53] = outVal[53];
        number[54] = outVal[54];
        number[55] = outVal[55];
        number[56] = outVal[56];
        number[57] = outVal[57];
        number[58] = outVal[58];
        number[59] = outVal[59];
        number[60] = outVal[60];
        number[61] = outVal[61];
        number[62] = outVal[62];
        number[63] = outVal[63];
        number[64] = outVal[64];
        number[65] = outVal[65];
        number[66] = outVal[66];
        number[67] = outVal[67];
        number[68] = outVal[68];
        number[69] = outVal[69];
        number[70] = outVal[70];
        number[71] = outVal[71];
        number[72] = outVal[72];
        number[73] = outVal[73];
        number[74] = outVal[74];
        number[75] = outVal[75];
        number[76] = outVal[76];
        number[77] = outVal[77];
        number[78] = outVal[78];
        number[79] = outVal[79];
        number[80] = outVal[80];
        number[81] = outVal[81];
        number[82] = outVal[82];
        number[83] = outVal[83];
        number[84] = outVal[84];
        number[85] = outVal[85];
        number[86] = outVal[86];
        number[87] = outVal[87];
        number[88] = outVal[88];
        number[89] = outVal[89];
        number[90] = outVal[90];
        number[91] = outVal[91];
        number[92] = outVal[92];
        number[93] = outVal[93];
        number[94] = outVal[94];
        number[95] = outVal[95];
        number[96] = outVal[96];
        number[97] = outVal[97];
        number[98] = outVal[98];
        number[99] = outVal[99];
        number[100] = outVal[100];
        number[101] = outVal[101];
        number[102] = outVal[102];
        number[103] = outVal[103];
        number[104] = outVal[104];
        number[105] = outVal[105];
        number[106] = outVal[106];
        number[107] = outVal[107];
        number[108] = outVal[108];
        number[109] = outVal[109];
        number[110] = outVal[110];
        number[111] = outVal[111];
        number[112] = outVal[112];
        number[113] = outVal[113];
        number[114] = outVal[114];
        number[115] = outVal[115];
        number[116] = outVal[116];
        number[117] = outVal[117];
        number[118] = outVal[118];
        number[119] = outVal[119];
        number[120] = outVal[120];
        number[121] = outVal[121];
        number[122] = outVal[122];
        number[123] = outVal[123];
        number[124] = outVal[124];
        number[125] = outVal[125];
        number[126] = outVal[126];
        number[127] = outVal[127];
        inPtr+=128;
    }// end of number handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgSysinfoGetCameraSN()

// End Module: sysinfo
// Begin Module: flashIO
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFlashioSetProtectionState(const FLR_ENABLE_E protectionState) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 4;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    //write protectionState to sendData buffer
    { //Block to allow reuse of inVal
        if(outPtr >= (sendData+sendBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        const FLR_ENABLE_E inVal = protectionState;
        INT_32ToByte(inVal, (const uint8_t *) outPtr);
        outPtr += 4;
    }
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FLASHIO_SETPROTECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFlashioSetProtectionState()

// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgFlashioGetProtectionState(FLR_ENABLE_E *protectionState) {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 4;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, FLASHIO_GETPROTECTIONSTATE, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    // read protectionState from receiveData buffer
    { //Block to allow reuse of outVal
        if(inPtr >= (receiveData+receiveBytes)){
            return R_SDK_PKG_BUFFER_OVERFLOW;
        }
        int32_t outVal;
        byteToINT_32( (const uint8_t *) inPtr, &outVal);
        *protectionState = (FLR_ENABLE_E)outVal;
        inPtr+=4;
    }// end of protectionState handling
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgFlashioGetProtectionState()

// End Module: flashIO
// Begin Module: dummy
// Synchronous (potentially MultiService incompatible) transmit+receive variant
FLR_RESULT CLIENT_pkgDummyBadCommand() {
    // Allocate buffers with space for marshalled data
    uint32_t sendBytes = 0;
    const uint8_t sendData[sendBytes] = {};
    uint32_t receiveBytes = 1;
    uint8_t receiveData[receiveBytes];
    uint8_t *outPtr = (uint8_t *)sendData;
    
    FLR_RESULT returncode = CLIENT_dispatcher(commandCount++, DUMMY_BADCOMMAND, sendData, sendBytes, receiveData, &receiveBytes);
    
    // Check for any errorcode
    if((uint32_t) returncode){
        return returncode;
    }
    
    uint8_t *inPtr = (uint8_t *)receiveData;
    
    return R_SUCCESS;
    
}// End of CLIENT_pkgDummyBadCommand()

// End Module: dummy
