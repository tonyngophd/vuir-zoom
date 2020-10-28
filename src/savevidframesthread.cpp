#include "savevidframesthread.h"
#include "globalvariables.h"
#include "globalforclassvariables.h"
#include "ffmpgegvideorecorder.h"
#include "videoviewscontroller.h"
#include <QUrl>

QImage frameImage;
bool frameImageReady = false;
bool frameImageSaved = true;
int frameImageNumber = 0;
char frameImageFileName[100];
bool frameRecording = false;
bool needToFFMPEG = false;
int uvc_instance = 0;
int uvc_start_number[4] = {0, 1, 2, 3};
int ocv_instance = 2;
int ocv_start_number[4] = {0, 1, 2, 3};
int ocv_streaming[4] = {1, 1, 1, 1};
QMutex gQmutex;
int mainViewNo = 0;
bool needToSwapViews = false;

QImage qt_imageFromVideoFrame(const QVideoFrame& f);

SaveVidFramesThread::SaveVidFramesThread()//QImage outImage, int *outfileNo)
    //: image(outImage)
    //, fileNo(outfileNo)
{

}

// Calculate time difference in milliseconds
inline long millis(timeval start, timeval end)
{
    long seconds, useconds;
    seconds  = end.tv_sec  - start.tv_sec;
    useconds = end.tv_usec - start.tv_usec;

    return ((seconds) * 1000 + useconds/1000.0) + 0.5;
}

