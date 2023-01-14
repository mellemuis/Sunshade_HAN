#include <iostream>
using namespace std;

#include "Sensor_UV.h"

// Constructors/Destructors

Sensor_UV::Sensor_UV()
{
  initAttributes();
}

void Sensor_UV::initAttributes()
{
}

void Sensor_UV::setUVindex(int value)
   {
     UVindex = value;
   }

int Sensor_UV::getUVindex()
   {
     return UVindex;
   }

void Sensor_UV::Measure()
{
    cout << "UV index: " << UVindex << endl;
}
