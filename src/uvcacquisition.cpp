#include "uvcacquisition.h"
#include "uvcbuffer.h"
#include <QList>
#include <QString>
#include <QDebug>
#include <QCamera>
#include <QImage>
#include <libuvc/libuvc.h>
#include <malloc.h>

#include "leptonvariation.h"
#include "bosonvariation.h"
#include "dataformatter.h"
//#include "ag_aux_funcs.h"
#include "QVideoFrameToQImage.h"
#ifdef USE_OPENCV
#include <asmOpenCV.h>
#endif
#include "agtimer.h"
#include "globalvariables.h"
#include "globalforclassvariables.h"
#include "ffmpgegvideorecorder.h"

//#define PLANAR_BUFFER 1
//#define ACQ_RGB 1
#define ACQ_Y16 1

#define PT1_VID 0x1e4e
#define PT1_PID 0x0100
#define FLIR_VID 0x09cb

#include <QImage>

QImage qt_imageFromVideoFrame(const QVideoFrame& f);

UvcAcquisition::UvcAcquisition(QObject *parent)
    : QObject(parent)
    , ctx(NULL)
    , dev(NULL)
    , devh(NULL)
    , m_cci(NULL)
{
    //_ids.append({ PT1_VID, PT1_PID });//Purethermal and Lepton --> skip this
    //_ids.append({ FLIR_VID, 0x0000, Boson0_SN }); // any flir camera
    for(int i = 0; i < NumberOfCameras; i++){
        _ids.append({ FLIR_VID, 0x0000, Boson_SN[i] });
    }
    init();
}

UvcAcquisition::UvcAcquisition(QList<UsbId> ids)
    : ctx(NULL)
    , dev(NULL)
    , devh(NULL)
    , m_cci(NULL)
    , _ids(ids)
{
    init();
}


UvcAcquisition::~UvcAcquisition()
{
    if (m_cci != NULL)
    {
        delete m_cci;
    }

    if (devh != NULL)
    {
        uvc_stop_streaming(devh);
        _uvc_is_streaming = false;
        puts("Done streaming.");

        /* Release our handle on the device */
        uvc_close(devh);
        puts("Device closed");
    }

    if (dev != NULL)
    {
        /* Release the device descriptor */
        uvc_unref_device(dev);
    }

    if (ctx != NULL)
    {
        /* Close the UVC context. This closes and cleans up any existing device handles,
         * and it closes the libusb context if one was not provided. */
        uvc_exit(ctx);
        puts("UVC exited");
    }
}

void UvcAcquisition::init()
{
    //sleep(uvc_instance * 1);
    //gQmutex.lock();
    uvc_error_t res;

    /* Initialize a UVC service context. Libuvc will set up its own libusb
     * context. Replace NULL with a libusb_context pointer to run libuvc
     * from an existing libusb context. */
    res = uvc_init(&ctx, NULL);
    qDebug() << "\n\n\n\nUVC INSTANCE = " << uvc_instance << "HERE  RES res = " << res << " _ids.size() = " << _ids.size() << "\n\n\n\n";

    if (res < 0) {
        uvc_perror(res, "uvc_init");
        return;
    }

    puts("UVC initialized");

    uvc_instance++;

    /* Locates the first attached UVC device, stores in dev */
    qDebug() << "\n\n\n\n uvc_start_number = " << uvc_start_number[uvc_instance - 1] << "\n\n\n\n";
    for (int i = uvc_start_number[uvc_instance - 1]; i < _ids.size(); ++i) {
        res = uvc_find_device(ctx, &dev, _ids[i].vid, _ids[i].pid, _ids[i].isn);
        qDebug() << "\n\n i = " << i << " RES = " << res << " ctx = " << ctx << " dev = " << dev << "vid, pid = " << _ids[i].vid << _ids[i].pid <<"\n\n";
        if (res >= 0){
            uvc_start_number[uvc_instance] = i + 1;
            break;
        }
    }

    if (res < 0) {
        uvc_perror(res, "uvc_find_device"); /* no devices found */
        return;
    }

    puts("Device found");

    /* Try to open the device: requires exclusive access */
    res = uvc_open(dev, &devh);

    if (res < 0) {
        uvc_perror(res, "uvc_open"); // unable to open device

        // Release the device descriptor
        uvc_unref_device(dev);
        dev = NULL;
        return;
    }

    puts("Device opened");
    setVideoFormat(QVideoSurfaceFormat(QSize(640,512), QVideoFrame::Format_YUV420P));
    return;

    /* Print out a message containing all the information that libuvc
     * knows about the device */
    //uvc_print_diag(devh, stderr);

    uvc_device_descriptor_t *desc;
    uvc_get_device_descriptor(dev, &desc);

    switch (desc->idVendor)
    {
    case PT1_VID:
        m_cci = new LeptonVariation(ctx, dev, devh);
        break;
    case FLIR_VID:
        m_cci = new BosonVariation(ctx, dev, devh);
        break;
    default:
        break;
    }

    uvc_free_device_descriptor(desc);

    if (m_cci != NULL)
    {
        setVideoFormat(m_cci->getDefaultFormat());
    }
    //gQmutex.unlock();
}

