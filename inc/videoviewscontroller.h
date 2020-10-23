#ifndef VIDEOVIEWSCONTROLLER_H
#define VIDEOVIEWSCONTROLLER_H

#include <QObject>
#include "globalvariables.h"
#include "globalforclassvariables.h"

class VideoViewsController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(const QInt& mainViewNo NOTIFY rearangeVideoViewsSignal)
public:
    explicit VideoViewsController(QObject *parent = nullptr);

signals:    
    void rearangeVideoViewsSignal(int mainViewNo);
    //void rearangeVideoViewsSignal(int mainViewNo, int sideViews[3]);

public slots:
    void emitRearangeVideoViewsSignal(int mainViewNo);
    //void emitRearangeVideoViewsSignal(int mainViewNo, int sideViews[3]);
};

#endif // VIDEOVIEWSCONTROLLER_H
