#include <QCoreApplication>
#include <ModelData.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ModelData modelData;

    modelData.addElement(10);
    modelData.addElement(20);
    modelData.addElement(40);

    if (modelData.removeElement(0) == true)
    {
        cout << "test case passed";
    }
    else
    {
        cout << "test case failed";
    }
    modelData.removeElement(1);
    modelData.removeElement(9);

    ScreenData newScreen;
    newScreen.buttonName = "radio";
    newScreen.imagePath = "../../";
    newScreen.value = 10;

    modelData.setData(newScreen);
    modelData.getData();

    return a.exec();
}
