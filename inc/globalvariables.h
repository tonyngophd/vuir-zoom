#ifndef GLOBALVARIABLES_H
#define GLOBALVARIABLES_H

#include <cstdint>

extern bool frameImageReady;
extern bool frameImageSaved;
extern int frameImageNumber;
extern char frameImageFileName[100];
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

#endif // GLOBALVARIABLES_H
