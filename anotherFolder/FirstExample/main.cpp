#include <QCoreApplication>
#include <iostream>
#include <HelloWorld.h>
#include <Base.h>
#include <Derived.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Derived* derivedptr = new Derived[3]{{130,200, 400},{1,2,3},{10,20,30}};
    derivedptr->print();
    derivedptr++;

    derivedptr->print();
    derivedptr++;

    derivedptr->print();

    delete derivedptr;
    return a.exec();
}
