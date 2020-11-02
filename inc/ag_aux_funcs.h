#ifndef AG_AUX_FUNCS_H
#define AG_AUX_FUNCS_H

#define DEBUGPRINT
/*#include "../bosonSDK_dir/FSLP_Files/src/inc/flirCRC.h"
#include "../bosonSDK_dir/ClientFiles_C/Serializer_BuiltIn.h"
#include "../bosonSDK_dir/ClientFiles_C/FunctionCodes.h"
#include "../bosonSDK_dir/ClientFiles_C/EnumTypes.h"
#include "../bosonSDK_dir/ClientFiles_C/ReturnCodes.h"
#include "../bosonSDK_dir/ClientFiles_C/Serializer_Struct.h"*/

//#include "../bosonSDK_dir/ClientFiles_C/Client_API.h"
//#include "boson_sdk/Client_API.h"
#include <math.h>
#include <stdio.h>
#include "convenientserial.h"
#include <chrono>
#include <cstdint>
#include <iostream>
#include <sys/time.h>
#include <pigpio.h> ///http://abyz.me.uk/rpi/pigpio/cif.html#gpioServo
#include "pin_map.h"
#include <string>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "boson_sdk_cpp/ClientFiles_C/Client_API.h"
//#include <wiringPiI2C.h>

#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

using namespace std;
using namespace std::chrono;

#define MINSATS 4

#define GIMMODE_CHANNEL 4
#define TILT_CHANNEL 5
#define PAN_CHANNEL 6
#define FFC_CHANNEL 7
#define ZOOM_CHANNEL 8
#define REC_CHANNEL 9
#define PALETTE_CHANNEL 10
#define IR2D_CHANNEL 11
#define BATTERY_MESSAGE_CHANNEL 12
#define GPS_MESSAGE_CHANNEL 13
#define SDCARD_MESSAGE_CHANNEL 14
#define MAVLINK_CHANNEL 15
#define DVR_PREVIOUS_CHANNEL 16
#define DVR_NEXT_CHANNEL 17
#define DVR_REVIEW_CHANNEL 18
#define DVR_MENU_CHANNEL 19
#define DVR_ENTER_CHANNEL 20
#define TAU_SNAPSHOT_CHANNEL 21
#define SPOTMETER_ON_OFF_MODE_CHANNEL 22
#define SPOTMETER_DISPLAY_MODE_CHANNEL 23
#define RESET_INTRO_CHANNEL 24
#define ISOTHERM_ON_OFF_CHANNEL 25
#define ISOTHERM_MODE_CHANNEL 26
#define ISOLOWER_CHANNEL 27
#define ISOMID_CHANNEL 28
#define ISOUPPER_CHANNEL 29
#define ISO4TH_CHANNEL 30
#define THERMAL_GAINMODE_CHANNEL 31
#define IMAGE_FLIP_CHANNEL 32
#define DIGITILT_CHANNEL 33
#define DIGIPAN_CHANNEL 34
#define ALERT_HOTSPOT_CHANNEL 35
#define ALERT_LOWER_LIMIT_CHANNEL 36
#define ALERT_UPPER_LIMIT_CHANNEL 37
#define DDE_CHANNEL 38
#define ACE_CHANNEL 39
#define SSO_CHANNEL 40
#define DVR_VIEW_CHANNEL 41
#define INTRO_INFO_CHANNEL 42
#define VIDEO_SOURCE_CHANNEL 43
#define HD_CAM_ONOFF_CHANNEL 44
#define HD_CAM_WIFI_ONOFF_CHANNEL 45
#define HD_CAM_SWITCH_MODE_CHANNEL 46
#define HD_CAM_SHUTTER_CHANNEL 47
#define PI_REC_CHANNEL 55
#define YEAR_CHANNEL 95
#define MONTH_CHANNEL 96
#define DATE_CHANNEL 97
#define HOUR_CHANNEL 98
#define MINUTE_CHANNEL 99
#define SECOND_CHANNEL 100
#define SELECT_CAM_CHANNEL 101
#define ALL_CAMS_ATONCE_CHANNEL 102
#define GIM_VIDQUAL_CHANNEL 103

#define RECBUTTON_ID 100
#define RECTEXT_ID (RECBUTTON_ID + 1)
#define WELCOMTEXT_ID 112
#define INSTRUCTTEXT_ID 113
#define INSTRUCTTEXT_BG_ID 114
#define sUASLOGO_ID 115
#define STATUSTEXT_BG_ID 99

#define WHEEL_GROUP 13
#define BUTTON_GROUP 14
#define INTRO_GROUP 15
#define TILTTEXT_GROUP 16
#define PALTEXT_GROUP 17
#define ZOOMTEXT_GROUP 18
#define GAINTEXT_GROUP 19 // MAX is 19

#define UY (512 - 55)//(512-40) //34 //(22 + 10)
#define UX 0//100
#define UX2 (UX + 76) //76

#define ServoMIN 44
#define ServoMAX 144
#define TiltMin 52
#define TiltMax 120
#define TiltNeutral 95
#define PanMin 46
#define PanMax 146
#define PanMinMicroSecs 1100//1200
#define PanMaxMicroSecs 1950//1800
#define TiltMinMicroSecs 1100
#define TiltMaxMicroSecs 1950// 1600
#define PanNeutral 97
#define TILT_IN_MIN RCMIN //1000
#define TILT_IN_MAX RCMAX //1600
#define TIME_OF_AUTOMATIC_PAN 2000

void AG_message_actions(uint8_t *message, uint16_t BosonResolution[2], uint32_t MaxZoom);
void HD_msg_send(int AG_serial, int BosonResolution0);
const string currentDateTime(const char format[]);
int dirExists(const char *path);
std::string get_current_dir();
std::string get_current_dir_slash();
void Cycle_Video_Views(int newMainViewNumber);
void print_video_matrix();
void setupI2C();

extern FLR_COLORLUT_ID_E Palette;
extern int Cams_Value_Limit[6];
extern int Cams_DigiZoom_Limit[6];
extern int fdI2C;


#endif // AG_AUX_FUNCS_H
