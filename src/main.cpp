#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QAbstractVideoSurface>
#include <QQmlEngine>
#include <QQmlContext>
#include <QDebug>
#include <QObject>
#include <libuvc/libuvc.h>
#include "uvcvideoproducer.h"
#include "uvcacquisition.h"
#include "ocvvideocapture.h"
#include "ocvvideoproducer.h"
#include "bosonvariation.h"
#include "leptonvariation.h"
#include "dataformatter.h"
#include "rangeprovider.h"
#include "agthread.h"
#include "agtimer.h"
#include "savevidframesthread.h"
#include "globalvariables.h"
#include "globalforclassvariables.h"
#include "videoviewscontroller.h"
#include "callcppfunctionsfromqml.h"

#ifdef QTVIDRECORD
QCamera *mCamera;
QMediaRecorder *mRecorder;
QVideoEncoderSettings mEncoderSettings;
QAbstractVideoSurface *mVidSurface;#include "uvcvideoproducer.h"
#endif

QObject *mainUIObject;

int main(int argc, char *argv[])
{
    QMutex mMutex;
    int sharedSerialPortNum = -1, sharedBosonRes0 = 320;
    AGThread thread1("fromGround", &mMutex, &sharedSerialPortNum, &sharedBosonRes0);

    thread1.start();
    while(NumberOfCameras == 0){
        usleep(1000);
    } //pause until some camera found

    if(NumberOfCameras < 0){
        system("sh /home/pi/relaunch_vuir.sh");
        //exit(EXIT_FAILURE);
        return 0;
    }

    AGThread thread2("toGround", &mMutex, &sharedSerialPortNum, &sharedBosonRes0);
    thread2.start();
    //AGTimer timer;

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    //qmlRegisterType<ClassName_CPP>("com.mycompany.qmlName", version_major, version_minor, "ClassName_QML");
    qmlRegisterType<CallCPPFunctionsFromQML>("VuIRZoom", 1,0, "CallCPPFunctionsFromQML");
    qmlRegisterType<UvcVideoProducer>("VuIRZoom", 1,0, "UvcVideoProducer");
    qmlRegisterType<UvcAcquisition>("VuIRZoom", 1,0, "UvcAcquisition");
    qmlRegisterType<OCVVideoProducer>("VuIRZoom", 1,0, "OCVVideoProducer");
    qmlRegisterType<OCVVideoCapture>("VuIRZoom", 1,0, "OCVVideoCapture");
    qmlRegisterType<VideoViewsController>("VuIRZoom", 1, 0, "VideoViewControllerQML");
    qmlRegisterUncreatableType<BosonVariation>("VuIRZoom", 1,0, "BosonVariation", "");
    qmlRegisterUncreatableType<LeptonVariation>("VuIRZoom", 1,0, "LeptonVariation", "");
    qmlRegisterUncreatableType<AbstractCCInterface>("VuIRZoom", 1,0, "AbstractCCInterface", "");
    qmlRegisterUncreatableType<DataFormatter>("VuIRZoom", 1,0, "DataFormatter", "");


    registerLeptonVariationQmlTypes();
    registerBosonVariationQmlTypes();

    QQmlApplicationEngine engine;
    //UvcAcquisition mUvcAcquisition;
    //engine.rootContext()->setContextProperty("UvcAcquisition", &mUvcAcquisition);
    //engine.addImageProvider(QLatin1String("palettes"), new RangeProvider);
    //engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    //QQmlEngine connect_engine;
    QQmlComponent component(&engine, QUrl(QLatin1String("qrc:/main.qml")));
    mainUIObject = component.create();

    SaveVidFramesThread mSaveVidFramesThread;
    mSaveVidFramesThread.start();

    return app.exec();
}
