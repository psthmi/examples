#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <Signals.h>
#include <Slots.h>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Signals first;
    Slots second;
    QObject::connect(&first,
                     SIGNAL(heightChanged(int)),
                     &second,
                     SLOT(onHeightChanged(int)));

    first.setHeight(400);

    return app.exec();
}
