#include <QCoreApplication>
#include <ModelData.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ModelData modelData;
    ScreenData newScreen;
    newScreen.buttonName = "radio";
    newScreen.imagePath = "../../";
    newScreen.value = 10;

    modelData.setData(newScreen);
    modelData.getData();

    return a.exec();
}
