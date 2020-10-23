import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.11
import VuIRZoom 1.0

//import "qrc:/controls"
//import "qrc:/images"
Item {
    id: mainItem
    anchors.fill: parent
    height: 720
    width: 1280

    //property list videoViews: [videoOutput, videoOutput1]
    property alias acq: acq
    property alias player: player
    property alias videoOutput: videoOutput //videoViews[0]

    property alias acq1: acq1
    property alias player1: player1
    property alias videoOutput1: videoOutput1 //videoViews[1]

    /*property alias acq2: acq2
    property alias player2: player2
    property alias videoOutput2: videoOutput2 //videoViews[1]*/

    property alias mouseareaid: mouseareaid
    property alias mainRowLayout: mainRowLayout
    smooth: false

    UvcAcquisition {
        id: acq
    }
    UvcAcquisition {
        id: acq1
    }
    /*UvcAcquisition {
        id: acq2
    }*/

    //property list acs: [acq, acq1]

    UvcVideoProducer {
        id: player
        uvc: acq//acs[0]
    }

    UvcVideoProducer {
        id: player1
        uvc: acq1 //acs[1]
    }

    /*UvcVideoProducer {
        id: player2
        uvc: acq2
    }*/


    RowLayout {
        id: mainRowLayout
        spacing: 0
        anchors.fill: parent
        MouseArea {
            id: mouseareaid
            anchors.fill: parent
            opacity: 0
            z: 5
        }

        VideoOutput {
            id: videoOutput
            property string viewLocation: "mv" // main view
            z: 0
            height: parent.height
            width: height * 640 / 512
            antialiasing: true
            smooth: true
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.rightMargin: (parent.width - parent.height * 8 / 5)
                                 / 2 // 2560/1600 = 8/5 = 1.6 as tablet resolution. Pi screen resolution is 1280/720 = 16/9 = 1.777777
            fillMode: VideoOutput.PreserveAspectFit
            source: player
        }
        VideoOutput {
            id: videoOutput1
            z: 1
            property string viewLocation: "st" // side-top view
            property real sideVideoScale: 1.2
            width: (parent.height * 8 / 5 - videoOutput.width) * sideVideoScale
            height: width * 4 / 5 // 5/4 = 640/512 = 320/256 = 1.25
            antialiasing: true
            smooth: true
            fillMode: VideoOutput.PreserveAspectFit
            source: player1
            anchors.left: parent.left
            anchors.top: parent.top // Side TOP view
            anchors.leftMargin: (parent.width - parent.height * 8 / 5) / 2
        }
        /*VideoOutput {
            id: videoOutput2
            z: 2
            property string viewLocation: "sm" // side-middle view
            property real sideVideoScale: 1.2
            width: (parent.height * 8 / 5 - videoOutput.width) * sideVideoScale
            height: width * 4 / 5 // 5/4 = 640/512 = 320/256 = 1.25
            antialiasing: true
            smooth: true
            fillMode: VideoOutput.PreserveAspectFit
            source: player2
            anchors.left: parent.left
            anchors.verticalCenter: parent.verticalCenter // Side MIDDLE view
            anchors.leftMargin: (parent.width - parent.height * 8 / 5) / 2
        }*/
    }
}



