import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtMultimedia 5.11
import VuIRZoom 1.0

Item {
    id: videoView
    anchors.fill: parent
    antialiasing: false
    smooth: false

    property alias videoOutput: videoOutput
    property alias  videoView: videoView
    property alias acq: acq
    property alias player: player

    UvcAcquisition {
        id: acq
    }

    UvcVideoProducer {
        id: player
        uvc: acq
    }


    VideoOutput {
        id: videoOutput
        property string viewLocation: ""
        antialiasing: false
        smooth: false
        fillMode: VideoOutput.PreserveAspectFit
        source: player
    }
}
