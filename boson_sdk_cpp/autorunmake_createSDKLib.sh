#!/usr/bin/env bash
#https://www.tecmint.com/assign-linux-command-output-to-variable/
mkdir bosonSDK_dir
cp autorunmake_createSDKLib.sh Readme.txt bosonSDK_dir
cd bosonSDK_dir
SDKsourceDIR=`find $HOME -name SDK_USER_PERMISSIONS -print -quit` # -quit to exit after finding the first time
echo found SDK source directory as $SDKsourceDIR
cp -r $SDKsourceDIR/ClientFiles_C $SDKsourceDIR/FSLP_Files .

cd ClientFiles_C

cat >> CMakeLists.txt << EOF
cmake_minimum_required(VERSION 2.8)
project( bosonSDK )
include_directories(${PROJECT_SOURCE_DIR}, \
	${MY_SOURCE_DIR}/../FSLP_Files/src, \
	${MY_SOURCE_DIR}/../FSLP_Files/src/inc, ../${MY_SOURCE_DIR}/../FS
LP_Files/src/linux , /usr/lib/arm-linux-gnueabihf/)
find_package( OpenCV REQUIRED )
add_executable( bosonSDK  Client_API.c      \
   Client_Packager.c    Example.c  MultiServiceSupport.c \
   Serializer_Struct.c  UPTClient.c Client_Dispatcher.c  \
   dataServiceClient.c  fifo.c     Serializer_BuiltIn.c   \
   UART_Connector.c ../FSLP_Files/src/flirChannels.c  \
   ../FSLP_Files/src/flirCRC.c  ../FSLP_Files/src/FSLP.c  \
   ../FSLP_Files/src/timeoutLogic.c ../FSLP_Files/src/linux/serial.c  \
   ../FSLP_Files/src/linux/serialPortAdapter.c )
target_link_libraries( bosonSDK ${OpenCV_LIBS} )
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(bosonSDK Threads::Threads)
target_link_libraries(bosonSDK X11)
set(CMAKE_C_STANDARD 11)
add_compile_options(-Wall -lX11)
EOF

cd ../

#https://unix.stackexchange.com/questions/30127/whats-the-quickest-way-to-add-text-to-a-file-from-the-command-line
#https://www.cyberciti.biz/faq/how-to-use-sed-to-find-and-replace-text-in-files-in-linux-unix-shell/
sed -i 's/#include \"/#include \"inc\//g' FSLP_Files/src/flirChannels.c
sed -i 's/#include \"/#include \"inc\//g' FSLP_Files/src/flirCRC.c
sed -i 's/#include \"/#include \"inc\//g' FSLP_Files/src/FSLP.c
sed -i 's/#include \"/#include \"inc\//g' FSLP_Files/src/timeoutLogic.c
sed -zi 's/#include \"/#include \"..\/inc\//' FSLP_Files/src/linux/serialPortAdapter.c # no 'g' at the end and 'z' to replace only the first occurence
#https://askubuntu.com/questions/435291/add-words-to-a-text-file-using-a-single-terminal-command-no-editors
sed -i '28i#include <unistd.h>' ClientFiles_C/dataServiceClient.c
sed -i 's/int main/void main/g' ClientFiles_C/Example.c

#https://unix.stackexchange.com/questions/153091/how-to-add-a-carriage-return-before-every-newline
sed -i '36i\\r' ClientFiles_C/UART_Connector.c
sed -i '36i\\tFLR_IMPORT int32_t FSLP_lookup_port_id( char *port_name, int32_t len );' ClientFiles_C/UART_Connector.c
sed -i '37i\\tmyPort = FSLP_lookup_port_id(\"\/dev\/ttyACM0\", sizeof(\"\/dev\/ttyACM0\"));' ClientFiles_C/UART_Connector.c
sed -i 's/FLR_IMPORT void FSLP_read_frame/FLR_IMPORT int32_t FSLP_read_frame/g' ClientFiles_C/UART_Connector.c

mkdir build && cd build
cmake ../ClientFiles_C
make
./bosonSDK