void UvcAcquisition::setVideoFormat(const QVideoSurfaceFormat &format)
{
    uvc_error_t res;
    enum uvc_frame_format uvcFormat;

    uvc_stop_streaming(devh);
    _uvc_is_streaming = false;

    switch(format.pixelFormat())
    {
    case QVideoFrame::Format_YUV420P:
        uvcFormat = UVC_FRAME_FORMAT_I420;
        break;
    case QVideoFrame::Format_RGB24:
        uvcFormat = UVC_FRAME_FORMAT_RGB;
        break;
    case QVideoFrame::Format_Y16:
        uvcFormat = UVC_FRAME_FORMAT_Y16;
        break;
    default:
        uvcFormat = UVC_FRAME_FORMAT_UNKNOWN;
        break;
    }

    res = uvc_get_stream_ctrl_format_size(
                devh, &ctrl, /* result stored in ctrl */
                uvcFormat,
                format.frameWidth(), format.frameHeight(), 0);

    /* Print out the result */
    //uvc_print_stream_ctrl(&ctrl, stderr);

    if (res < 0) {
        uvc_perror(res, "get_mode"); /* device doesn't provide a matching stream */
        return;
    }

    m_uvc_format = format;

    switch(format.pixelFormat())
    {
    case QVideoFrame::Format_YUV420P:
        m_format = QVideoSurfaceFormat(format.frameSize(), format.pixelFormat());
        break;
    case QVideoFrame::Format_RGB24:
        m_format = QVideoSurfaceFormat(format.frameSize(), QVideoFrame::Format_RGB32);
        break;
    case QVideoFrame::Format_Y16:
        m_format = QVideoSurfaceFormat(format.frameSize(), QVideoFrame::Format_RGB32);
        break;
    case QVideoFrame::Format_YV12:
        m_format = QVideoSurfaceFormat(format.frameSize(), format.pixelFormat());
        break;
    default:
        m_format = QVideoSurfaceFormat(format.frameSize(), QVideoFrame::Format_Invalid);
        break;
    }

    qDebug() << "format.pixelFormat() = " << format.pixelFormat();

    // Notify connections of format change
    emit formatChanged(m_format);
    emit videoSizeChanged(m_format.frameSize());

    gettimeofday(&now, nullptr);
    /* Start the video stream. The library will call user function cb:
     *   cb(frame, (void*) 12345)
     */
    res = uvc_start_streaming(devh, &ctrl, UvcAcquisition::cb, this, 0);
    /*while(res < 0){
        qDebug() << res;
        res = uvc_start_streaming(devh, &ctrl, UvcAcquisition::cb, this, 0);
    }*/

    if (res < 0) {
        uvc_perror(res, "start_streaming"); /* unable to start stream */
        uvc_close(devh);
        puts("Device closed");

        return;
    }

    _uvc_is_streaming = true;

    puts("Streaming...");
}

// Calculate time difference in milliseconds
inline long millis(timeval start, timeval end)
{
    long seconds, useconds;
    seconds  = end.tv_sec  - start.tv_sec;
    useconds = end.tv_usec - start.tv_usec;

    return ((seconds) * 1000 + useconds/1000.0) + 0.5;
}


