#include "agthread.h"
#include "globalvariables.h"
#include "inc/globalflirvariables.h"

int NumberOfCameras = 0;
char Boson_SN[4][6];
uint32_t cameraSN[4];

void Set_Zoom_Limits(){
    for(int i = 0; i < NumberOfCameras; i++){
        Cams_Value_Limit[i] = (i+1) * 100.0/NumberOfCameras;
        Cams_DigiZoom_Limit[i] = (i+1) * 49.0/NumberOfCameras;
        qDebug() <<"i = " << i << " Cams_Value_Limit = " << Cams_Value_Limit[i] << " Cams_DigiZoom_Limit = " << Cams_DigiZoom_Limit[i];
    }
}
void Sort_Cameras_Per_FOV_And_Assign_SNs_To_UVCs(uint32_t SN[4], int FOV[4], bool isDescending){
    int tempFOV = 0;
    uint32_t tempSN = 0;
    int tempPortNum = 0;
    for(int i = 0; i < NumberOfCameras; i++){
        for(int j = i + 1; j < NumberOfCameras; j++){
            if(((FOV[i] < FOV[j]) && isDescending) || ((FOV[i] > FOV[j]) && !isDescending)){
                tempFOV = FOV[j];
                FOV[j] = FOV[i];
                FOV[i] = tempFOV;

                tempSN = SN[j];
                SN[j] = SN[i];
                SN[i] = tempSN;

                tempPortNum = FOV_sorted_ttyACM_num[j];
                FOV_sorted_ttyACM_num[j] = FOV_sorted_ttyACM_num[i];
                FOV_sorted_ttyACM_num[i] = tempPortNum;
            }
        }
    }
    for(int i = 0; i < NumberOfCameras; i++){
        sprintf(Boson_SN[i], "%d", SN[i]);
        printf("Camera SN = %d, Boson_SN[%d] = %s\n", SN[i], i, Boson_SN[i]);
    }
}


AGThread::AGThread(QString s, QMutex* mu, int* sharedSerialPortNum, int *sharedBosonRes0)
    : name(s)
    , mutex(mu)
    , serialPortNum(sharedSerialPortNum)
    , bosonRes0(sharedBosonRes0)
{
}

