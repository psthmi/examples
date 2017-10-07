import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Timer
    {
        id: timer
        interval: 1000; repeat: true
        onTriggered:
        {
            console.log("Timer Triggerred")
            if (firstCircle.state === "go")
                firstCircle.state = "stop"
            else
                firstCircle.state = "go"
        }
    }

    Rectangle
    {
        id:rectangle
        x:20
        y: 20
        width: 200
        height: 400
        color: "light gray"
        Circle
        {
            id: firstCircle
            anchors.fill: rectangle
        }
    }

    Button
    {
        id: stopButton
        x: 20
        y: 200
        height: 100
        width: 200
        text: "Stop"
        onClicked:
        {
            timer.start()
            firstCircle.state = "go"
        }
    }

}
