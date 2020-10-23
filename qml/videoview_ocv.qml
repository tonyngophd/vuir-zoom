import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.11
import VuIRZoom 1.0

Item {
    id: videoView
    anchors.fill: parent
    smooth: false

    property alias videoOutput: videoOutput
    property alias  videoView: videoView
    property alias occ: occ
    property alias ocvplayer: ocvplayer

    OCVVideoCapture {
        id: occ
    }

    OCVVideoProducer {
        id: ocvplayer
        ocv: occ
    }


    VideoOutput {
        id: videoOutput
        property string viewLocation: ""
        antialiasing: false
        smooth: false
        fillMode: VideoOutput.PreserveAspectFit
        source: ocvplayer
    }
}
