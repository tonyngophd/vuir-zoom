extern "C++"{
    #include <QMetaObject>
    #include <QVariant>
    #include <QString>
    #include "globalforclassvariables.h"
}
#include "ag_aux_funcs.h"
#include "globalvariables.h"
#include "globalflirvariables.h"
//#define DEBUGPRINT_AGMESSAGE

//uint8_t *Msg;
//uint16_t MsgLength, PayloadLength;
FLR_COLORLUT_ID_E Palette(FLR_COLORLUT_DEFAULT);
FLR_SCALER_ZOOM_PARAMS_T ZoomParams;
int32_t ColorLutSetControl;
#define MaxGPSMessageLength 30
#define MaxMessageLength 25
#define PASSED 1
#define FAILED 0

int Value(1), Value_pre(0);
int PINOUT(0), PINOUT_pre(0);

bool SaveAPicture = false;
bool RecordVideo = false;
bool StopVideoRecording = false;
void FolderTasks(uint16_t BosonResolution0);
char sub_folder_name[50] = "";
int Cams_Value_Limit[6] = {50, 100, 100, 100, 100, 100}; //{25, 50, 75, 100}
int Cams_DigiZoom_Limit[6] = {49/2, 49, 49, 49, 49, 49}; //{MaxZoom/2, MaxZoom/2, MaxZoom/2, MaxZoom}
int Video_View_Matrix[6] = {0, 1, 2, 3, 4, 5};
int fdI2C = -1;