/* This callback function runs once per frame. Use it to perform any
 * quick processing you need, or have it put the frame into your application's
 * input queue. If this function takes too long, you'll start losing frames. */
void UvcAcquisition::cb(uvc_frame_t *frame, void *ptr) {

    UvcAcquisition *_this = static_cast<UvcAcquisition*>(ptr);
    /*_this->_frameNo++;
    if(_this->_frameNo % 11 == 0) {
        if(_this->_odd_even_skip ==0) _this->_odd_even_skip = 1;
        else _this->_odd_even_skip = 0;
        return;
    }
    if(_this->_frameNo % 2 != _this->_odd_even_skip) return;
    //qDebug() << _this->_frameNo;*/
    _this->_framecount4fps++;
    //if(_this->_framecount4fps%2==0) return;

    if(_this->_framecount4fps % 61 == 0){
        _this->previous = _this->now;
        gettimeofday(&(_this->now), nullptr);
        //qDebug() << "Real time FPS = " << 61000.0/millis(_this->previous, _this->now);
    }

    Q_ASSERT((int)frame->width == _this->m_format.frameWidth());
    Q_ASSERT((int)frame->height == _this->m_format.frameHeight());

//    QImage image((uchar*)frame->data, frame->width, frame->height, QImage::Format_RGB888);
//    QImage image("/Users/kurt/Desktop/uvc.png");
//    QVideoFrame qframe(image.convertToFormat(QImage::Format_ARGB32));

    // Need to reshape UVC input
    if (_this->m_uvc_format.pixelFormat() != _this->m_format.pixelFormat())
    {
        // we don't have a reason to handle frame buffers other than RGBA for now
        Q_ASSERT(_this->m_format.pixelFormat() == QVideoFrame::Format_RGB32);

        QVideoFrame qframe(_this->m_format.frameWidth() * _this->m_format.frameHeight() * 4,
                           _this->m_format.frameSize(),
                           _this->m_format.frameWidth() * 4,
                           _this->m_format.pixelFormat());

        if (_this->m_uvc_format.pixelFormat() == QVideoFrame::Format_Y16)
        {
            _this->m_df.AutoGain(frame);
            _this->m_df.Colorize(frame, qframe);
        }
        else if (_this->m_uvc_format.pixelFormat() == QVideoFrame::Format_RGB24)
        {
            qframe.map(QAbstractVideoBuffer::WriteOnly);
            for (int i = 0; i < qframe.height(); i++)
            {
                uchar* rgb_line = &((uchar*)frame->data)[frame->step * i];
                uchar* rgba_line = &qframe.bits()[qframe.bytesPerLine() * i];

                for (int j = 0; j < qframe.width(); j++)
                {
                    rgba_line[j * 4 + 0] = rgb_line[j * 3 + 0];
                    rgba_line[j * 4 + 1] = rgb_line[j * 3 + 1];
                    rgba_line[j * 4 + 2] = rgb_line[j * 3 + 2];
                    rgba_line[j * 4 + 3] = 0;
                }
            }
            qframe.unmap();
        }
        //qDebug() << "top _this->emitFrameReady(qframe);";
#ifndef QTVIDRECORD
        _this->recordThisFrame(qframe);
#endif
        _this->savepictures(qframe);
        _this->emitFrameReady(qframe);
    }
    else
    {
        UvcBuffer *buffer = new UvcBuffer();
        buffer->setBackendBuffer((uchar*)frame->data, frame->width, frame->height, frame->step, frame->data_bytes);
        QVideoFrame qframe(buffer, _this->m_format.frameSize(), _this->m_format.pixelFormat());

#if CPP_FFMPEG_RECORD
        QImage img = qt_imageFromVideoFrame(qframe);
        //qDebug() << "img.byteCount() = " << img.byteCount() << "size640x512x4 = " << size640x512x4;
        //qDebug() << "qImage format = " << img.format();
        _this->recordThisFrame(img.bits());
#elif QIMAGERECORD
        _this->recordThisFrame(qframe);
#endif
        _this->savepictures(qframe);
        _this->emitFrameReady(qframe);
        //qDebug() << "UvcAqusition qframe = " << qframe;
        //_this->emitRearangeVideoViewsSignal(mainViewNo);
    }
}

