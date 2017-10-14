#include "ModelData.h"

ModelData::ModelData()
{
    data.buttonName = "";
    data.imagePath = "";
    data.value = 0;
}


void ModelData::setData(ScreenData newScreenData)
{
    data.buttonName = newScreenData.buttonName;
    data.imagePath = newScreenData.imagePath;
    data.value = newScreenData.value;
}

ScreenData ModelData::getData()
{
    return data;
}
