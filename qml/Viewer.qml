import QtQuick 2.11
import QtMultimedia 5.11
import VuIRZoom 1.0

ViewerForm {

    /*Item {
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


        property alias mouseareaid: mouseareaid
        property alias mainRowLayout: mainRowLayout
        smooth: false

        UvcAcquisition {
            id: acq
        }
        UvcAcquisition {
            id: acq1
        }


        UvcVideoProducer {
            id: player
            uvc: acq//acs[0]
        }

        UvcVideoProducer {
            id: player1
            uvc: acq1 //acs[1]
        }



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
    }*/



    property int wMain: parent.height*5/4
    property int hMain: mainRowLayout.height
    property int wTop: (mainRowLayout.height*8/5 - wMain)*videoOutput1.sideVideoScale
    property int hTop: wTop*4/5
    property int wMiddle: (mainRowLayout.height*8/5 - wMain)*videoOutput1.sideVideoScale
    property int hMiddle: wMiddle*4/5
    property int wBottom: (mainRowLayout.height*8/5 - wMain)*videoOutput1.sideVideoScale
    property int hBottom: wBottom*4/5

    property int margin: (mainRowLayout.width - mainRowLayout.height * 8/5)/2
    property int i: 0
    property int j: 1
    property variant zs: [0, 1, 2, 3]
    //property alias swapviews: swapviews

    VideoViewControllerQML {
        id: videoViewsController_ID
        onRearangeVideoViewsSignal: {
            console.log("in QML mainViewNo = ", mainViewNo)
            swapviews_with_numbers(mainViewNo)
        }
    }

    acq {
        onRearangeVideoViewsSignal: {
            console.log("in QML mainViewNo = ", mainViewNo)
            swapviews_with_numbers(mainViewNo)
        }
    }

    mouseareaid {
        onClicked: {
            swapviews()
        }
    }

    function swapviews_with_numbers(mainViewNo) {
        if(mainViewNo === 0){
            //move videoOutput from side view to main view
            //videoOutput.visible = true
            videoOutput.viewLocation = "mv"
            videoOutput.anchors.left = undefined
            videoOutput.anchors.right = mainRowLayout.right
            videoOutput.anchors.top = mainRowLayout.top
            videoOutput.anchors.bottom = mainRowLayout.bottom
            videoOutput.width = wMain
            videoOutput.height = hMain
            videoOutput.anchors.leftMargin = undefined
            videoOutput.anchors.rightMargin = margin
            videoOutput.z = zs[0]
            //move videoOutput1 from main view to side view
            //videoOutput1.visible = false
            videoOutput1.viewLocation = "st"
            videoOutput1.anchors.left = mainRowLayout.left
            videoOutput1.anchors.right = undefined
            videoOutput1.anchors.top = mainRowLayout.top
            videoOutput1.anchors.bottom = undefined
            videoOutput1.width = wTop
            videoOutput1.height = hTop
            videoOutput1.anchors.leftMargin = margin
            videoOutput1.anchors.rightMargin = undefined
            videoOutput1.z = zs[1]

        } else {
            //move videoOutput from main view to side view
            //videoOutput.visible = false
            videoOutput.viewLocation = "st"
            videoOutput.anchors.left = mainRowLayout.left
            videoOutput.anchors.right = undefined
            videoOutput.anchors.top = mainRowLayout.top
            videoOutput.anchors.bottom = undefined
            videoOutput.width = wTop
            videoOutput.height = hTop
            videoOutput.anchors.leftMargin = margin
            videoOutput.anchors.rightMargin = undefined
            videoOutput.z = zs[1]
            //move videoOutput1 from side view to main view
            //videoOutput1.visible = true
            videoOutput1.viewLocation = "mv"
            videoOutput1.anchors.left = undefined
            videoOutput1.anchors.right = mainRowLayout.right
            videoOutput1.anchors.top = mainRowLayout.top
            videoOutput1.anchors.bottom = mainRowLayout.bottom
            videoOutput1.width = wMain
            videoOutput1.height = hMain
            videoOutput1.anchors.leftMargin = undefined
            videoOutput1.anchors.rightMargin = margin
            videoOutput1.z = zs[0]
        }
    }

    function swapviews() {
        console.log("View.qml swapviews()")
        if(videoOutput.viewLocation.localeCompare("mv") === 0){
            //move it to side view
            videoOutput.viewLocation = "st"
            videoOutput.anchors.left = mainRowLayout.left
            videoOutput.anchors.right = undefined
            videoOutput.anchors.top = mainRowLayout.top
            videoOutput.anchors.bottom = undefined
            videoOutput.width = wTop
            videoOutput.height = hTop
            videoOutput.anchors.leftMargin = margin
            videoOutput.anchors.rightMargin = undefined
            videoOutput.z = zs[1]
            //move side view to main view
            videoOutput1.viewLocation = "mv"
            videoOutput1.anchors.left = undefined
            videoOutput1.anchors.right = mainRowLayout.right
            videoOutput1.anchors.top = mainRowLayout.top
            videoOutput1.anchors.bottom = mainRowLayout.bottom
            videoOutput1.width = wMain
            videoOutput1.height = hMain
            videoOutput1.anchors.leftMargin = undefined
            videoOutput1.anchors.rightMargin = margin
            videoOutput1.z = zs[0]
        } else {
            //move it to side view
            videoOutput1.viewLocation = "st"
            videoOutput1.anchors.left = mainRowLayout.left
            videoOutput1.anchors.right = undefined
            videoOutput1.anchors.top = mainRowLayout.top
            videoOutput1.anchors.bottom = undefined
            videoOutput1.width = wTop
            videoOutput1.height = hTop
            videoOutput1.anchors.leftMargin = margin
            videoOutput1.anchors.rightMargin = undefined
            videoOutput1.z = zs[1]
            //move side view to main view
            videoOutput.viewLocation = "mv"
            videoOutput.anchors.left = undefined
            videoOutput.anchors.right = mainRowLayout.right
            videoOutput.anchors.top = mainRowLayout.top
            videoOutput.anchors.bottom = mainRowLayout.bottom
            videoOutput.width = wMain
            videoOutput.height = hMain
            videoOutput.anchors.leftMargin = undefined
            videoOutput.anchors.rightMargin = margin
            videoOutput.z = zs[0]
        }
    }

}

/*##^## Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
 ##^##*/