void UvcAcquisition::emitFrameReady(const QVideoFrame &frame)
{
    emit frameReady(frame);
}

void UvcAcquisition::pauseStream() {
    if(_uvc_is_streaming){
        uvc_stop_streaming(devh);
        _uvc_is_streaming = false;
    }
}

void UvcAcquisition::resumeStream() {
    if(_uvc_is_streaming) return;
    uvc_error_t res = uvc_start_streaming(devh, &ctrl, UvcAcquisition::cb, this, 0);
    /*while(res < 0){
        qDebug() << res;
        res = uvc_start_streaming(devh, &ctrl, UvcAcquisition::cb, this, 0);
    }*/

    if (res < 0) {
        uvc_perror(res, "start_streaming"); /* unable to start stream */
        uvc_close(devh);
        puts("Device closed");

        return;
    }
    _uvc_is_streaming = true;
}

void UvcAcquisition::emitRearangeVideoViewsSignal(int mainViewNo){
    if(needToSwapViews){
        qDebug() << "In UvcAcquisition, mainViewNo = " << mainViewNo;
        emit rearangeVideoViewsSignal(mainViewNo);
        needToSwapViews = false;
    }
}

void UvcAcquisition::savepictures(const QVideoFrame &frame){
    if(SaveAPicture){         
        char fileName[150];
        sprintf(fileName, "/media/pi/VUIR_DATA/%s/VuIRBoson_%03d.jpg", sub_folder_name, _pictureNo++);
        //sprintf(fileName, "VuIRBoson_%03d.jpg", _pictureNo++);
        qt_imageFromVideoFrame(frame).save(fileName, 0, 100);
        //QImage img = qt_imageFromVideoFrame(frame);
        //qDebug() << "Save result" << img.save(fileName, 0, 100);
        //qDebug() << "Save result" << qt_imageFromVideoFrame(frame).save(fileName, 0, -1);
        //QString fileName = QStringLiteral("/mnt/suascom/VuIRBoson_%1.jpg").arg(_pictureNo);
        //qDebug() << "fileName = " << fileName << "SaveAPicture = " << SaveAPicture << endl;
        SaveAPicture = false;
    }
}

void UvcAcquisition::setSaveAPictureTrue(){
    _SaveAPicture = true;
}

