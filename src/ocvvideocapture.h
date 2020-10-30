#ifndef OCVVIDEOCAPTURE_H
#define OCVVIDEOCAPTURE_H

#include <QPixmap>
#include <QImage>
#include <QThread>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#include <QTimer>
#include <QList>
#include <QObject>

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>               // open, O_RDWR
#include <opencv2/opencv.hpp>
#include <unistd.h>              // close
#include <sys/ioctl.h>           // ioctl
#include <asm/types.h>           // videodev2.h
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <linux/videodev2.h>
#include "abstractccinterface.h"
#include "dataformatter.h"

#define ID_CAMERA 0

using namespace std;
using namespace cv;

#define YUV   0
#define RAW16 1

#define v_major 1
#define v_minor 0

// Define COLOR CODES
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

class OCVVideoCapture : public QThread
{
    Q_OBJECT
public:
    OCVVideoCapture(QObject *parent = nullptr);
    QPixmap pixmap() const {return mPixmap; }
    Q_PROPERTY(const QVideoSurfaceFormat& videoFormat READ videoFormat WRITE setVideoFormat NOTIFY formatChanged)
    const QVideoSurfaceFormat& videoFormat() const { return m_format; }

    //Q_PROPERTY(AbstractCCInterface* cci MEMBER m_cci NOTIFY cciChanged)

    Q_PROPERTY(DataFormatter* dataFormatter READ getDataFormatter() NOTIFY dataFormatterChanged)
    DataFormatter* getDataFormatter() { return &m_df; }

    Q_PROPERTY(const QSize& videoSize READ getVideoSize NOTIFY videoSizeChanged)
    const QSize getVideoSize() { return m_format.frameSize(); }

signals:
    void newPixmapCaptured(); // new QPixmap has been captured
    void newQImageCaptured(); // new QImage has been captured
    void frameReady(const QVideoFrame &frame); //new QVideoFrame ready to display
    void formatChanged(const QVideoSurfaceFormat &format);
    //void cciChanged(AbstractCCInterface *format);
    void dataFormatterChanged(AbstractCCInterface *format);
    void videoSizeChanged(const QSize &size);

public slots:
    void setVideoFormat(const QVideoSurfaceFormat &format);

protected:
    void run() override;
    QVideoSurfaceFormat m_format;
    QVideoSurfaceFormat m_uvc_format;
    //AbstractCCInterface *m_cci;
    DataFormatter m_df;

private:
    QPixmap mPixmap;
    cv::Mat mFrame;
    cv::VideoCapture mVideoCap;
    cv::Mat thermal_rgb;//(512, 640, CV_8UC3, 1);    // OpenCV output buffer , BGR -> Three color spaces (640 - 640 - 640 : p11 p21 p31 .... / p12 p22 p32 ..../ p13 p23 p33 ...)
    int _mOCV_instance = 0;
    bool _mocv_streaming = false;
    bool _fd_opened = false;
    int _pictureNo = 0;

    QImage  cvMatToQImage( const cv::Mat &inMat );
    QPixmap cvMatToQPixmap( const cv::Mat &inMat );
    void emitFrameReady(const QVideoFrame &frame);
    void recordThisFrame(const QVideoFrame &frame);
    void savepictures(const QVideoFrame &frame);
};


#endif // OCVVIDEOCAPTURE_H