void CalBatteryPercentage(float& battPercentage, int BattVoltageX10);
//https://www.arduino.cc/reference/en/language/functions/math/map/
long nummap(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

inline int16_t intValue(uint8_t Hibyte, uint8_t Lobyte)
{
  return (int16_t)(((Hibyte) & 0xFF) << 8 | (Lobyte) & 0xFF);
}

void Cycle_Video_Views(int newMainViewNumber){
    int temp;
    temp = Video_View_Matrix[newMainViewNumber];
    for(int i = newMainViewNumber; i < NumberOfCameras; i++){
        Video_View_Matrix[i] = i - newMainViewNumber;
    }
    for(int i = 0; i < newMainViewNumber; i++){
        Video_View_Matrix[i] = NumberOfCameras + (i - newMainViewNumber);
    }
    for(int i = 0; i < NumberOfCameras; i++){
        cout << "Video_View_Matrix[" << i << "] = " << Video_View_Matrix[i] << " newMainViewNumber = " << newMainViewNumber << endl;
    }
}

void Cycle_Video_Views(int newMainViewNumber, int nc){
    int temp;
    temp = Video_View_Matrix[newMainViewNumber];
    for(int i = newMainViewNumber; i < nc; i++){
        Video_View_Matrix[i] = i - newMainViewNumber;
    }
    for(int i = 0; i < newMainViewNumber; i++){
        Video_View_Matrix[i] = nc + (i - newMainViewNumber);
    }
}

void print_video_matrix(){
    for(int nc = 1; nc <= 6; nc++){
        printf("Test No of Cams = %d\n", nc);
        for(int mv = 0; mv < nc; mv++){
            printf("mv = %d                 ", mv);
            Cycle_Video_Views(mv, nc);
            for(int i = 0; i < nc; i++){
                printf("%d ", Video_View_Matrix[i]);
            }
            printf("\n");
        }
    }
}

void find_Main_View_Number_and_Calculate_its_digiZoom(int Value, int *mv){
    for(int i = 0; i < NumberOfCameras; i++){
        if(Value < Cams_Value_Limit[i]){
            *mv = i;
            ZoomParams.zoom = nummap(Value, (i==0)?0:Cams_Value_Limit[i-1], Cams_Value_Limit[i], 0, Cams_DigiZoom_Limit[i]);
            break; // break is needed because we just need to find the first Cams_Value_Limit[i] that is larger than Value
            // because Cams_Value_Limit[NumberOfCameras - 1] is guaranteed to be 100, which is the max of Value, so there is always an *mv to be updated
        }
    }
}

void qml_Swapviews(){
    Cycle_Video_Views(mainViewNo);
    QVariant viewNo[6];
    for(int i = 0; i < NumberOfCameras; i++){
        viewNo[i] = Video_View_Matrix[i];
    }
    QVariant returnedMsg;
    QMetaObject::invokeMethod(mainUIObject,
                              "setViews_From_Numbers",
                              Qt::BlockingQueuedConnection,
                              Q_RETURN_ARG(QVariant, returnedMsg),
                              Q_ARG(QVariant, viewNo[0]),
                              Q_ARG(QVariant, viewNo[1]),
                              Q_ARG(QVariant, viewNo[2]),
                              Q_ARG(QVariant, viewNo[3]),
                              Q_ARG(QVariant, viewNo[4]),
                              Q_ARG(QVariant, viewNo[5]));
    if(returnedMsg.toString().localeAwareCompare("OK") == 0){
        needToSwapViews = false;
    } else {
        needToSwapViews = true;
    }
    qDebug() << "After invokeMethod, qml returns needToSwapViews = " << needToSwapViews;
}

void readG2AMessage(int& readstatus, int& signalValueout, int& PINOUT, uint8_t *message)
{
  int16_t c;
  uint8_t checksum_cal;
  int i, messagelength, totallength, signalValue;
  long sum;

  messagelength = intValue(message[1], message[2]);

  totallength =  messagelength + 3;
  if ((totallength > MaxGPSMessageLength) || (totallength < 4))
  {
    //Wrong reading, not good to proceed further
    readstatus = FAILED;
    return;
  }
  else if (totallength >= 4)
  {
    sum = 0;
    for (i = 3; i <= totallength - 2; i++)
    {
      sum += message[i];
    }
    #ifdef DEBUGPRINT_AGMESSAGE
    for (i = 0; i <= totallength; i++)
    {
      printf("0x%02hhx ", message[i]);
    }
    printf("\n");
    #endif

    checksum_cal = 0xFF - (sum & 0xFF);
    uint8_t checksum_read = message[totallength - 1] + message[totallength];
    if ((checksum_cal == checksum_read) && (message[0] == 0x7E))
    {
      //printf("0x%02hhx ", message[3]);
      if (message[3] == 0x01)
      {
        signalValue = message[totallength - 3] + message[totallength - 2];//intValue(message[totallength - 3], message[totallength - 2]);
        if (abs(signalValue) > 250)
        {
          readstatus = FAILED;
          return;
        }
        #ifdef DEBUGPRINT_AGMESSAGE
        printf("Signal Value = %d message[totallength - 3] = %d message[totallength - 2] = %d\n", signalValue, message[totallength - 3], message[totallength - 2]);
        #endif
        readstatus = PASSED;
        signalValueout = signalValue;
        PINOUT = message[totallength - 4];
      }
      else if (message[3] == 0x02)
      {
        /*byteToINT_32(message + 4, &(MAV_GPS.lat));
          byteToINT_32(message + 8, &(MAV_GPS.lon));
          byteToINT_32(message + 12, &(MAV_GPS.alt));
          byteToINT_32(message + 16, &(MAV_GPS.relative_alt));
          byteToINT_16(message + 20, &(MAV_GPS.vx));
          byteToINT_16(message + 22, &(MAV_GPS.vy));
          byteToINT_16(message + 24, &(MAV_GPS.vz));
          byteToUINT_16(message + 26, &(MAV_GPS.hdg));
          PINOUT = message[28];
          readstatus = PASSED;
          signalValueout = totallength;
          HIL_GPS.lat = MAV_GPS.lat;
          HIL_GPS.lon = MAV_GPS.lon;
          HIL_GPS.alt = MAV_GPS.alt;
          HIL_GPS.eph = MAV_GPS.lat % 1000; // record the 4th, 5th, 6th and 7th decimal places of Latitude
          HIL_GPS.epv = MAV_GPS.lon % 1000; // record the 4th, 5th, 6th and 7th decimal places of Longitude*/
      }
      else if (message[3] == 0x03)
      {
        /*byteToUINT_32(message + 4, &UNIX_TIME);
          PINOUT = message[8];
          readstatus = PASSED;
          signalValueout = totallength;
          //printf("UNIX Time = %d\n", UNIX_TIME);*/
      }
    }
    else
    {
      readstatus = FAILED;
    }
  }
}

void AG_message_actions(uint8_t *message, uint16_t BosonResolution[2], uint32_t MaxZoom)
{
  static int16_t gain(0);
  static int16_t doFFC(0);
  int Valueout;
  int readstatus = FAILED;
  int16_t Valueout2;
  static int yy = -1, MM = -1, dd = -1, HH = -1, mm = -1, ss = -1;
  static int mainViewNumber_pre = 0, mainViewNumber = 0;

  //read_rt_data();
  //CheckVoltage();
  //HD_msg_send(palette);

  readG2AMessage(readstatus, Value, PINOUT, message);

  if ((readstatus == PASSED))// && (Value != Value_pre))
  {
    switch (PINOUT)
    {
      /*case GIMMODE_CHANNEL:
        break;*/
      case TILT_CHANNEL:
        Valueout2 = nummap(Value, 0, 250, TiltMinMicroSecs, TiltMaxMicroSecs); //Microseconds
        //printf("Value = %d, Valueout2 = %d\n", Value, Valueout2);
        gpioServo(TILT_SERVO_PIN, Valueout2);
        break;

      case PAN_CHANNEL:
        Valueout = nummap(Value, 0, 100, PanMinMicroSecs, PanMaxMicroSecs);
        //printf("Value = %d, Valueout = %d\n", Value, Valueout);
        gpioServo(PAN_SERVO_PIN, Valueout);
        break;

      case PALETTE_CHANNEL:
        {
          Palette = (FLR_COLORLUT_ID_E)Value; //map(Value / 5, 0, 20, FLR_COLORLUT_DEFAULT, FLR_COLORLUT_ID_END);
          if (Palette < FLR_COLORLUT_DEFAULT) Palette = FLR_COLORLUT_DEFAULT;
          if (Palette > FLR_COLORLUT_ID_END) Palette = FLR_COLORLUT_ID_END;
          colorLutSetId(Palette);
        }
        break;

      case FFC_CHANNEL:
        if (Value) bosonRunFFC();
        else {
            gpioTerminate();
            system("sh /home/pi/relaunch_vuir.sh");
            //system("rm -f relaunch_vuir.sh &&  cp /home/pi/relaunch_vuir.sh . && sh relaunch_vuir.sh&");
            //system("sh /home/pi/repeat_vuir.sh");
            exit(EXIT_SUCCESS);
        }
        break;

      case ZOOM_CHANNEL:
        {
            ZoomParams.xCenter = BosonResolution[0] / 2;
            ZoomParams.yCenter = BosonResolution[1] / 2;
            mainViewNumber_pre = mainViewNumber;

            find_Main_View_Number_and_Calculate_its_digiZoom(Value, &mainViewNumber);

            globalVideoViewOrderNo = mainViewNumber;
            scalerSetZoom(ZoomParams);
            Cycle_Video_Views(mainViewNumber);

            if(mainViewNumber != mainViewNumber_pre && typeOfGimmera < 10){
                ocv_streaming[mainViewNumber] = 1;                
                /*if(mainViewNumber == 0) {ocv_streaming[1] = 1; ocv_streaming[2] = 0; ocv_streaming[3] = 0;}
                else if(mainViewNumber == 1) {ocv_streaming[2] = 1; ocv_streaming[3] = 0; ocv_streaming[0] = 0;}
                else if(mainViewNumber == 2) {ocv_streaming[3] = 1; ocv_streaming[0] = 0; ocv_streaming[1] = 0;}
                else if(mainViewNumber == 3) {ocv_streaming[0] = 1; ocv_streaming[1] = 0; ocv_streaming[2] = 0;}*/
                colorLutSetId(Palette);//To unify the palettes
                //usleep(150000); // abit of delay to set palette to the main-view-to-be before displaying it to ease the eyes: QML is faster than boson itself
                needToSwapViews = true;
                mainViewNo = mainViewNumber;
                qml_Swapviews();
            }
        }
        break;

      case THERMAL_GAINMODE_CHANNEL:
        gain = (int)(0.5 * Value) % 5;
        if (gain > FLR_BOSON_MANUAL_GAIN) gain = FLR_BOSON_MANUAL_GAIN;
        bosonSetGainMode(e_FLR_BOSON_GAINMODE_E(gain));
        break;

      case REC_CHANNEL:
        if(!strcmp(sub_folder_name, "")){
            FolderTasks(BosonResolution[0]);
        }
        SaveAPicture = true;
        //cout << "in ag_aux_funcs SaveAPiture = " << SaveAPicture << endl;
        break;
      case PI_REC_CHANNEL:        
        if(!strcmp(sub_folder_name, "")){
            FolderTasks(BosonResolution[0]);
        }
        RecordVideo = !RecordVideo;//(Value != 0);
        StopVideoRecording = !RecordVideo;
        //cout << "in ag_aux_funcs StartRecordVideo = " << RecordVideo << "Value = " << Value << endl;
        //cout << "sub_folder_name =" << sub_folder_name << endl;
        break;

      case SELECT_CAM_CHANNEL:
        mainViewNumber_pre = mainViewNumber;

        //find_Main_View_Number_and_Calculate_its_digiZoom(Value, &mainViewNumber);

        mainViewNumber = (Value + mainViewNumber_pre) % NumberOfCameras;
        globalVideoViewOrderNo = mainViewNumber;
        qDebug() << "mainViewNumber = " << mainViewNumber;
        //scalerSetZoom(ZoomParams);
        Cycle_Video_Views(mainViewNumber);
        if(typeOfGimmera < 10){
            ocv_streaming[mainViewNumber] = 1;
            /*if(mainViewNumber == 0) {ocv_streaming[1] = 1; ocv_streaming[2] = 0; ocv_streaming[3] = 0;}
            else if(mainViewNumber == 1) {ocv_streaming[2] = 1; ocv_streaming[3] = 0; ocv_streaming[0] = 0;}
            else if(mainViewNumber == 2) {ocv_streaming[3] = 1; ocv_streaming[0] = 0; ocv_streaming[1] = 0;}
            else if(mainViewNumber == 3) {ocv_streaming[0] = 1; ocv_streaming[1] = 0; ocv_streaming[2] = 0;}*/
            colorLutSetId(Palette);//To unify the palettes
            //usleep(150000); // abit of delay to set palette to the main-view-to-be before displaying it to ease the eyes: QML is faster than boson itself
            needToSwapViews = true;
            mainViewNo = mainViewNumber;
            qml_Swapviews();
        }
        break;

      case YEAR_CHANNEL:
        yy = Value + 2000;
        break;
      case MONTH_CHANNEL:
        MM = Value;
        break;
      case DATE_CHANNEL:
        dd = Value;
        break;
      case HOUR_CHANNEL:
        HH = Value;
        break;
      case MINUTE_CHANNEL:
        mm = Value;
        break;
      case SECOND_CHANNEL:
        ss = Value;
        //printf("yy = %d, MM = %d, dd = %d, HH = %d, mm = %d, ss = %d\n", yy, MM, dd, HH, mm, ss);
        if((HH >= 0) && (mm >= 0) && (ss >= 0)){
            char date_string[200];
            if((yy > 0) && (MM > 0) && (dd > 0)){
                sprintf(date_string, "sudo date -s \"%02d/%02d/%d %02d:%02d:%02d\"", MM, dd, yy, HH, mm, ss);
            } else {
                sprintf(date_string, "sudo date -s \"%02d:%02d:%02d\"", HH, mm, ss);
            }
            printf(date_string);
            fflush(stdout);
            system(date_string);
        }
        if(!strcmp(sub_folder_name, "")){
            FolderTasks(BosonResolution[0]);
        }
        break;
      case BATTERY_MESSAGE_CHANNEL:
        //VG = GimmeraBatteryVoltage();
        //sendmessage(VG, BATTERY_MESSAGE_CHANNEL);
        break;
      case IR2D_CHANNEL:
        break;
    }
  }
}

void HD_msg_send(int AG_serial, int BosonResolution0)
{
    static uint32_t	HBMillis = millis(), VolMillis = millis();
    static uint32_t	SatMillis = millis(), PalMillis = millis();
    uint8_t msg[25];
    char msg_name[25], msg_vol[25], msg_sats[25], msg_pal[25], msg_cpu[25];
    if (millis() - HBMillis > 1000)
    {
        HBMillis = millis();
        static uint32_t i = 0;
        //sprintf(msg_name, "CAM%dBoP%d\n", BosonResolution0, i++);
        sprintf(msg_name, "CAM%dBPM%d\n", BosonResolution0, i++);
        memcpy(msg, msg_name, strlen(msg_name) + 1);
        Send_Serial_package(AG_serial, msg, strlen(msg_name) + 1);
        //"Heartbeat#" only needed for Vue Pro or a camera not Boson
        /*sprintf(msg_name, "Heartbeat#%d\n", i);
        memcpy(msg, msg_name, strlen(msg_name) + 1);
        Send_Serial_package(AG_serial, msg, strlen(msg_name) + 1);	*/
    }
    if (millis() - SatMillis > 2500){
        SatMillis = millis();
        uint32_t sats = 0;
        sprintf(msg_sats,"SAT%d\n",sats);
        //printf("%s", msg_sats);
        memcpy(msg, msg_sats, strlen(msg_sats) + 1);
        Send_Serial_package(AG_serial, msg, strlen(msg_sats) + 1);
        usleep(10000);
        sprintf(msg_pal, "PAL%d\n", Palette);
        //printf("%s", msg_pal);
        memcpy(msg, msg_pal, strlen(msg_pal) + 1);
        Send_Serial_package(AG_serial, msg, strlen(msg_pal) + 1);
        usleep(10000);

        int cpu_temp;
        FILE *fp = popen("vcgencmd measure_temp", "r");
        if(fp == NULL) return;
        fscanf(fp, "temp=%d'C", &cpu_temp);
        //printf("CPU temp = %d\n", cpu_temp);
        fclose(fp);
        sprintf(msg_cpu, "CPT%d\n", cpu_temp);
        memcpy(msg, msg_cpu, strlen(msg_cpu) + 1);
        Send_Serial_package(AG_serial, msg, strlen(msg_cpu) + 1);
        usleep(10000);

        /*fp = popen("uptime -p", "r"); //int YY, MM, DD, hh, mm, ss;
        int mm;
        fscanf(fp, "up %d", &mm); //printf("uptime = %d minutes\n", mm);
        fclose(fp);        
        int Total_run_time = 40; // minutes //Todo adjust this number (40 minutes) according to real data
        battPercentage = (Total_run_time - mm)*100.0/Total_run_time;*/
        if(fdI2C < 0){
            setupI2C();
        }
        if(fdI2C >= 0){
            i2cWriteByte(fdI2C, 0x01); // request a voltage reading from the arduino board
            usleep(100);
            int bt = i2cReadByte(fdI2C);
            //printf("bt =  %d, bad_handle = %d, read_failed = %d\n", bt, PI_BAD_HANDLE, PI_I2C_READ_FAILED);
            //printf("bt =  %d\n", bt);
            if((bt >= 0) && (bt != 0xff)){
                float battPercentage;
                CalBatteryPercentage(battPercentage, bt);
                sprintf(msg_vol, "VOL%.1f\n", battPercentage);
                //printf("%s", msg_vol);
                memcpy(msg, msg_vol, strlen(msg_vol) + 1);
                Send_Serial_package(AG_serial, msg, strlen(msg_vol) + 1);
            }
        }
    }
}

#define SLAVE_ARDUINO_ADDRESS 0x24 // just a random byte, from 0x03 to 0x7F
void setupI2C(){
    //while(fdI2C < 0){
    fdI2C = i2cOpen(1, SLAVE_ARDUINO_ADDRESS, 0);
    printf("I2C setup HANDLE = %d\n", fdI2C);
    //}
}

float lowestVoltage = 13.5, fullVoltage = 17.1;
float fmap(float x, float in_min, float in_max, float out_min, float out_max){
    double temp = (x - in_min) * (out_max - out_min)/(in_max - in_min) + out_min;
    if(temp < 0.0) temp = 0.0;
    if(temp > 100.0) temp = 100.0;
    return temp;
}

void CalBatteryPercentage(float& battPercentage, int BattVoltageX10){
    battPercentage = fmap(BattVoltageX10/10.0, lowestVoltage, fullVoltage, 0, 100);
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
///https://stackoverflow.com/questions/997946/how-to-get-current-time-and-date-in-c
const string currentDateTime(const char *format) {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    ///https://en.cppreference.com/w/cpp/chrono/c/strftime
    char	   informat[40] = "%Y-%m-%d.%X"; //default format
    if(!strcmp(format, "time")){
        memcpy(informat, "%X", strlen("%X")+1);
    } else if(!strcmp(format, "date")){
        memcpy(informat, "%Y-%m-%d", strlen("%Y-%m-%d")+1);
    } else if(format != NULL){
        memcpy(informat, format, strlen(format)+1);
    }
    /// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    /// for more information about date/time format
    strftime(buf, sizeof(buf), informat, &tstruct);

    return buf;
}

int dirExists(const char *path)
{
    struct stat info;

    if(stat( path, &info ) != 0)
        return 0;
    else if(info.st_mode & S_IFDIR)
        return 1;
    else
        return 0;
}

///https://www.tutorialspoint.com/find-out-the-current-working-directory-in-c-cplusplus
std::string get_current_dir() {
   char buff[FILENAME_MAX]; //create string buffer to hold path
   GetCurrentDir( buff, FILENAME_MAX );
   return string(buff);
}

std::string get_current_dir_slash() {
   char buff[FILENAME_MAX]; //create string buffer to hold path
   GetCurrentDir( buff, FILENAME_MAX );
   return string(buff) + "/";
}


void FolderTasks(uint16_t BosonResolution0){
    char main_folder_name[30] = "/media/pi/VUIR_DATA";  // To store the main folder name
    //char sub_folder_name[30];  // To store the sub folder name
    //mkdir(main_folder_name, 0777); //0700
    printf(WHT "chdir(main_folder_name) result %d\n", chdir(main_folder_name));
    printf(WHT ">>> Folder " YEL "%s" WHT " selected as main folder\n", main_folder_name);
    char format[] = "VuIR%Y%b%d_%H%M";
    //printf("currentDateTime() = %s\n", currentDateTime("date").c_str());
    ///https://stackoverflow.com/questions/5322216/how-to-print-a-string-in-c
    ///https://en.cppreference.com/w/cpp/chrono/c/strftime
    ///https://raspberrypi.stackexchange.com/questions/754/how-can-i-detect-that-im-compiling-for-raspberry-pi
    #ifdef __arm__ //for Raspberry Pi. Strangely, it's neither __linux__ nor __unix__
    //Find and delete empty folders with pattern: VuIR20*_* that were created previously. For example: VuIR2020May23_0452
    cout << "Deleting empty folders to make it clean...\n";
    system("echo `find . -type d -empty -name 'VuIR20*_*'`");
    system("rmdir `find . -type d -empty -name 'VuIR20*_*'`");
    #endif

    strcpy(sub_folder_name, currentDateTime(format).c_str());
    //cout << "(std::string(main_folder_name) != get_current_dir_slash()) = " << (std::string(main_folder_name) != get_current_dir_slash()) << endl;
    /*if(std::string(main_folder_name) != get_current_dir_slash()){
        chdir(main_folder_name);
    }
    if(!dirExists(sub_folder_name)){
        mkdir(sub_folder_name, 0777);
    }*/
    printf(WHT ">>> Creating " YEL "%s" WHT " sub_folder\n", sub_folder_name);
    mkdir(sub_folder_name, 0777); //0700
    //chdir(sub_folder_name);
    //chdir("/home/pi/qt_projects/VuIRZoom/VuIRZoom/build");
    chdir("/home/pi/vuir31");
    printf(WHT ">>> Folder " YEL "%s" WHT " selected to record files\n", sub_folder_name);
    system("pwd");
    fflush(stdout);
}
