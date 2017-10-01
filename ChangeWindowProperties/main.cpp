#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QObject>
#include <iostream>
#include <QQuickWindow>


using namespace std;


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QList<QObject*> listOfObjects = engine.rootObjects();
    cout << "List of Objects returned from main qml are " << listOfObjects.size();

    QObject* qObject = listOfObjects[0];
    QQuickWindow* rootWindow = qobject_cast<QQuickWindow*> (qObject);
    rootWindow->setProperty("width", 1000);

    QObject* rectangle = rootWindow->findChild<QObject*>("myRectangle");
    if (rectangle == nullptr)
    {
        cout << "rectangle NOT found" << endl;
    }
    else
    {
        cout << "rectangle Found";
    }
    return app.exec();
}
