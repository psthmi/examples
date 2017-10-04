import QtQuick 2.8
import QtQuick.Window 2.2
import org.pisquare.dev.project1 1.0

Window {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    RectangleProperties
    {
        id: newRectangleProperties
        height: 400
        width: 500
    }

    RectangleProperties
    {
        id: secondon
        height: 200
        width: 200
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log(qsTr('Clicked on background'))
            mainRectangle.setHeight(400);
            mainRectangle.setWidth(400);
        }
    }

    GraphicsInfo
    {

    }

    Rectangle
    {
        width: mainRectangle.width
        height: mainRectangle.height
        color: "green"
    }
}
