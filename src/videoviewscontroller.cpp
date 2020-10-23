#include "videoviewscontroller.h"

VideoViewsController::VideoViewsController(QObject *parent) : QObject(parent)
{

}

/*void VideoViewsController::emitRearangeVideoViewsSignal(int mainViewNo, int sideViews[3]){
    rearangeVideoViewsSignal(mainViewNo, sideViews);
}*/
void VideoViewsController::emitRearangeVideoViewsSignal(int mainViewNo){
    qDebug() << "In VideoController, mainViewNo = " << mainViewNo;
    emit rearangeVideoViewsSignal(mainViewNo);
}
