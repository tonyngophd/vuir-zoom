import QtQuick 2.11
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import VuIRZoom 1.0

ApplicationWindow {
    id: mainWindow
    visible: true
    width: 1280
    height:720
    //title: qsTr("VuIRZoom")

    /*Viewer {
        id: viewerForm
        anchors.fill: parent
    }*/

    property int numberOfCameras: 0
    function set_number_of_cameras(numberOfCamerasInput){
        numberOfCameras = numberOfCamerasInput;
    }
    property variant videoViewObject: [, , ,];
    property real sideVideoScale: 1.2;
    property var component_uvc;
    property int uvc_component_number: 0;
    property var component_ocv;
    property int mainMargin: 0;
    property alias callCPPFunctionsFromQML: callCPPFunctionsFromQML
    property alias timer: timer
    property int total_uvc_openings: 2;

    CallCPPFunctionsFromQML {
        id: callCPPFunctionsFromQML
    }

    Timer {
        id: timer
        interval: 1000
        running: true
        repeat: false
    }

    Component.onCompleted: {
        numberOfCameras = callCPPFunctionsFromQML.number_of_Cameras();
        callCPPFunctionsFromQML.confirm_camera_number_received(numberOfCameras);
        console.log("\n\nNumber of Cameras got from CPP = ", numberOfCameras, "\n\n");
        component_uvc = Qt.createComponent("videoview.qml");
        mainMargin = (mainWindow.width - mainWindow.height * 8 / 5) / 2;
        // 2560/1600 = 8/5 = 1.6 as tablet resolution. Pi screen resolution is 1280/720 = 16/9 = 1.777777
        // Could be 1024/768 = 4/3 if a smaller tablet is used (Samsung Tab A 8)

        var i = 0;        
        for(i=0; i < min(total_uvc_openings, numberOfCameras); i++){
            videoViewObject[i] = component_uvc.createObject(mainWindow);
            uvc_component_number = i;

            console.log("\nVideoViewObject created = ", videoViewObject[i], "\n\n mainWindow = ", mainWindow);
            if(i == 0 ){
                console.log("i = ", i);
                moveToRightView(i);
//                moveToLeftView(i);
            } else {
                console.log("i = ", i);
//                moveToRightView(i);
                moveToLeftView(i);
                //moveToSideView(i, i);
            }
        }
        if(total_uvc_openings < numberOfCameras){
            timer.start();
            component_ocv = Qt.createComponent("videoview_ocv.qml");
            for(i=total_uvc_openings; i < numberOfCameras; i++){
                videoViewObject[i] = component_ocv.createObject(mainWindow);

                console.log("\nVideoViewObject created = ", videoViewObject[i], "\n\n mainWindow = ", mainWindow);
                if(i == 0 ){
                    console.log("i = ", i);
                    moveToMainView(i);
                } else {
                    console.log("i = ", i);
                    moveToSideView(i, i);
                }
                //timer.start();
            }
        }
    }

    function moveToLeftView(vn){
        //videoViewObject[vn].acq.resumeStream();
        videoViewObject[vn].videoOutput.viewLocation = "mv";
        videoViewObject[vn].videoOutput.height = mainWindow.height*512/640;//mainWindow.height;
        videoViewObject[vn].videoOutput.width =  mainWindow.height;//videoViewObject[vn].videoOutput.height * 640 / 512;
        videoViewObject[vn].videoOutput.x = videoViewObject[vn].videoOutput.height*195/400;
        videoViewObject[vn].videoOutput.y = videoViewObject[vn].videoOutput.height*1867/3000;
        videoViewObject[vn].videoView.z = 0;
        videoViewObject[vn].videoView.rotation = 90;
        //videoViewObject[vn].videoView.visible = true;
    }
    function moveToRightView(vn){
        //videoViewObject[vn].acq.resumeStream();
        videoViewObject[vn].videoOutput.viewLocation = "mv";
        videoViewObject[vn].videoOutput.height = mainWindow.height*512/640;//mainWindow.height;
        videoViewObject[vn].videoOutput.width =  mainWindow.height;//videoViewObject[vn].videoOutput.height * 640 / 512;
        videoViewObject[vn].videoOutput.x = videoViewObject[vn].videoOutput.height*195/400;
        videoViewObject[vn].videoOutput.y = videoViewObject[vn].videoOutput.height*1867/3000;
        videoViewObject[vn].videoView.z = 0;
        videoViewObject[vn].videoView.rotation = -90;
        //videoViewObject[vn].videoView.visible = true;
    }

    /*MouseArea {
        id: mouseArea
        anchors.fill: parent
        opacity: 0
        z: 5
        onClicked: {
            console.log("Mouse clicked");
            for(var i=0; i < min(total_uvc_openings, numberOfCameras); i++){
                if(videoViewObject[i].videoOutput.viewLocation.localeCompare("mv") === 0){
                    moveToSideView(i, 2);
                    switch(i){
                    case 0:
                        moveToMainView(1);
                        moveToSideView(2, 1);
                        moveToSideView(3, 2);
                        break;
                    case 1:
                        moveToMainView(2);
                        moveToSideView(3, 1);
                        moveToSideView(0, 2);
                        break;
                    case 2:
                        moveToMainView(3);
                        moveToSideView(0, 1);
                        moveToSideView(1, 2);
                        break;
                    case 3:
                        moveToMainView(0);
                        moveToSideView(1, 1);
                        moveToSideView(2, 2);
                        break;
                    }

                    break;
                }
            }
        }
    }*/

    function min(input1, input2){
        return (input1 < input2)? input1 : input2;
    }

    function setView(vn, viewPosition){
        if(viewPosition === 0){
            moveToMainView(vn);
        } else {
            moveToSideView(vn, viewPosition);
        }
    }

    function setViews_From_Numbers(vp0, vp1, vp2, vp3, vp4, vp5){
        switch(numberOfCameras){
        case 6:
            setView(5, vp5);
        case 5:
            setView(4, vp4);
        case 4:
            setView(3, vp3);
        case 3:
            setView(2, vp2);
        case 2:
            setView(1, vp1);
            break;
        }
        setView(0, vp0);

        return "OK";
    }

    property int k: 1;
    function setViews_From_Numbers1(vp0, vp1, vp2, vp3, vp4, vp5){
        uvc_component_number++;
        /*videoViewObject[uvc_component_number] = component_uvc.createObject(mainWindow);
        moveToMainView(uvc_component_number);
        videoViewObject[uvc_component_number-1].destroy();*/
        videoViewObject[uvc_component_number] = component_ocv.createObject(mainWindow);
        moveToMainView(uvc_component_number);
        moveToSideView(uvc_component_number - 1, k++);
        //videoViewObject[uvc_component_number-1].destroy();
        return "OK";
    }

    function moveToMainView(vn){
        //videoViewObject[vn].acq.resumeStream();
        videoViewObject[vn].videoOutput.viewLocation = "mv";
        videoViewObject[vn].videoOutput.height = mainWindow.height;
        videoViewObject[vn].videoOutput.width =  videoViewObject[vn].videoOutput.height * 640 / 512;
        videoViewObject[vn].videoOutput.x = mainWindow.width - (videoViewObject[vn].videoOutput.width + mainMargin)
        videoViewObject[vn].videoOutput.y = 0;
        videoViewObject[vn].videoView.z = 0;
        //videoViewObject[vn].videoView.visible = true;
    }

    function moveToSideView(vn, sidePositionNumber){
        var sidePositionString = "st";
        if(sidePositionNumber === 1){
            //videoViewObject[vn].acq.resumeStream();
            sidePositionString = "st";
        } else if(sidePositionNumber === 2) {
            //videoViewObject[vn].acq.pauseStream();
            sidePositionString = "sm";
        } else if(sidePositionNumber === 3) {
            //videoViewObject[vn].acq.pauseStream();
            sidePositionString = "sb";
        }
        var mvWidth = mainWindow.height * 5 / 4;

        console.log("sidePositionString = ", sidePositionString, "sidePositionNumber = ", sidePositionNumber);

        videoViewObject[vn].videoOutput.viewLocation = sidePositionString;
        videoViewObject[vn].videoOutput.width = (mainWindow.height * 8 / 5 - mvWidth) * sideVideoScale;
        videoViewObject[vn].videoOutput.height = videoViewObject[vn].videoOutput.width * 4/5;
        videoViewObject[vn].videoOutput.x = mainMargin;
        videoViewObject[vn].videoOutput.y = (sidePositionNumber-1)*(mainWindow.height - videoViewObject[vn].videoOutput.height)/2;
        videoViewObject[vn].videoView.z = sidePositionNumber;
        //videoViewObject[vn].videoView.visible = false;
    }

    function sidePositionNumberFromString(sidePositionString){
        var sidePositionNumber = 1;
        if(sidePositionString.localeCompare("st") === 0) {
            sidePositionNumber = 1;
        } else if(sidePositionString.localeCompare("sm") === 0) {
            sidePositionNumber = 2;
        } else if(sidePositionString.localeCompare("sb") === 0) {
            sidePositionNumber = 3;
        }
        return sidePositionNumber;
    }

    function swapViews() {
        console.log("main.qml swapViews")
        //viewerForm.swapviews()

    }
    function swapviews_with_numbers(mainViewNo, sideTopViewNo, sideMidViewNo, sideBottomViewNo){
        console.log("main.qml swapviews_with_numbers, received mainViewNo = ", mainViewNo, " sideTopViewNo = ", sideTopViewNo)
        //viewerForm.swapviews_with_numbers(mainViewNo)
        moveToMainView(mainViewNo);
        moveToSideView(sideTopViewNo, sidePositionNumberFromString("st"));

        return "OK"
    }
}
