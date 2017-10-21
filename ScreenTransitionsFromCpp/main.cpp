#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickWindow>
#include <QQmlComponent>
#include <QQuickItem>
#include <QTimer>
#include <CppTimer.h>
#include <CppButton.h>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    QQuickWindow* mainWindow = qobject_cast<QQuickWindow*>(engine.rootObjects().at(0));

    QQmlComponent* firstQmlComponent = new QQmlComponent(&engine, QUrl("qrc:/FirstScreen.qml"));
    QQuickItem* firstScreenRootItem = qobject_cast<QQuickItem*>(firstQmlComponent->create());
    firstScreenRootItem->setParentItem(mainWindow->contentItem());

    QQmlComponent* qmlComponent = new QQmlComponent(&engine, QUrl("qrc:/SecondSCreen.qml"));
    QQuickItem* secondScreenRootItem = qobject_cast<QQuickItem*>(qmlComponent->create());
    secondScreenRootItem->setParentItem(mainWindow->contentItem());

    CppTimer cppTimer;
    cppTimer.setFirstScreenRootItem(firstScreenRootItem);
    QTimer timer;
    timer.setInterval(5000);
    QObject::connect(&timer, SIGNAL(timeout()), &cppTimer, SLOT(onTimerExpired()));

    CppButton button;
    button.setFirstScreen(firstScreenRootItem);
    //extract  "FirstScreenFirstButton" QObject
    QQuickItem* firstButton = firstScreenRootItem->findChild<QQuickItem*>("FirstScreenFirstButton");

    QObject::connect(firstButton, SIGNAL(pressed()), &button, SLOT(onPressed()));
    QObject::connect(firstButton, SIGNAL(released()), &button, SLOT(onReleased()));
    QObject::connect(firstButton, SIGNAL(entered()), &button, SLOT(onEntered()));
    QObject::connect(firstButton, SIGNAL(exited()), &button, SLOT(onExited()));

    QObject::connect(firstButton, SIGNAL(buttonStateChanged(QVariant)), &button, SLOT(onButtonStateChanged(QVariant)));

    //timer.start();

    return app.exec();
}
