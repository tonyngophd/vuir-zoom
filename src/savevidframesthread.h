#ifndef SAVEVIDFRAMESTHREAD_H
#define SAVEVIDFRAMESTHREAD_H

#include <QThread>
#include <QMutex>
#include <QDebug>
#include <QImage>
#include <QProcess>
#include <sys/time.h>

class SaveVidFramesThread : public QThread
{
public:
    SaveVidFramesThread();//QImage outImage, int *outfileNo);

private:
    QImage combinedImage;
    int *fileNo;

protected:
    void run();
};

#endif // SAVEVIDFRAMESTHREAD_H
