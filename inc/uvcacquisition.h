#ifndef UVCACQUISITION_H
#define UVCACQUISITION_H

//#define USE_OPENCV

#include <QTimer>
#include <QList>
#include <QObject>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#ifdef USE_OPENCV
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/videoio/videoio.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <linux/videodev2.h>
#include <opencv2/core.hpp>
//#include "/home/pi/installation/OpenCV-master/include/opencv4/opencv2/opencv.hpp"
//#include "/home/pi/installation/OpenCV-master/include/opencv4/opencv2/imgcodecs/imgcodecs.hpp"
//#include "/home/pi/installation/OpenCV-master/include/opencv4/opencv2/videoio/videoio.hpp"
//#include "/home/pi/installation/OpenCV-master/include/opencv4/opencv2/highgui.hpp"
#endif

#include <libuvc/libuvc.h>
#include <unistd.h>
#include "src/savevidframesthread.h"
#include <sys/time.h>

extern "C" {
//#include <libavcodec/avcodec.h>
//#include <libavformat/avformat.h>
    #include <globalflirvariables.h>
}

#include "abstractccinterface.h"
#include "dataformatter.h"
using namespace std;
//static bool SaveAPicture = true;
//static int PictureNo = 0;

class UvcAcquisition : public QObject
{
    Q_OBJECT

public:
    struct UsbId {
        int vid;
        int pid;
        char *isn;
    };

    UvcAcquisition(QObject *parent = 0);
    UvcAcquisition(QList<UsbId> ids);
    virtual ~UvcAcquisition();

    Q_PROPERTY(const QVideoSurfaceFormat& videoFormat READ videoFormat WRITE setVideoFormat NOTIFY formatChanged)
    const QVideoSurfaceFormat& videoFormat() const { return m_format; }

    Q_PROPERTY(AbstractCCInterface* cci MEMBER m_cci NOTIFY cciChanged)

    Q_PROPERTY(DataFormatter* dataFormatter READ getDataFormatter() NOTIFY dataFormatterChanged)
    DataFormatter* getDataFormatter() { return &m_df; }

    Q_PROPERTY(const QSize& videoSize READ getVideoSize NOTIFY videoSizeChanged)
    const QSize getVideoSize() { return m_format.frameSize(); }
    bool _SaveAPicture = false;

signals:
    void frameReady(const QVideoFrame &frame);
    void formatChanged(const QVideoSurfaceFormat &format);
    void cciChanged(AbstractCCInterface *format);
    void dataFormatterChanged(AbstractCCInterface *format);
    void videoSizeChanged(const QSize &size);
    void rearangeVideoViewsSignal(int mainViewNo);

public slots:
    void setVideoFormat(const QVideoSurfaceFormat &format);

    void pauseStream();
    void resumeStream();

    void savepictures(const QVideoFrame &frame);
    void setSaveAPictureTrue();
    void recordThisFrame(const QVideoFrame &frame);
    void recordThisFrame(const QImage &frameImage);
    void recordThisFrame(const uint8_t *uvc_frame_data);
    void emitRearangeVideoViewsSignal(int mainViewNo);

protected:
    uvc_context_t *ctx;
    uvc_device_t *dev;
    uvc_device_handle_t *devh;
    uvc_stream_ctrl_t ctrl;
    QVideoSurfaceFormat m_format;
    QVideoSurfaceFormat m_uvc_format;
    AbstractCCInterface *m_cci;
    DataFormatter m_df;

private:
    static void cb(uvc_frame_t *frame, void *ptr);
    void emitFrameReady(const QVideoFrame &frame);
    void init();
    QList<UsbId> _ids;
    int _pictureNo = 0;
    int _pictureNo_forVideo = 0;
    int videoFileNo = 0;
    int _frameNo = 0;
    int _framecount4fps = 0;
    int _odd_even_skip = 0;
    struct timeval now, previous;
    bool _uvc_is_streaming = false;
    int _camera_number = 0;
};

#endif // UVCACQUISITION_H
