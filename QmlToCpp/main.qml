import QtQuick 2.8
import QtQuick.Controls 1.4
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle
    {
        id: rectangle
        objectName: "rectangle"
        height: 200
        width: 400
        color: "green"
    }

    MouseArea
    {
        id: mousearea
        anchors.fill: rectangle
        objectName: "mousearea"
        onClicked:
        {
            console.log(qsTr('Clicked on Recatngle"'))
        }
    }

    Button
    {
        id: button
        x: 400
        y: 400
        text: "ChangeColor"
    }
}
