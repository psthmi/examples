import QtQuick 2.0

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
}
