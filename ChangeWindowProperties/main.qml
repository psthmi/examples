import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    id: rootWindow
    visible: true
    width: 400
    height: 400
    title: qsTr("Hello World")
    Rectangle
    {
        id: rectangle
        objectName: "myRectangle"
        height: 100
        width: 100
        color: "green"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log(qsTr('Clicked on background'))
            rectangle.width = rectangle.width + 100
            rectangle.height = rectangle.height + 100
            rootWindow.width = rootWindow.width + 100
            rootWindow.height = rootWindow.height + 100

        }
    }
}
