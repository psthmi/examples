import QtQuick 2.8
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtGraphicalEffects 1.0


Window {
    visible: true
    height: 1000
    width: 1000

    Square
    {
        value: true
        onPressed:
        {
            console.log("Capture Mouse Area pressed from Blue")
        }
    }
}

