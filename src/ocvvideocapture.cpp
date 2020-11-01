#include "ocvvideocapture.h"
#include <QDebug>
#include "uvcbuffer.h"
#include "globalforclassvariables.h"
#include "globalvariables.h"

#include <QImage>

QImage qt_imageFromVideoFrame(const QVideoFrame& f);

uint32_t omillis(){
    struct timeval tp;
    gettimeofday(&tp, NULL);
    return tp.tv_sec * 1000 + tp.tv_usec / 1000;
    //return duration<uint64_t>(high_resolution_clock::now()).count();
    //return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

OCVVideoCapture::OCVVideoCapture(QObject *parent)
    : QThread { parent }
    //, mVideoCap { ID_CAMERA }

{
    setVideoFormat(QVideoSurfaceFormat(QSize(640,512), QVideoFrame::Format_YUV420P));
}

void OCVVideoCapture::run()
{
    int fd = -1;
    int i;
    struct v4l2_capability cap;
    long frame=0;     // First frame number enumeration
    char video[100];   // To store Video Port Device
    char label[50];   // To display the information
    char thermal_sensor_name[20];  // To store the sensor name
    char filename[60];  // PATH/File_count
    char main_folder_name[30];  // To store the main folder name
    char sub_folder_name[30];  // To store the sub folder name
    char video_frames_str[30];
    // Default Program options
    int  video_mode=RAW16;
    int  video_frames=0;
    int  number_of_snaps=0;
    int  zoom_enable=0;
    int  record_enable=0;
    int  snap_picture=0;
    int  write_video=0;
    //bool write_video_started=false;
    bool isColor = true;
    int width;
    int height;
    uint32_t Millis = omillis(), Millis_pre = Millis;

    // To record images
    std::vector<int> compression_params;
    compression_params.push_back(IMWRITE_PXM_BINARY);

    video_mode = YUV;
    isColor = true;

    // we need to inform the device about buffers to use.
    // and we need to allocate them.
    // we’ll use a single buffer, and map our memory using mmap.
    // All this information is sent using the VIDIOC_REQBUFS call and a
    // v4l2_requestbuffers structure:
    struct v4l2_requestbuffers bufrequest;
    bufrequest.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    bufrequest.memory = V4L2_MEMORY_MMAP;
    bufrequest.count = 2;   // we are asking for one buffer


    //gQmutex.lock();
    // Video device by default
    //sprintf(video, "/dev/video%1d", ocv_instance); //Todo: sort /dev/videox according to FOVs sorted previously based on Part Numbers from /dev/ttyACMx
    //terminal: ls /dev/v4l/by-id/*
    sprintf(video, "/dev/v4l/by-id/usb-FLIR_Boson_%5d-video-index0", cameraSN[ocv_instance]); //Todo: sort /dev/videox according to FOVs sorted previously based on Part Numbers from /dev/ttyACMx
    printf(GRN "\n\nTrying to open video at port %s\n\n" WHT, video);
    _mOCV_instance = ocv_instance;
    ocv_instance++;
    //gQmutex.unlock();

    struct v4l2_format format;

    format.fmt.pix.pixelformat = V4L2_PIX_FMT_YVU420; // thermal, works   LUMA, full Cr, full Cb
    width = 640;
    height = 512;

    // Common varibles
    format.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    format.fmt.pix.width = width;
    format.fmt.pix.height = height;

    struct v4l2_buffer bufferinfo;
    memset(&bufferinfo, 0, sizeof(bufferinfo));

    bufferinfo.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    bufferinfo.memory = V4L2_MEMORY_MMAP;
    bufferinfo.index = 0;
    uint32_t type;// = bufferinfo.type;

    int luma_height ;
    int luma_width ;
    int color_space ;

    // Declarations for 8bits YCbCr mode
    // Will be used in case we are reading YUV format
    // Boson320, 640 :  4:2:0
    luma_height = height+height/2;
    luma_width = width;
    color_space = CV_8UC1;
    Mat thermal_luma;//(luma_height, luma_width,  color_space, nullptr);  // OpenCV input buffer
    int frame_no = 0;

    while ((fd = open(video, O_RDWR)) < 0) {
        //perror(RED "Error : Boson not present!" WHT " Please plug it in\n");
        //usleep(1000);
        sleep(1);
    }

    printf(GRN "\n\nOCVVideoCapture: found video at port %s\n\n" WHT, video);

    // Check VideoCapture mode is available
    if(ioctl(fd, VIDIOC_QUERYCAP, &cap) < 0){
        perror(RED "ERROR : VIDIOC_QUERYCAP. Video Capture is not available" WHT "\n");
        return;
    }

    if(!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE)){
        fprintf(stderr, RED "The device does not handle single-planar video capture." WHT "\n");
        printf(RED "The device does not handle single-planar video capture." WHT "\n");
        return;
    }

    // request desired FORMAT
    if(ioctl(fd, VIDIOC_S_FMT, &format) < 0){
        perror(RED "VIDIOC_S_FMT" WHT);
        printf("ioctl(fd, VIDIOC_S_FMT, &format) = %d\n", ioctl(fd, VIDIOC_S_FMT, &format));
        return;
    }

    if(ioctl(fd, VIDIOC_REQBUFS, &bufrequest) < 0){
        perror(RED "VIDIOC_REQBUFS" WHT);
        return;
    }

    // Now that the device knows how to provide its data,
    // we need to ask it about the amount of memory it needs,
    // and allocate it. This information is retrieved using the VIDIOC_QUERYBUF call,
    // and its v4l2_buffer structure.

    if(ioctl(fd, VIDIOC_QUERYBUF, &bufferinfo) < 0){
        perror(RED "VIDIOC_QUERYBUF" WHT);
        return;
    }


    // map fd+offset into a process location (kernel will decide due to our NULL). lenght and
    // properties are also passed
    printf(WHT ">>> Image width  =" YEL "%i" WHT "\n", width);
    printf(WHT ">>> Image height =" YEL "%i" WHT "\n", height);
    printf(WHT ">>> Buffer lenght=" YEL "%d" WHT "\n", bufferinfo.length);

    if(bufferinfo.length == 0){
        return;
    }

    void * buffer_start = mmap(NULL, bufferinfo.length, PROT_READ | PROT_WRITE,MAP_SHARED, fd, bufferinfo.m.offset);

    if(buffer_start == MAP_FAILED){
        perror(RED "mmap" WHT);
        return;
    }

    // Fill this buffer with zeros. Initialization. Optional but nice to do
    //memset(buffer_start, 0, bufferinfo.length);

    // Activate streaming
    type = bufferinfo.type;
    /*if(ioctl(fd, VIDIOC_STREAMON, &type) < 0){
        perror(RED "VIDIOC_STREAMON" WHT);
        return;
    }*/


    // Declarations for RAW16 representation
    // Will be used in case we are reading RAW16 format
    // Boson320 , Boson 640
    //Mat thermal16(height, width, CV_16U, buffer_start);   // OpenCV input buffer  : Asking for all info: two bytes per pixel (RAW16)  RAW16 mode`
    //Mat thermal16_linear(height,width, CV_8U, 1);         // OpenCV output buffer : Data used to display the video

    // Declarations for Zoom representation
    // Will be used or not depending on program arguments
    //Size size(640,512);
    //Mat thermal16_linear_zoom;   // (height,width, CV_8U, 1);    // Final representation
    //Mat thermal_rgb_zoom;   // (height,width, CV_8U, 1);    // Final representation

    //thermal_luma = Mat(luma_height, luma_width,  color_space, buffer_start);  // OpenCV input buffer
    frame_no = 0;

    Millis = omillis();
    Millis_pre = Millis;
    while(true){
        if(ocv_streaming[_mOCV_instance] == 0){
            if(_mocv_streaming){
                if(!ioctl(fd, VIDIOC_STREAMOFF, &type)){
                    //return;
                    _mocv_streaming = false;
                }
            }
            usleep(100);
            continue;
        }
        if(!_mocv_streaming){
            if(ioctl(fd, VIDIOC_STREAMON, &type) < 0){
                perror(RED "VIDIOC_STREAMON" WHT);
                return;
            }
            _mocv_streaming = true;
            thermal_luma = Mat(luma_height, luma_width,  color_space, buffer_start);  // OpenCV input buffer
            //usleep(1000);
        }
        if(ioctl(fd, VIDIOC_QBUF, &bufferinfo) < 0){
            perror(RED "VIDIOC_QBUF" WHT);
            //return;
        }

        if(ioctl(fd, VIDIOC_DQBUF, &bufferinfo) < 0) {
            perror(RED "VIDIOC_DQBUF" WHT);
            //return;
        }

        if(!thermal_luma.empty())
        {
            UvcBuffer *buffer = new UvcBuffer();
            buffer->setBackendBuffer(thermal_luma.data, thermal_luma.rows, thermal_luma.cols, thermal_luma.step, thermal_luma.total());
            QVideoFrame mQvidframe(buffer, m_format.frameSize(), m_format.pixelFormat());
            //qDebug() << "mQvidframe ready " << mQvidframe;
            emitFrameReady(mQvidframe);
            recordThisFrame(mQvidframe);
            savepictures(mQvidframe);
        }
        //if((frame_no++)%2 == 0) usleep(30000);
        if((frame_no++) % 61 == 0 ){
            Millis = omillis();
            //qDebug() << "Real time FPS OpenCV = " << 61000/(Millis - Millis_pre);
            Millis_pre = Millis;
        }
        usleep(100);
        //if(_mOCV_instance > 2) usleep(55000);
    }
}

