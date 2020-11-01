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

bool SaveVidFramesThread::allAreReady(int max = NumberOfCameras){
    bool result = true;
    for(int i = 0; i < max; i++){
        result = result && frameImageReady[i] && !frameImageSaved[i];
    }
    return result;
}

bool SaveVidFramesThread::allAreNotNull(int max = NumberOfCameras){
    bool result = true;
    for(int i = 0; i < max; i++){
        result = result && !frameImage[i].isNull();
    }
    return result;
}

void SaveVidFramesThread::resetFlags(int max = NumberOfCameras){
    for(int i = 0; i < max; i++){
        frameImageSaved[i] = true;
        frameImageReady[i] = false;
    }
}

void SaveVidFramesThread::run()
{
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
                        QtConcurrent::run(this, &SaveVidFramesThread::addFrameThreadFunc, 40);
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
                if(frameImageNumber >= 1800*10){ // We somewhat arbitrarily limit the length of video to be 10 minutes (30fps * 60s * 10 = 1800 * 10 frames).
                    //The expected file size is then about 60MB * 10 = 600MB
                    qDebug() << "Video file size/length limit reached, closing writer and starting a new file";
                    if(videoWriter.isOpened()) videoWriter.close();
                    frameImageNumber = 0;
                }
            }
            usleep(1); //1 microsecond
        } else {
            if(videoWriter.isOpened()) videoWriter.close();
            usleep(100000); //100 milliseconds or 1/10 a second
        }
        usleep(100); //0.1 millisecond so that this thread doesn't check value of RecordVideo 100% of the time, reducing cpu usage
    }
}
