#ifndef OCVVIDEOPRODUCER_H
#define OCVVIDEOPRODUCER_H

#include <QObject>
#include <QAbstractVideoSurface>
#include <QVideoSurfaceFormat>
#include <QCamera>
#include <QMediaRecorder>
//#include "uvcacquisition.h"
#include "ocvvideocapture.h"

class OCVVideoProducer : public QObject
{
    Q_OBJECT
public:
    explicit OCVVideoProducer(QObject *parent = 0);

    Q_PROPERTY(QAbstractVideoSurface *videoSurface MEMBER m_surface WRITE setVideoSurface NOTIFY surfaceChanged)
    void setVideoSurface(QAbstractVideoSurface *surface);

    Q_PROPERTY(OCVVideoCapture *ocv MEMBER m_ocv WRITE setOcv NOTIFY ocvChanged)
    void setOcv(OCVVideoCapture *ocv);

signals:
    void surfaceChanged(QAbstractVideoSurface *surface);
    void ocvChanged(OCVVideoCapture *ocv);

public slots:
    void onNewVideoContentReceived(const QVideoFrame &frame);

private:
    QAbstractVideoSurface *m_surface;
    OCVVideoCapture *m_ocv;
};

#endif // OCVVIDEOPRODUCER_H
