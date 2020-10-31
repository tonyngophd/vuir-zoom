#ifndef SAVEVIDFRAMESTHREAD_H
#define SAVEVIDFRAMESTHREAD_H

#include <QThread>
#include <QMutex>
#include <QDebug>
#include <QImage>
#include <QProcess>
#include <sys/time.h>
#include "../libqtavi/QAviWriter.h"

class SaveVidFramesThread : public QThread
{
public:
    SaveVidFramesThread();//QImage outImage, int *outfileNo);
    void addFrameThreadFunc(int quality);

private:
    QImage combinedImage;
    int *fileNo;
    QAviWriter writer;
    int frameImageNumber = 0;

protected:
    void run();
};

#endif // SAVEVIDFRAMESTHREAD_H
