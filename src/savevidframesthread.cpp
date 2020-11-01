#include "savevidframesthread.h"
#include "globalvariables.h"
#include "globalforclassvariables.h"
#include "ffmpgegvideorecorder.h"
#include "videoviewscontroller.h"
#include "globalflirvariables.h"
#include <QUrl>
#include <QPainter>
#include <QPoint>
#include <QThreadPool>
#include <QtConcurrent/QtConcurrent>

QImage frameImage[4];
bool frameImageReady[4] = {false, false, false, false};
bool frameImageSaved[4] = {true, true, true, true};
bool frameRecording = false;
bool needToFFMPEG = false;
int uvc_instance = 0;
int uvc_start_number[4] = {0, 1, 2, 3};
int ocv_instance = 0;
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

void SaveVidFramesThread::addFrameThreadFunc(int quality){
    videoWriter.addFrame(combinedImage, "JPG", quality);
}

bool allAreReady(int max = NumberOfCameras){
    bool result = true;
    for(int i = 0; i < max; i++){
        result = result && frameImageReady[i] && !frameImageSaved[i];
    }
    return result;
}

bool allAreNotNull(int max = NumberOfCameras){
    bool result = true;
    for(int i = 0; i < max; i++){
        result = result && !frameImage[i].isNull();
    }
    return result;
}

void resetFlags(int max = NumberOfCameras){
    for(int i = 0; i < max; i++){
        frameImageSaved[i] = true;
        frameImageReady[i] = false;
    }
}

void SaveVidFramesThread::run()
{
#if CPP_FFMPEG_RECORD
    ffmpeg_init();
#endif
    char filename[100];
    char videoName[150];
    struct timeval now, previous;
    double real_averaged_fps = 0;
    double instant_fps = 0;
    uint16_t counter = 0;
    uint32_t startFrameNo = 0;
    int videoNumber = 0;
    gettimeofday(&previous, nullptr);
    combinedImage = QImage(640 + 220, 512, !frameImage[0].isNull()?frameImage[0].format():QImage::Format_ARGB32);
    QPainter painter(&combinedImage);
    QTransform scaling;
    scaling.scale(0.34375, 0.34375);
    painter.setCompositionMode(QPainter::CompositionMode_Source);

    while(true){
        usleep(100); //0.1 millisecond so that this thread doesn't check value of RecordVideo 100% of the time, reducing cpu usage
        if(RecordVideo){
            if(!videoWriter.isOpened()) {
                sprintf(videoName, "/media/pi/VUIR_DATA/%s/VuIRBoson_%03d.avi", sub_folder_name, videoNumber++);
                qDebug() << "\n\n\n\nvideoName = " << videoName;
                videoWriter.open(videoName, combinedImage.size());
                gettimeofday(&now, nullptr);
                frameImageNumber = 0;
            }
            if(allAreReady()){
                if(frameImageNumber <= startFrameNo){
                    gettimeofday(&now, nullptr);
                    uint32_t real_averaged_fps = 0;
                    uint16_t counter = 0;
                    frameImageNumber = startFrameNo;
                }
                if(allAreNotNull()){
                    painter.drawImage(220, 0, frameImage[globalVideoViewOrderNo]);
                    for (int i = 1; i < NumberOfCameras; i++) {
                        painter.drawImage(0, (i - 1) * 171, frameImage[Video_View_Matrix[i]].transformed(scaling));
                    }
                    resetFlags();
                    if(!combinedImage.isNull()) {
                        frameImageNumber++;
                        //sprintf(filename, "/media/pi/VUIR_DATA/%s/tempics/frame_%06d.jpg", sub_folder_name, frameImageNumber++);
                        QtConcurrent::run(this, &SaveVidFramesThread::addFrameThreadFunc, 40);//videoWriter.addFrame(combinedImage, "JPG", 40);
                    }
                }
                if(frameImageNumber%60 == 0){ //Todo change this to 60 if use full60fps_VuIRThermal
                    previous = now;
                    gettimeofday(&now, nullptr);
                    instant_fps = 60000.0/millis(previous, now); //Todo change this to 60000.0 if use full60fps_VuIRThermal
                    real_averaged_fps += instant_fps;
                    counter++;
                    qDebug() << "real time FPS for vid recording = " << instant_fps;
                }
            }
            //if(!needToFFMPEG) needToFFMPEG = true;
            usleep(1); //1 microsecond
        } else {
#ifdef QTVIDRECORD
            if(mRecorder && (mRecorder->state() == QMediaRecorder::RecordingState)){
                mRecorder->stop();
                qDebug() << "mRecorder->stop();";
            }
#endif
            if(videoWriter.isOpened()) videoWriter.close();

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
                           //<< "-vf"  //this option is for rotating the video -90 degrees
                           //<< "transpose=2"
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
