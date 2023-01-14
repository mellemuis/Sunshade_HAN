#include <iostream>
using namespace std;

#include "Sensor_Outside.h"

Sensor_Outside::Sensor_Outside()
{
  initAttributes();
}

void Sensor_Outside::initAttributes()
{
}

void Sensor_Outside::setRainfall(int value)
{
 Rainfall = value;
}


int Sensor_Outside::getRainfall()
{
    return Rainfall;
}

void Sensor_Outside::setLightintensity(int value)
{
 Lightintensity = value;
}

int Sensor_Outside::getLightintensity()
{
    return Lightintensity;
}

void Sensor_Outside::setWind(int value)
{
 Wind = value;
}

int Sensor_Outside::getWind()
{
    return Wind;
}

void Sensor_Outside::Measure()
{
     cout << "Rainfall: " << Rainfall << " mm/h" << endl;
     cout << "Lightintensity: " << Lightintensity << " lux" << endl;
     cout << "Wind: " << Wind << "km/h\n" << endl;
}
