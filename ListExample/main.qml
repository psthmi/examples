import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle
    {
        width: 640; height: 180

        Component {
            id: contactDelegate
            Rectangle {
                width: 150; height: 150
                border.width: 10
                border.color: "green"
                color: "light Gray"
                Column
                {
                    Text { text: name }
                    Text {text: number }
                }
                  }
        }

        ListView {
            anchors.fill: parent
            model: ContactModel {}
            delegate: contactDelegate
            highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            focus: true
            snapMode: GridView.SnapToRow
        }
    }
}
