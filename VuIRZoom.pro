exists($${OUT_PWD}/VuIRZoom.pro) {
    error("You must use shadow build (e.g. mkdir build; cd build; qmake ../VuIRZoom.pro).")
}

message(Qt version $$[QT_VERSION])

!equals(QT_MAJOR_VERSION, 5) | !greaterThan(QT_MINOR_VERSION, 6) {
    error("Unsupported Qt version, 5.7+ is required")
}

include(common.pri)

DebugBuild {
    DESTDIR  = $${OUT_PWD}/debug
} else {
    DESTDIR  = $${OUT_PWD}/release
}

QT += qml quick multimedia

QT_CONFIG -= no-pkg-config
CONFIG += c++14 \
          link_pkgconfig

MacBuild: {
    PKG_CONFIG = /usr/local/bin/pkg-config
}

SOURCES += \
    src/main.cpp \
    src/uvcvideoproducer.cpp \
    src/uvcacquisition.cpp \
    src/uvcbuffer.cpp \
    src/leptonvariation.cpp \
    src/abstractccinterface.cpp \
    lepton_sdk/Src/LEPTON_AGC.c \
    lepton_sdk/Src/LEPTON_OEM.c \
    lepton_sdk/Src/LEPTON_RAD.c \
    lepton_sdk/Src/LEPTON_SDK.c \
    lepton_sdk/Src/LEPTON_SYS.c \
    lepton_sdk/Src/LEPTON_VID.c \
    lepton_sdk/Src/crc16fast.c \
    src/dataformatter.cpp \
    src/rangeprovider.cpp \
    src/bosonvariation.cpp \
    #boson_sdk/Client_API.c \
    #boson_sdk/Client_Dispatcher.c \
    #boson_sdk/Client_Packager.c \
    #boson_sdk/Example.c \
    #boson_sdk/Serializer_BuiltIn.c \
    #boson_sdk/Serializer_Struct.c \
    #boson_sdk/UART_Connector.c \
    #boson_sdk/flirChannels.c \
    #boson_sdk/flirCRC.c \
    #boson_sdk/libusb_binary_protocol.c \
    src/agthread.cpp \
    src/agtimer.cpp \
    src/ag_aux_funcs.cpp \
    src/convenientserial.cpp \
    src/serial.cpp \
    src/bytes.cpp \
    boson_sdk_cpp/ClientFiles_C/Client_API.cpp \
    boson_sdk_cpp/ClientFiles_C/Client_Dispatcher.cpp \
    boson_sdk_cpp/ClientFiles_C/Client_Packager.cpp \
    boson_sdk_cpp/ClientFiles_C/Serializer_BuiltIn.cpp \
    boson_sdk_cpp/ClientFiles_C/Serializer_Struct.cpp \
    boson_sdk_cpp/ClientFiles_C/UART_Connector.cpp \
    boson_sdk_cpp/FSLP_Files/src/flirChannels.cpp \
    boson_sdk_cpp/FSLP_Files/src/flirCRC.cpp \
    boson_sdk_cpp/FSLP_Files/src/FSLP.cpp \
    boson_sdk_cpp/FSLP_Files/src/linux/serialPortAdapter.cpp \
    boson_sdk_cpp/FSLP_Files/src/timeoutLogic.cpp \
    boson_sdk_cpp/ClientFiles_C/libusb_binary_protocol.c \
    src/videoframetoqimage.cpp \
    src/QVideoFrameToQImage.cpp \
    src/savevidframesthread.cpp \
    src/ffmpgegvideorecorder.cpp \
    src/videoviewscontroller.cpp \
    src/callcppfunctionsfromqml.cpp \
    src/ocvvideocapture.cpp \
    src/ocvvideoproducer.cpp

RESOURCES += qml/qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

