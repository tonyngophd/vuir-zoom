#include "agtimer.h"

AGTimer::AGTimer()
{
    // create a timer
    //timer = new QTimer(this);

    // setup singal and slot
    //connect(timer, SIGNAL(timeout()), this, SLOT(AGTimerSlot()));
    QTimer::singleShot(5, this, SLOT(AGTimerSlot()));

    // interval in milliseconds
    //timer->start(500);
}

void AGTimer::AGTimerSlot(){
    static int i = 0;
    qDebug() << "Timer. i = " << i++;
}
