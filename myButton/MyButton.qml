import QtQuick 2.8

Item {

    id: root
    signal myButtonPressed;
    signal myButtonClicked;
    property int buttonHeight : 80
    property int buttonWidth: 160
    Rectangle
    {
        id: rectangle
        x: 400
        y: 400
        height: root.buttonHeight
        width: root.buttonWidth
        color: "green"
    }

    MouseArea
    {
        id: mouseArea
        anchors.fill: rectangle
        onPressed:
        {
            console.log("Mouse Area Pressed")
            root.myButtonPressed();
        }

        onClicked:
        {
            console.log("Mouse Area Clicked")
            root.myButtonClicked();
        }
    }

}