HEADERS += \
    inc/uvcvideoproducer.h \
    inc/uvcbuffer.h \
    inc/uvcacquisition.h \
    inc/leptonvariation.h \
    inc/abstractccinterface.h \
    lepton_sdk/Inc/LEPTON_AGC.h \
    lepton_sdk/Inc/LEPTON_ErrorCodes.h \
    lepton_sdk/Inc/LEPTON_Macros.h \
    lepton_sdk/Inc/LEPTON_OEM.h \
    lepton_sdk/Inc/LEPTON_RAD.h \
    lepton_sdk/Inc/LEPTON_SDK.h \
    lepton_sdk/Inc/LEPTON_SDKConfig.h \
    lepton_sdk/Inc/LEPTON_SYS.h \
    lepton_sdk/Inc/LEPTON_Types.h \
    lepton_sdk/Inc/LEPTON_VID.h \
    lepton_sdk/Inc/crc16.h \
    lepton_sdk/Inc/uvc_sdk.h \
    inc/leptonvariation_types.h \
    inc/dataformatter.h \
    inc/rangeprovider.h \
    inc/bosonvariation.h \
    #boson_sdk/Client_API.h \
    #boson_sdk/Client_Dispatcher.h \
    #boson_sdk/Client_Packager.h \
    #boson_sdk/EnumTypes.h \
    #boson_sdk/FunctionCodes.h \
    #boson_sdk/ReturnCodes.h \
    #boson_sdk/Serializer_BuiltIn.h \
    #boson_sdk/Serializer_Struct.h \
    #boson_sdk/UART_Connector.h \
    #boson_sdk/flirChannels.h \
    #boson_sdk/flirCRC.h \
    inc/bosonvariation_types.h \
    src/agthread.h \
    src/agtimer.h \
    inc/ag_aux_funcs.h \
    inc/convenientserial.h \
    inc/serial.h \
    inc/bytes.h \
    inc/pin_map.h \
    boson_sdk_cpp/ClientFiles_C/Client_API.h \
    boson_sdk_cpp/ClientFiles_C/Client_Dispatcher.h \
    boson_sdk_cpp/ClientFiles_C/Client_Packager.h \
    boson_sdk_cpp/ClientFiles_C/EnumTypes.h \
    boson_sdk_cpp/ClientFiles_C/FunctionCodes.h \
    boson_sdk_cpp/ClientFiles_C/ReturnCodes.h \
    boson_sdk_cpp/ClientFiles_C/Serializer_BuiltIn.h \
    boson_sdk_cpp/ClientFiles_C/Serializer_Struct.h \
    boson_sdk_cpp/ClientFiles_C/UART_Connector.h \
    boson_sdk_cpp/FSLP_Files/src/inc/flirChannels.h \
    boson_sdk_cpp/FSLP_Files/src/inc/flirCRC.h \
    boson_sdk_cpp/FSLP_Files/src/inc/FSLP.h \
    boson_sdk_cpp/FSLP_Files/src/inc/serialPortAdapter.h \
    boson_sdk_cpp/FSLP_Files/src/inc/timeoutLogic.h \
    boson_sdk_cpp/ClientFiles_C/libusb_binary_protocol.h \
    src/videoframetoqimage.h \
    inc/QVideoFrameToQImage.h \
#ifdef OPENCV
    #inc/asmOpenCV.h \
#endif
    src/savevidframesthread.h \
    inc/globalvariables.h \
    inc/globalforclassvariables.h \
    inc/ffmpgegvideorecorder.h \
    inc/videoviewscontroller.h \
    inc/globalflirvariables.h \
    src/callcppfunctionsfromqml.h \
    src/ocvvideocapture.h \
    src/ocvvideoproducer.h

DISTFILES += \
    qml/qtquickcontrols2.conf

PKGCONFIG += libusb-1.0 \
             #x264 \
             opencv


QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libuvc/build/release/ -luvc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libuvc/build/debug/ -luvc
else:macos: LIBS += -L$$PWD/libuvc/build/ -luvc
else:unix: LIBS += -L$$PWD/libuvc/build/ -luvcstatic

#pigpio library compiling options
LIBS +=  -lpigpio -lrt
# -lwiringPi
#-Wall -lX11  -Wextra -Wconversion -Wuninitialized -DRaspberryPi -pedantic

QMAKE_CXXFLAGS += -D__STDC_CONSTANT_MACROS
#LIBS += -pthread
#LIBS += -L/usr/local/lib
#LIBS += -lavdevice
#LIBS += -lavfilter
#LIBS += -lpostproc
##LIBS += -lavformat
##LIBS += -lavcodec
#LIBS += -ldl
#LIBS += -lXfixes
#LIBS += -lXext
#LIBS += -lX11
##LIBS += -lasound
##LIBS += -lSDL
#LIBS += -lx264
##LIBS += -lvpx
#LIBS += -lvorbisenc
#LIBS += -lvorbis
#LIBS += -ltheoraenc
#LIBS += -ltheoradec
#LIBS += -logg
#LIBS += -lopencore-amrwb
#LIBS += -lopencore-amrnb
#LIBS += -lmp3lame
##LIBS += -lfaac
#LIBS += -lz
#LIBS += -lrt
#LIBS += -lswresample
#LIBS += -lswscale
#LIBS += -lavutil
#LIBS += -lm


INCLUDEPATH += $$PWD/lepton_sdk/Inc \
               $$PWD/libuvc/build/include \
               $$PWD/libuvc/include \
               $$PWD/inc
DEPENDPATH += $$PWD/libuvc/build/include \
              $$PWD/libuvc/include

MacBuild {
    QMAKE_INFO_PLIST    = Custom-Info.plist
    ICON                = $${BASEDIR}/icons/macos.icns
    OTHER_FILES        += Custom-Info.plist
equals(QT_MAJOR_VERSION, 5) | greaterThan(QT_MINOR_VERSION, 5) {
    LIBS               += -framework ApplicationServices
}
    # This is required to fixup homebrew libusb-1.0 installation
    # the pkgconfig file for this doesn't include cxxflags, so we need to pick this up
    INCLUDEPATH += /usr/local/include \
                   #/home/pi/installation/OpenCV-master/include
}

# post-link configuration
include(setup.pri)

# installer scripts
include(installer.pri)
