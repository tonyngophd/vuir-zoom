#ifndef CALLCPPFUNCTIONSFROMQML_H
#define CALLCPPFUNCTIONSFROMQML_H

#include <QObject>

class CallCPPFunctionsFromQML : public QObject
{
    Q_OBJECT
public:
    explicit CallCPPFunctionsFromQML(QObject *parent = nullptr);
    Q_INVOKABLE int number_of_Cameras();
    Q_INVOKABLE void confirm_camera_number_received(int number_received);

signals:

public slots:

private:
    int numberOfCameras_Confirmed_by_QML = 0;
};

#endif // CALLCPPFUNCTIONSFROMQML_H
