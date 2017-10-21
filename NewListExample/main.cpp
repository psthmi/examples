#include <QCoreApplication>
#include <ModelData.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ModelData modelData;

    ButtonData radioButton;
    radioButton.name = "radio";
    radioButton.url = "radio.png";
    radioButton.height = 40;
    radioButton.width = 40;


    modelData.addEntry(radioButton);
    modelData.addEntry(mediaButton);
    modelData.addEntry(settingsButton);
    modelData.addEntry(otherButton);

    //if (phone Not Connected)
    {
        modelData.addEntry(phoneButton);
    }
    //if (No Naivagation)
    {
        modelData.addEntry(naviButton);
    }

   // Get GridView
    // set model property of gridview with modelData object;
    return a.exec();
}