void OCVVideoCapture::recordThisFrame(const QVideoFrame &frame){
    if(RecordVideo){
        if(frameImageSaved[_mOCV_instance]){
            //Only save the video frame of the camera in the main view
            //Todo: need to be able to save frames from other cameras to different videos too
            //if(_camera_number == globalVideoViewOrderNo){
            frameImage[_mOCV_instance] = qt_imageFromVideoFrame(frame);
            frameImageReady[_mOCV_instance] = true;
            frameImageSaved[_mOCV_instance] = false;
            //}
        }
    }
}
void OCVVideoCapture::savepictures(const QVideoFrame &frame){
    if(SaveAPicture){
        char fileName[150];
        //sprintf(fileName, "/media/pi/VUIR_DATA/%s/VuIRBoson%01d_%03d.jpg", sub_folder_name, _mOCV_instance, _pictureNo++);
        sprintf(fileName, "/mnt/suascom/VUIR_DATA/%s/VuIRBoson%01d_%03d.jpg", sub_folder_name, _mOCV_instance, _pictureNo++);
        //"/mnt/suascom/VuIRBoson%02d_%1.jpg"
        qt_imageFromVideoFrame(frame).save(fileName, 0, 100);
        SaveAPicture = false;
    }
}
void OCVVideoCapture::setVideoFormat(const QVideoSurfaceFormat &format){
    m_uvc_format = format;

    switch(format.pixelFormat())
    {
    case QVideoFrame::Format_YUV420P:
        m_format = QVideoSurfaceFormat(format.frameSize(), format.pixelFormat());
        break;
    case QVideoFrame::Format_RGB24:
        m_format = QVideoSurfaceFormat(format.frameSize(), QVideoFrame::Format_RGB32);
        //m_format = QVideoSurfaceFormat(format.frameSize(), QVideoFrame::Format_RGB24);
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
}

QImage  OCVVideoCapture::cvMatToQImage( const cv::Mat &inMat )
{
    switch ( inMat.type() )
    {
    // 8-bit, 4 channel
    case CV_8UC4:
    {
        QImage image( inMat.data,
                      inMat.cols, inMat.rows,
                      static_cast<int>(inMat.step),
                      QImage::Format_ARGB32 );
        return image;
    }

        // 8-bit, 3 channel
    case CV_8UC3:
    {
        QImage image( inMat.data,
                      inMat.cols, inMat.rows,
                      static_cast<int>(inMat.step),
                      QImage::Format_RGB888 );
        return image;
    }

        // 8-bit, 1 channel
    case CV_8UC1:
    {
//#if QT_VERSION >= QT_VERSION_CHECK(5, 5, 0)
        QImage image( inMat.data,
                      inMat.cols, inMat.rows,
                      static_cast<int>(inMat.step),
                      QImage::Format_Grayscale8 );

        return image;
    }

    default:
        qWarning() << "ASM::cvMatToQImage() - cv::Mat image type not handled in switch:" << inMat.type();
        break;
    }

    return QImage();
}

QPixmap OCVVideoCapture::cvMatToQPixmap( const cv::Mat &inMat )
{
    return QPixmap::fromImage( cvMatToQImage( inMat ) );
}

void OCVVideoCapture::emitFrameReady(const QVideoFrame &frame)
{
    emit frameReady(frame);
}
