import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MyButton
    {
        buttonHeight: 100
        buttonWidth: 200

        onMyButtonPressed:
        {
            console.log("MyButton Pressed")
        }

        onMyButtonClicked:
        {
            console.log("MyButton Clicked")
        }
    }

}
