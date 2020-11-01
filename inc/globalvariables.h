#ifndef GLOBALVARIABLES_H
#define GLOBALVARIABLES_H

#include <cstdint>

extern bool frameImageReady[4];
extern bool frameImageSaved[4];
extern bool frameRecording;
extern bool SaveAPicture;
extern bool RecordVideo;
extern bool StopVideoRecording;
extern bool needToFFMPEG;
extern char sub_folder_name[50];
extern int mainViewNo;
extern bool needToSwapViews;
extern int NumberOfCameras;
extern char Boson_SN[4][6];
extern uint32_t cameraSN[4];
extern int Video_View_Matrix[6];
extern int video_save_quality;

//1: normal one boson, 2: normal two bosons not same FOVs,
//3: normal 3 bosons not same FOVs, 4: normal 4 boson not same FOVs: Mainly for optical zoom
//21: 2 bosons with same FOVs, 41: 4 bosons same FOVs, 61: 6 bosons same FOVs: for having more pixels (1024x640, 1280x1024, 1920x1024...)
extern int typeOfGimmera;

#endif // GLOBALVARIABLES_H
