#include "callcppfunctionsfromqml.h"
#include "globalvariables.h"

CallCPPFunctionsFromQML::CallCPPFunctionsFromQML(QObject *parent)
    : QObject(parent)
{

}

int CallCPPFunctionsFromQML::number_of_Cameras(){
    return NumberOfCameras;
}

void CallCPPFunctionsFromQML::confirm_camera_number_received(int number_received){
    numberOfCameras_Confirmed_by_QML = number_received;
}

int CallCPPFunctionsFromQML::type_of_Gimmera(){
    return typeOfGimmera;
}
void CallCPPFunctionsFromQML::confirm_type_of_gimmera_received(int type_received){
    typeOfGimmera_Confirmed_by_QML = type_received;
}
