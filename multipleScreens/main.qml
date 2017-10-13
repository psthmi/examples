import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 1.4


Window
{
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Loader
    {
        id: loader
        onLoaded:
        {
            console.log("Loader finished")
        }
    }

    Component.onCompleted:
    {
        console.log("Component onCompleted")
        loader.setSource("FirstScreen.qml");
    }

    Button
    {
        x: 400
        y: 400
        text: "ChangeScreen"

        onClicked:
        {
            console.log("Component onCompleted")
            loader.setSource("SecondScreen.qml")
        }


    }

}
