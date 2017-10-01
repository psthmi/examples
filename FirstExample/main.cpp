#include <QCoreApplication>
#include <iostream>
#include <HelloWorld.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Hello World" << std::endl;

    HelloWorld helloWorldObject;
    helloWorldObject.print();

    return a.exec();
}
