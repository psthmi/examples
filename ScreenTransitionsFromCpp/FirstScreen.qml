import QtQuick 2.0

Item
{
    Rectangle
    {
        x: 20
        y:20
        width: 500
        height: 200
        color: "blue"
    }
    MyButton
    {
        x: 300
        y: 300
        objectName: "FirstScreenFirstButton"
    }

    MyButton
    {
        x: 0
        y: 300
        objectName: "FirstScreenSecondButton"
    }
}
