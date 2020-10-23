#ifndef AGTIMER_H
#define AGTIMER_H

#include <QObject>
#include <QDebug>
#include <QTimer>

class AGTimer : public QObject
{
    Q_OBJECT
public:
    AGTimer();
    QTimer *timer;

public slots:
    void AGTimerSlot();
};

#endif // AGTIMER_H
