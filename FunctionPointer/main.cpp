#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>
#include <PointerToClassMember.h>


int (*functionPointer)(int value1, int value2);

int add(int a, int b)
{
    std::cout<< "Calling add function" << std::endl;
    return a+b;
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    int PointerToClassMember::*dataPointer = &PointerToClassMember::data;

    PointerToClassMember object;

    object.*dataPointer = 20;
    std::cout << "accessing data member value" << object.data << std::endl;



    functionPointer = add;
    std::cout << functionPointer(20,30) << std::endl;
    return app.exec();
}
