#include "ModelData.h"

ModelData::ModelData()
{
    data.clear();
}


void ModelData::addElement(int value)
{
    data.append(value);
    data.push_back(value);
}

bool ModelData::removeElement(unsigned int index)
{
    if ((index>=0) && (index<data.length()))
    {
        data.removeAt(index);
        return true;
    }
    else
    {
        return false;
    }
}

ScreenData ModelData::getData()
{
    return data;
}
