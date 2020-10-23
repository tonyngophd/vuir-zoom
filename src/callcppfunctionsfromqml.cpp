#include "callcppfunctionsfromqml.h"
#include "globalvariables.h"

CallCPPFunctionsFromQML::CallCPPFunctionsFromQML(QObject *parent) : QObject(parent)
{

}

int CallCPPFunctionsFromQML::number_of_Cameras(){
    return NumberOfCameras;
}

void CallCPPFunctionsFromQML::confirm_camera_number_received(int number_received){
    numberOfCameras_Confirmed_by_QML = number_received;
}
