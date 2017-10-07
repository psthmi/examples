import QtQuick 2.8

Item
{
    id: root

    Rectangle
    {
        id: rectangle
        height: 100
        width: height
        radius: height/2
        color: "black"
    }

    states:
    [
        State
        {
            name: "stop"
            PropertyChanges {
                target: rectangle
                color: "black"
            }
        },
        State
        {
            name: "go"
            PropertyChanges {
                target: rectangle
                color: "green"
            }
        }
    ]

}
