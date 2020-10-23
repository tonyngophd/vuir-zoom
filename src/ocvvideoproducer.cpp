#include "ocvvideoproducer.h"
//#include "uvcacquisition.h"
#include "ocvvideocapture.h"
#include "globalforclassvariables.h"
#include "globalvariables.h"

OCVVideoProducer::OCVVideoProducer(QObject *parent)
    : QObject(parent)
    , m_surface(NULL)
    , m_ocv(NULL)
{
}

void OCVVideoProducer::setVideoSurface(QAbstractVideoSurface *surface)
{
    if (m_surface != surface && m_surface && m_surface->isActive()) {
        m_surface->stop();
    }

    m_surface = surface;
#ifdef QTVIDRECORD
    mVidSurface = surface;
#endif
    printf("Surface set. Supported formats:");
    QList<QVideoFrame::PixelFormat> formats = surface->supportedPixelFormats();
    for (int i = 0; i < formats.length(); i++)
        printf(" %d", formats[i]);
    printf("\n");
    fflush(stdout);

    if (m_ocv){
        m_surface->start(m_ocv->videoFormat());
#ifdef QTVIDRECORD
        if(mVidSurface)
            mVidSurface->start(m_ocv->videoFormat());
        qDebug() << "mVidSurface->start(m_ocv->videoFormat());";
#endif
    }
    emit surfaceChanged(m_surface);
}

void OCVVideoProducer::setOcv(OCVVideoCapture *ocv)
{
    if (m_ocv)
        disconnect(m_ocv, &OCVVideoCapture::frameReady,
                   this, &OCVVideoProducer::onNewVideoContentReceived);

    m_ocv = ocv;
    m_ocv->start(QThread::HighestPriority);
    emit ocvChanged(ocv);

    if (m_surface)
    {
        if (m_surface->isActive()) {
            m_surface->stop();
        }

        QVideoSurfaceFormat new_format = m_surface->nearestFormat(ocv->videoFormat());
        printf("Surface supports format %d width %d height %d",
               new_format.pixelFormat(),
               new_format.frameWidth(), new_format.frameHeight());
        fflush(stdout);

        m_surface->start(ocv->videoFormat());
#ifdef QTVIDRECORD
        if(mVidSurface)
            mVidSurface->start(m_ocv->videoFormat());
#endif
    }

    connect(m_ocv, &OCVVideoCapture::frameReady,
            this, &OCVVideoProducer::onNewVideoContentReceived);
}

void OCVVideoProducer::onNewVideoContentReceived(const QVideoFrame &frame)
{
    //qDebug() << "OCVVideoProducer: presenting frame " << frame;
    if (m_surface)
        m_surface->present(frame);
#ifdef QTVIDRECORD
    if(RecordVideo){
        if(mVidSurface)
            mVidSurface->present(frame);
    }
#endif
}
