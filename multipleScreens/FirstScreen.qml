import QtQuick 2.0
import QtQuick.Controls 1.4

Item
{
    id: root
    width: 400
    height: 400

    Rectangle
    {
        anchors.fill: root
        color: "green"
    }

    Component.onCompleted:
    {
        console.log("First Screen Created")
    }
    Component.onDestruction:
    {
        console.log("First screen cleared")
    }

    Loader
    {
        id: loader
    }

    Button
    {
        x: 400
        y: 400
        text: "SecondScreen"

        onClicked:
        {
            console.log("Component onCompleted")
            rootWindow.changeScreen("SecondScreen.qml")
            //loader.setSource("SecondScreen.qml")
        }
    }
}
