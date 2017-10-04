#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <RectangleProperties.h>
#include <QQmlContext>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<RectangleProperties>("org.pisquare.dev.project1", 1, 0, "RectangleProperties");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