void SaveVidFramesThread::run()
{
#if CPP_FFMPEG_RECORD
    ffmpeg_init();
#endif
    char filename[100];
    struct timeval now, previous;
    double real_averaged_fps = 0;
    double instant_fps = 0;
    uint16_t counter = 0;
    uint32_t startFrameNo = 0;
    int videoNumber = 0;
    bool tempics_dir_not_created = true;
    gettimeofday(&previous, nullptr);
    //VideoViewsController mVideoViewsController;
    while(true){
        usleep(1000); //1 millisecond so that this thread doesn't check value of RecordVideo 100% of the time, reducing cpu usage
        if(RecordVideo){
            if(tempics_dir_not_created){
                char mkdir_tempics[150];
                sprintf(mkdir_tempics, "mkdir /media/pi/VUIR_DATA/%s/tempics", sub_folder_name);
                system(mkdir_tempics);
                tempics_dir_not_created = false;
            }
#ifdef QTVIDRECORD
            if(mRecorder == nullptr){
                mCamera = new QCamera;
                mCamera->setViewfinder(mVidSurface);
                mRecorder = new QMediaRecorder(mCamera);
                mEncoderSettings = mRecorder->videoSettings();
                mEncoderSettings.setResolution(640,512);
                mEncoderSettings.setQuality(QMultimedia::HighQuality);
                mEncoderSettings.setFrameRate(30.0);
                //mEncoderSettings.setCodec("video/mp4");

                mRecorder->setVideoSettings(mEncoderSettings);
                mRecorder->setContainerFormat("mp4");
                mRecorder->setOutputLocation(QUrl::fromLocalFile("qvideo.mp4"));
                mCamera->setCaptureMode(QCamera::CaptureVideo);
                mCamera->start();
            }
            if(mRecorder->state() == QMediaRecorder::StoppedState){
                mRecorder->record();
                qDebug() << "mRecorder->record();";
                qDebug()<<mRecorder->state();
                qDebug()<<mRecorder->status();
                qDebug()<<mRecorder->error();
            }
#endif
            if(frameImageReady && !frameImageSaved){
                if(frameImageNumber <= startFrameNo){
                    gettimeofday(&now, nullptr);
                    uint32_t real_averaged_fps = 0;
                    uint16_t counter = 0;
                    frameImageNumber = startFrameNo;
                }
#if CPP_FFMPEG_RECORD
                frameImageSaved = true;
                frameImageReady = false;
                ffmpeg_pushFrame(ff_rawFrame);
                frameImageNumber++;
#elif QIMAGERECORD
                sprintf(filename, "/media/pi/VUIR_DATA/%s/tempics/frame_%06d.jpg", sub_folder_name, frameImageNumber++);
                //sprintf(filename, "tempics/frame_%06d.jpg", frameImageNumber++);
                //qDebug() << "Saving " << frameImageNumber;
                //qDebug() << "Saving to file name = " << filename;
                if(!frameImage.isNull())
                {
                    frameImage.save(filename, 0, 60);
                    frameImageSaved = true;
                    frameImageReady = false;
                }
#endif
                if(frameImageNumber%60 == 0){ //Todo change this to 60 if use full60fps_VuIRThermal
                    previous = now;
                    gettimeofday(&now, nullptr);
                    instant_fps = 60000.0/millis(previous, now); //Todo change this to 60000.0 if use full60fps_VuIRThermal
                    real_averaged_fps += instant_fps;
                    counter++;
                    qDebug() << "real time FPS = " << instant_fps;
                }
            }
            if(!needToFFMPEG) needToFFMPEG = true;
            usleep(10000); //10 millisecond
        } else {
#ifdef QTVIDRECORD
            if(mRecorder && (mRecorder->state() == QMediaRecorder::RecordingState)){
                mRecorder->stop();
                qDebug() << "mRecorder->stop();";
            }
#endif
            if(needToFFMPEG){                
                needToFFMPEG = false;
#if CPP_FFMPEG_RECORD
                ffmpeg_finalize();
#elif QIMAGERECORD
                real_averaged_fps /= counter;
                QProcess _FFMPEG;
                QString _process = "ffmpeg";
                QStringList _paramList;
                char videoNameArg[150];
                char picname[150];
                sprintf(videoNameArg, "/media/pi/VUIR_DATA/%s/VuIRBoson_%03d.avi", sub_folder_name, videoNumber++);
                sprintf(picname, "/media/pi/VUIR_DATA/%s/tempics/frame_%%06d.jpg", sub_folder_name);
                //sprintf(videoNameArg, "VuIRBoson%02d_%03d.avi", videoNumber++);
                _paramList << "-y"
                           << "-framerate"
                           << QString::number(real_averaged_fps)
                           << "-start_number"
                           << QString::number(startFrameNo)
                           << "-i"
                           //<< "/media/pi/VUIR_DATA/tempics/frame_%06d.jpg"
                           << picname
                           //<< "tempics/frame_%06d.jpg"
                           << "-vframes"
                           << QString::number(frameImageNumber-1 - startFrameNo)
                           << "-vcodec"
                           << "libx264"
                           << "-crf"
                           << "20"
                           << "-preset"
                           << "ultrafast"
                           << "-tune"
                           << "fastdecode"
                           << "-b:v"
                           << "300M"
                           << videoNameArg;
                //-b:v 300M is a large number, but it's probably ignored. It's just there to set no limit to the bitrate
                //-vcodec libx264 -crf 24 -preset veryfast  -b:v 600M
                //ffmpeg -r 27.51 -i /mnt/suascom/tempics/good/frame_%05d.jpg -vcodec libx264 -crf 24 -preset veryfast  -b:v 600M /mnt/suascom/tempics/good/fast24.avi
                ////https://trac.ffmpeg.org/wiki/Encode/H.264
                //[libx264 @ 0x2bb2580] Possible presets: ultrafast superfast veryfast faster fast medium slow slower veryslow placebo
                //[libx264 @ 0x2bb2580] Possible tunes: film animation grain stillimage psnr ssim fastdecode zerolatency
                qDebug() << _process << _paramList;
                //_FFMPEG.start(_process, _paramList);
                _FFMPEG.startDetached(_process, _paramList);

                /*if ( !(_FFMPEG.waitForFinished()) )
                    qDebug() << "Conversion failed:" << _FFMPEG.errorString();
                else
                    qDebug() << "Conversion output:" << _FFMPEG.readAll();*/
                if(startFrameNo < frameImageNumber){
                    startFrameNo = (frameImageNumber-1) +50; //Remember frameImageNumber++ in sprintf(filename, "/media/pi/VUIR_DATA/tempics/frame_%06d.jpg", frameImageNumber++);
                }
#endif
            }
            usleep(100000); //100 milliseconds or 1/10 a second
        }
    }
}
