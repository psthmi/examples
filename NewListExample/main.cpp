#include <QCoreApplication>
#include <ModelData.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ModelData modelData;
    modelData.setData(10);
    modelData.getData();

    return a.exec();
}
