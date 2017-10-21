#include "CppButton.h"
#include <iostream>


CppButton::CppButton(QObject *parent) : QObject(parent)
{
    mFirstScreenRootItem = nullptr;
}

void CppButton::onPressed()
{
    std::cout << "onPressed received onto CPP side" << std::endl;
    //get Rectangle qml object
    //set color property of rectangle
    QQuickItem* rectangle = mFirstScreenRootItem->findChild<QQuickItem*>("FirstScreenRectangle");
    rectangle->setProperty("color", "red");
}


void CppButton::onReleased()
{
    std::cout << "onReleased received onto CPP side" << std::endl;
    QQuickItem* rectangle = mFirstScreenRootItem->findChild<QQuickItem*>("FirstScreenRectangle");
    rectangle->setProperty("color", "yellow");
}


void CppButton::onEntered()
{
    std::cout << "onEntered received onto CPP side" << std::endl;
    QQuickItem* rectangle = mFirstScreenRootItem->findChild<QQuickItem*>("FirstScreenRectangle");
    rectangle->setProperty("color", "green");
}


void CppButton::onExited()
{
    std::cout << "onExited received onto CPP side" << std::endl;
    QQuickItem* rectangle = mFirstScreenRootItem->findChild<QQuickItem*>("FirstScreenRectangle");
    rectangle->setProperty("color", "yellow");
}


void CppButton::onButtonStateChanged(QVariant value)
{
   std::cout << "onButtonStateChanged received on CPP with value " << value.toInt() << std::endl;
}


void CppButton::setFirstScreen(QQuickItem *rootItem)
{
    mFirstScreenRootItem = rootItem;
}
