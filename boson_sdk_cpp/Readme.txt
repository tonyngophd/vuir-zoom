How to compilte Boson SDK package by FLIR in Linux/Raspberry Pi

1) Copy two folders: ClientFiles_C and FSLP_Files into desired installation folder
2) Copy content below and make new file CMakeList.txt in ClientFiles_C folder
3) Modify the #include "***.h" lines to make them  become #include src/***.h" in the following files:
	flirChannels.c  flirCRC.c  FSLP.c  timeoutLogic.c
	(from terminal use: geany flirChannels.c  flirCRC.c  FSLP.c  timeoutLogic.c)
4) Add "../inc/" to #include "serialPortAdapter.h" for it to become #include "../inc/serialPortAdapter.h" in file FSLP_Files/src/linux/serialPortAdapter.c
5) OPTIONAL: Add #include <unistd.h> to dataServiceClient.c (for usleep() - it will turn off complaint about implicit declaration of usleep)
6) OPTIONAL: change from int main() to void main() in Example.c to turn off warning about return no values
7) Modify UART_Connector.c at 2 points:
	i) Change from void to int32_t in the following line (this is FLIR's original error/typo)
		FLR_IMPORT void FSLP_read_frame(int32_t port_num,uint8_t channel_ID, uint16_t start_byte_ms,uint32_t *receiveBytes, uint8_t *receiveBuffer);
	ii) add the following line in FLR_RESULT Initialize(int32_t port_num, int32_t baud_rate) or modify in main program to search for the port
		FLR_IMPORT int32_t FSLP_lookup_port_id( char *port_name, int32_t len );
		myPort = FSLP_lookup_port_id("/dev/ttyACM0", sizeof("/dev/ttyACM0"));

8) mkdir build && cd build
9) cmake ..
10) make
11) run the executable
#########################################################
######## Contents of CMakeList.txt file:  ###############
#########################################################
cmake_minimum_required(VERSION 2.8)
project( bosonSDK )
include_directories(${PROJECT_SOURCE_DIR}, ${MY_SOURCE_DIR}/../FSLP_Files/src, ${MY_SOURCE_DIR}/../FSLP_Files/src/inc, ../${MY_SOURCE_DIR}/../FS
LP_Files/src/linux , /usr/lib/arm-linux-gnueabihf/)
find_package( OpenCV REQUIRED )
add_executable( bosonSDK  Client_API.c         Client_Packager.c    Example.c  MultiServiceSupport.c  Serializer_Struct.c  UPTClient.c Client_Dispatcher.c  dataServiceClient.c  fifo.c     Serializer_BuiltIn.c   UART_Connector.c ../FSLP_Files/src/flirChannels.c  ../FSLP_Files/src/flirCRC.c  ../FSLP_Files/src/FSLP.c  ../FSLP_Files/src/timeoutLogic.c ../FSLP_Files/src/linux/serial.c  ../FSLP_Files/src/linux/serialPortAdapter.c )
target_link_libraries( bosonSDK ${OpenCV_LIBS} )
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(bosonSDK Threads::Threads)
target_link_libraries(bosonSDK X11)
set(CMAKE_C_STANDARD 11)
add_compile_options(-Wall -lX11)

