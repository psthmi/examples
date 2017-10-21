#include "CppTimer.h"
#include <iostream>


CppTimer::CppTimer(QObject *parent) : QObject(parent)
{
    mFirstScreenRootItem = nullptr;
}

void CppTimer::onTimerExpired()
{
    std::cout << "Timer Expired" << std::endl;
    //release first screen from window

    mFirstScreenRootItem->setParentItem(nullptr);
}

void CppTimer::setFirstScreenRootItem(QQuickItem *item)
{
    mFirstScreenRootItem = item;
}