void UvcAcquisition::recordThisFrame(const uint8_t *uvc_frame_data){
    if(RecordVideo){
        if(frameImageSaved){
            memcpy(ff_rawFrame, uvc_frame_data, size640x512x4);//640*512*4
            //qDebug() << "Number of uvc_frame_data bytes = " << malloc_usable_size((void*)uvc_frame_data) << "size640x512x4 = " << size640x512x4;
            frameImageReady = true;
            frameImageSaved = false;
        }
    }
}
void UvcAcquisition::recordThisFrame(const QVideoFrame &frame){
    if(RecordVideo){
        if(frameImageSaved){
            frameImage = qt_imageFromVideoFrame(frame);
            frameImageReady = true;
            frameImageSaved = false;
        }
        //QString fileName = QStringLiteral("/mnt/suascom/tempics/VuIRBoson_%1.png").arg(_pictureNo_forVideo++);
        //QString fileName = QStringLiteral("/tempics/VuIRBoson_%1.png").arg(_pictureNo_forVideo++);
#ifdef USE_OPENCV
        /*char filename[100];
        sprintf(filename, "/mnt/suascom/tempics/VuIRBoson_%03d.png", _pictureNo_forVideo++);
        if(!videowriter.isOpened()){
            //videowriter.open("/mnt/suascom/VuIRBosonVid.mp4",cv::VideoWriter::fourcc('m','p','4','v'),30, cv::Size(640, 512), true); //This WORKS
            //videowriter.open("/mnt/suascom/VuIRBosonVid.mp4",cv::CAP_FFMPEG,cv::VideoWriter::fourcc('m','p','4','v'),30, cv::Size(640, 512),true);
            //videowriter.open("/mnt/suascom/VuIRBosonVid.wmv",cv::CAP_FFMPEG,cv::VideoWriter::fourcc('W', 'M', 'V', '2'),30, cv::Size(640, 512), true); //This WORKS
            //videowriter.open("/mnt/suascom/VuIRBosonVid.avi",cv::VideoWriter::fourcc('M', 'J', 'P', 'G'),30, cv::Size(640, 512), true); //This WORKS
            //videowriter.open("/mnt/suascom/VuIRBosonVid.mp4",cv::CAP_FFMPEG,cv::VideoWriter::fourcc('m','p','4','v'),30, cv::Size(640, 512), true); //This WORKS
            qDebug() << "Open = " << videowriter.open("/mnt/suascom/VuIRBosonVid.avi",cv::VideoWriter::fourcc('F', 'L', 'V', '1'),30, cv::Size(640, 512), true); //This WORKS
            //videowriter = cv::VideoWriter("/mnt/suascom/VuIRBosonVid.avi",cv::VideoWriter::fourcc('D','I','V','X'),30, cv::Size(640, 512), true); //This WORKS
            qDebug() << "videowriter.set(cv::VIDEOWRITER_PROP_QUALITY, 50) = " << videowriter.set(cv::VIDEOWRITER_PROP_QUALITY, 50);
            qDebug() << "videowriter.get(cv::VIDEOWRITER_PROP_IS_COLOR) = " << videowriter.get(cv::VIDEOWRITER_PROP_IS_COLOR);

        }
        cv::Mat mat = ASM::QImageToCvMat(qt_imageFromVideoFrame(frame), false);
        videowriter.write(mat);*/
        //videowriter.operator<<(mat);
        //cv::imshow("Test show", mat);
        //cv::waitKey(5);
        //qDebug() << "videowriter.get(cv::VIDEOWRITER_PROP_QUALITY) = " << videowriter.get(cv::VIDEOWRITER_PROP_QUALITY);
        //cout << "videowriter.getBackendName() = " << videowriter.getBackendName() << endl;*/
        /*_pictureNo++;
        if(_pictureNo%30 == 0){
            char fileName[100];
            sprintf(fileName, "/mnt/suascom/VuIRBoson_%d.png", _pictureNo);
            cv::imwrite(fileName, mat);
        }*/
        //qDebug() << "mat.cols = " << mat.cols << " mat.rows = " << mat.rows;
        //qDebug() << "videowriter written RecordVideo = " << RecordVideo << " StopVideoRecording = " << StopVideoRecording ;
        //qDebug() << "mat.empty() = " << mat.empty() << " videowriter.isOpened() = " << videowriter.isOpened();
        //videowriter.write(imageToMat8(qt_imageFromVideoFrame(frame)));
        //qDebug() << "StartRecordVideo = " << StartRecordVideo << "alreadyRecording = " << alreadyRecording;
        //qDebug() << "alreadyStopRec = " << alreadyStopRec;
    //} else {
        /*if(StopVideoRecording){
            if(videowriter.isOpened()){
                videowriter.release();
                //videowriter.~VideoWriter();
                qDebug() << "videowriter.release();";
            }
            StopVideoRecording = false;
        }*/
#endif
    }
}

void UvcAcquisition::recordThisFrame(const QImage &frameImage){
    /*if(RecordVideo){
        if(!videowriter.isOpened()){
            videowriter.open("_vuIRBosonVid_.mp4",cv::VideoWriter::fourcc('m','p','4','v'),30, cv::Size(640, 512), true); //This WORKS
        }
        videowriter.write(ASM::QImageToCvMat(frameImage, true));
        //qDebug() << "StartRecordVideo = " << StartRecordVideo << "alreadyRecording = " << alreadyRecording;
        //qDebug() << "alreadyStopRec = " << alreadyStopRec;
    } else {
        if(StopVideoRecording){
            if(videowriter.isOpened()){
                videowriter.release();
            }
            StopVideoRecording = false;
        }
    }*/
}

