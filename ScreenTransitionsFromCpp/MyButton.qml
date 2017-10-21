import QtQuick 2.0

Item
{
    id: rootItem
    objectName: parent.objectName
    signal pressed
    signal released
    signal entered
    signal exited
    signal buttonStateChanged(var value)

    Rectangle
    {
        id: rectangle
        width: 200
        height: 100
        color: "yellow"
        objectName: "FirstScreenRectangle"
        MouseArea
        {
            anchors.fill: parent
            hoverEnabled: true
            onPressed:
            {
                console.log("Button Mouse Area Pressed")
                rootItem.pressed();
                rootItem.buttonStateChanged(1);

            }
            onReleased:
            {
                console.log("Button Mouse Area Released")
                rootItem.released();
                rootItem.buttonStateChanged(2);
            }

            onEntered:
            {
                console.log("Button Mouse Area Entered")
                rootItem.entered();
                rootItem.buttonStateChanged(3);
            }

            onExited:
            {
                console.log("Button Mouse Area Exited")
                rootItem.exited();
                rootItem.buttonStateChanged(4);
            }
        }
    }

}
