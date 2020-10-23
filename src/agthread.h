#ifndef AGTHREAD_H
#define AGTHREAD_H

#include <QObject>
#include <QString>
#include <QThread>
#include <QMutex>
#include <QDebug>
#include <QMutexLocker>
#include "uvcacquisition.h"
#include "convenientserial.h"
#include "ag_aux_funcs.h"
#include "pigpio.h"
//#include <wiringPiI2C.h>

class AGThread : public QThread
{
public:
    AGThread(QString s, QMutex* mu, int* sharedSerialPortNum, int *sharedBosonRes0);
    int* serialPortNum;
    int* bosonRes0;
private:
    QString name;
    QMutex* mutex;
protected:
    void run();
};

#endif // AGTHREAD_H
