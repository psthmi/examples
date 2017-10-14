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
        void addElement(int value);
        void removeElement(int index);
        void moveElement(int sourceIndex, int destinationIndex);
        void changeElement(int index, int newValue);
        int findElement(int index);
        int size();

        void exchange(QList<int> newList);
    private:
        QList<int> data;
};


#endif // MODELDATA_H
