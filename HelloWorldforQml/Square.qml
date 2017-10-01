import QtQuick 2.8

Item {
    id: root
    property bool value : false
    property color rectangleColor: "green"
    signal pressed

    Rectangle
    {
        id : rect
        x: 20
        y: 20
        width: 200
        height: 200
        color: root.rectangleColor
        visible: root.value

        NumberAnimation on x
        {
            to: 400
            duration: 4000
        }

        Behavior on x
        {
            NumberAnimation {
                duration: 2000
            }
        }

        Behavior on y
        {
            NumberAnimation {
                duration: 2000
            }
        }
    }

    MouseArea
    {
        anchors.fill: rect
        onPressed:
        {
            rect.x = rect.x + 200
            rect.y = rect.y + 200
            console.log("value of X" + rect.x)
            root.pressed()
        }
    }
}
