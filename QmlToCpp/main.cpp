#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QQuickWindow>
#include <QQuickItem>
#include <iostream>


using namespace std;


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    QObject* object = engine.rootObjects().at(0);
    QQuickWindow* mainWindow = qobject_cast<QQuickWindow*>(object);

    if (mainWindow != nullptr)
    {
        QQuickItem* rectangle = mainWindow->findChild<QQuickItem*>("rectangle");

        if (rectangle != nullptr)
        {
            cout << "Rectangle Found" << endl;
            rectangle->setProperty("height", 50);
            rectangle->setProperty("width", 100);
        }
        else
        {
            cout << "Rectangle Not Found" << endl;
        }
    }

    return app.exec();
}
