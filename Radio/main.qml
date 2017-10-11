import QtQuick 2.8
import QtQuick.Window 2.2
import QtMultimedia 5.9
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Window {
    id : root
         visible : true
         width :  360
        height : 360
        color :  '#ffffff'
        MouseArea {
            anchors.fill : parent
             onClicked : {
                men. visible = false ;
                radio. start ( ) ;
           }
        }
        Radio  {
                id : radio
                 band :  Radio . FM
            }


        Rectangle {
            id : display
             anchors.top : parent. top
            anchors.topMargin :  10
            anchors.horizontalCenter : parent. horizontalCenter
            width : root. width / 2
            height : root. height / 4
            color :  "green"
            Text  {
                        id : name
                         text : radio. radioData . stationName
                        anchors.top : parent.top
                        anchors.topMargin :  10
                        anchors.horizontalCenter : parent. horizontalCenter
                        color : "white"
                    }

                    Text  {
                        id : freq
                         anchors.top : name. bottom
                        anchors.topMargin :  5
                        anchors.horizontalCenter : parent. horizontalCenter
                        text :  ""  + radio. frequency  /  1000  +  "kHz"
                        color : "white"
                    }

                    Text  {
                        text : radio. radioData . radioText
                        anchors.top : freq. bottom
                        anchors.topMargin :  10
                        anchors.horizontalCenter : parent. horizontalCenter
                        color : "white"
                    }
        }
        Rectangle {
            id : touchmenu
             anchors.right : parent. right
            anchors.top : parent. top
            Image  {
                id : img
                 anchors.right : parent.right
                anchors.rightMargin :  5
                anchors.top : parent. top
                anchors.topMargin :  5
              // fillMode:
                MouseArea {
                    anchors.fill : parent
                     onClicked : men. visible  = true ;
            }
        }
        }

        Slider  {
            id : sliderHorizontal1
             tickmarksEnabled : true
             anchors.left : parent. left
            anchors.leftMargin :  50
            stepSize : radio. frequencyStep
            minimumValue :  88
            value :  0.5
            maximumValue :  108
            anchors.right : parent. right
            anchors.rightMargin :  50
            anchors.bottom : parent. bottom
            anchors.bottomMargin :  218
            anchors.top: parent. top
            anchors.topMargin :  120
            onValueChanged : radio. frequency  = value
             updateValueWhileDragging : true
             style : SliderStyle {
                groove :  Rectangle {
                    implicitWidth :  200
                    implicitHeight :  4
                    color :  "gray"
                    radius :  8
                }
                handle :  Rectangle  {
                    anchors.centerIn : parent
                     color :control. pressed  ?  "# 00BFFF"  :  "black"
                    border.color :  "gray"
                    border.width :  2
                    implicitWidth :  10
                    implicitHeight :  20
                    radius :  5
                }

            }
        }
        Rectangle {
            id : fleche
             width :  100
            anchors.top : parent. top
            anchors.topMargin :  180
            anchors.right : parent. right
            anchors.rightMargin :  130
            anchors.bottom : sliderHorizontal1. top
            anchors.bottomMargin :  - 110
            clip : false
             opacity :  0.3
            //anchors.centerIn: parent
            //anchors.horizontalCenter: parent.horizontalCenter


        Image  {
            id : left
             x :  2
            y :  10
            MouseArea  {
                    anchors.fill : parent
                     height : left. height
                    width : left. width
                    onClicked : { radio. tuneDown ( )
                    sliderHorizontal1. activeFocusOnPress  = true
                        sliderHorizontal1. value -= 0.5
                    }
                }
        }
        Image  {
            id : right
             x :  69
            y :  10
            MouseArea  {
                    anchors.fill : parent
                     height : right. width
                    width : right. height
                    onClicked : { radio. tuneUp ( )
                        sliderHorizontal1. activeFocusOnPress  = true
                        sliderHorizontal1. value += 0.5
                    }
        }
        }
    }
}
