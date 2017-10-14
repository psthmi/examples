#include "ModelData.h"

ModelData::ModelData()
{
    data = 0;
}


void ModelData::setData(int value)
{
    data = value;
}

int ModelData::getData()
{
    return data;
}
