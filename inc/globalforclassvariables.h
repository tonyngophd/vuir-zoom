#ifndef GLOBALFORCLASSVARIABLES_H
#define GLOBALFORCLASSVARIABLES_H

#include <QImage>
#include <QMediaRecorder>
#include <QCamera>
#include <QVideoEncoderSettings>
#include <QAbstractVideoSurface>
#include <QMutex>

#define CPP_FFMPEG_RECORD 0
#define QIMAGERECORD 1
//#define QTVIDRECORD


extern QImage frameImage;
extern int uvc_instance;
extern int uvc_start_number[4];
extern int ocv_instance;
extern int ocv_start_number[4];
extern int ocv_streaming[4];
extern QMutex gQmutex;
extern QObject *mainUIObject;
#ifdef QTVIDRECORD
extern QCamera *mCamera;
extern QMediaRecorder *mRecorder;
extern QVideoEncoderSettings mEncoderSettings;
extern QAbstractVideoSurface *mVidSurface;
#endif

#endif // GLOBALFORCLASSVARIABLES_H