void AGThread::run()
{
    //char device[] = "/dev/ttyAMA1";//"/dev/serial0";
    char device[] = "/dev/serial0";
    int baudrate = 57600;
    int AG_serial = -1;
    unsigned char   ags_stuffed_message[1544] = "";   // Max package with bit stuffing 1544
    unsigned short  ags_stuffed_frame_len   = 0 ;    // To storage real size of package
    uint16_t BosonResolution[2] = {320, 256};
    uint32_t max_zoom = 49;
    int camera_FOV[4];
    int n = sizeof(camera_FOV)/sizeof(camera_FOV[0]);
    FLR_BOSON_PARTNUMBER_T cameraPN;

    if(QString::compare(this->name, "fromGround", Qt::CaseSensitive) == 0){
        //print_video_matrix();
        int tempNoOfCams = 0;
        while(tempNoOfCams == 0){
            for(int i = 0; i < 4; i++){
                globalVideoViewOrderNo = i;//
                int init_result = Initialize(i, 921600);
                Close_Port_Before_FOV_Sort(i); //Weird bug somewhere forces this close and reopen for it to work
                init_result = Initialize(i, 921600);
                /*std::array<int, 5> a {1, 2, 3, 4, 5};
                for(int & x: a){
                    if((init_result != 0) && (init_result != 4)){
                        init_result = Initialize(i, 921600);
                        //Terminal: ls /dev/serial/by-id/\*
                        printf(YEL "Trying to Initialize(FOV_sorted_ttyACM_num[%d], 921600) = %d\n" WHT, i, init_result);
                    } else {
                        break;
                    }
                }*/
                printf(YEL "Done: Initialize(FOV_sorted_ttyACM_num[%d], 921600) = %d\n" WHT, i, init_result);
                if( (init_result == 0) || (init_result == 4) ){
                    tempNoOfCams = i+1;
                } else {
                    printf(GRN "Found %d bosons with the following serial numbers\n" WHT, tempNoOfCams);
                    break;
                }

                for(int t = 0; t < 3; t++) //Try reading camera part number at MOST 3 times to reduce error, most of the times, it needs just 1 try
                {
                    bosonGetCameraSN(&cameraSN[i]);
                    printf("Camera SN = %d\n", cameraSN[i]);
                    bosonGetCameraPN(&cameraPN);
                    printf("Camera PN = ");
                    for(int j = 0; j < 20; j++)
                        printf("%c", (char)cameraPN.value[j]);
                    BosonResolution[0] = 100*(cameraPN.value[2] - 48) + 10*(cameraPN.value[3] - 48) + (cameraPN.value[4] - 48);
                    if((BosonResolution[0] == 320) || (BosonResolution[0] = 640)){
                        if(BosonResolution[0] == 320) BosonResolution[1] = 256;
                        else BosonResolution[1] = 512;
                        break;
                    }
                }
                if(cameraSN[i] == 0) {
                    Close_Port_Before_FOV_Sort(i);
                    NumberOfCameras = -1;
                    return;
                    //system("sh /home/pi/relaunch_vuir.sh");
                    //system("rm -f relaunch_vuir.sh &&  cp /home/pi/relaunch_vuir.sh . && sh relaunch_vuir.sh&");
                    //system("sh /home/pi/repeat_vuir.sh");
                    //exit(EXIT_FAILURE);
                }

                if(BosonResolution[0] != 320 && BosonResolution[0] != 640) BosonResolution[0] = 320; // Use default value of 320 if error still exists after 5 tries
                if(scalerGetMaxZoom(&max_zoom) != FLR_OK) max_zoom = 49;
                printf("\nBoson %dx%d, max zoom = %d\n", BosonResolution[0], BosonResolution[1], max_zoom);
                camera_FOV[i] = 10*(cameraPN.value[7] - 48) + (cameraPN.value[8] - 48);
                tfSetEnableState(FLR_ENABLE);
                usleep(1000);
                spnrSetEnableState(FLR_ENABLE);
                usleep(10000);
            }
            usleep(10000);
        }
        NumberOfCameras = tempNoOfCams;
        globalVideoViewOrderNo = 0; //reset this so we can interact with the boson in the main view
        Sort_Cameras_Per_FOV_And_Assign_SNs_To_UVCs(cameraSN, camera_FOV, true);
        Set_Zoom_Limits();
        //true means Descending, like 95 degress, 50degrees, 24 degress and so on; false means ascending

        mutex->lock();
        *bosonRes0 = BosonResolution[0];

        //colorLutSetId(FLR_COLORLUT_4);
        //gaoSetAveragerState(FLR_ENABLE);
        qDebug() << this->name << "running Receive_Serial_package";
        sleep(2);
        //qDebug() << "enabling gao smart averager to reduce frame rate from 60hz to 30hz, result = " << gaoSetAveragerState(FLR_ENABLE);
        usleep(50000);
        FLR_ENABLE_E gaoavg = FLR_ENABLE_END;
        qDebug() << "gaoGetAveragerState(&gaoavg); = " << gaoGetAveragerState(&gaoavg);
        qDebug() << "Actual averager State = " << gaoavg;
        printf(RED "ACTUAL AVERAGER STATE = %d\n" WHT, gaoavg);
        FLR_COLORLUT_ID_E colorid = FLR_COLORLUT_0;
        //colorLutSetId(FLR_COLORLUT_0);
        colorLutGetId(&colorid);
        printf(GRN "ACTUAL COLOR ID = %d\n" WHT, colorid);
        Palette = colorid;
        //mutex->lock();
        while(AG_serial < 0){
            printf("Opening %s serial...\n", device);
            fflush(stdout);
            AG_serial = openSerial (device, baudrate);
            printf("AG_serial = %d\n", AG_serial);
        }
        printf("%s serial connected with %d bytes waiting\n", device, rxbyte_waiting(AG_serial));
        fflush(stdout);
        usleep(100);
        *serialPortNum = AG_serial;
        mutex->unlock();
        if (gpioInitialise() < 0){
            printf(RED "gpioInitialise() could not start" WHT "\n");
            return;
        } else {
            printf (YEL "gpioInitialise started successfully!" WHT " gpioVersion = %d\n", gpioVersion());
        }

        //gpioSetMode(TILT_SERVO_PIN, PI_OUTPUT); // No need this if pin is used as a servo pin
        //gpioServo(TILT_SERVO_PIN, 1500); // Value range is from 900 to 2100 (microseconds)
        while(true){
            usleep(100);
            //if(Receive_Serial_package(AG_serial, ags_stuffed_message, &ags_stuffed_frame_len) == NoError){
            if(Receive_Serial_package_lossless(AG_serial, ags_stuffed_message, &ags_stuffed_frame_len) == NoError){
                //printf("Initialize result = %d\n", Initialize(FOV_sorted_ttyACM_num[0], 921600)); // 0 is in /dev/ttyACM0, if 1, it will be /dev/ttyACM1, 13 -> /dev/ttyACM13
                AG_message_actions(ags_stuffed_message, BosonResolution, max_zoom);
            }
        }
    } else if(QString::compare(this->name, "toGround", Qt::CaseSensitive) == 0){
        qDebug() << this->name << "running HD_msg_send";
        while(*serialPortNum < 0){
            usleep(500000);
            qDebug() << "*serialPortNum = " << *serialPortNum << " and sending to ground";
        }
        AG_serial = *serialPortNum;
        BosonResolution[0] = *bosonRes0;
        while(true){
            usleep(500000);
            if(AG_serial < 0) continue;
            //else qDebug() << "AG_serial = " << AG_serial << " and sending to ground";
            //qDebug() << "Boson resolution in toground = " << BosonResolution[0];
            HD_msg_send(AG_serial, BosonResolution[0]);
        }
    }

    /*for(int i = 0; i <= 1000; i++){
        qDebug() << this->name << " " << i;
    }*/

    /*
    int i = 0;
    while(true){
        qDebug() << this->name << " " << i++;
        sleep(1);
    }
    */
}
