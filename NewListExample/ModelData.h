#ifndef MODELDATA_H
#define MODELDATA_H


#include <QString>


struct ScreenData
{
    QString buttonName;
    int value;
    QString imagePath;
};

class ModelData
{
    public:
        ModelData();

        void setData(ScreenData value);
        ScreenData getData();

    private:
        ScreenData data;
};


#endif // MODELDATA_H
