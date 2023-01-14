#include <iostream>
using namespace std;

#include "Sensors.h"

#ifndef SENSOR_UV_H
#define SENSOR_UV_H

class Sensor_UV: public Sensors                             //Photodiode-type UV sensor: measures illuminance
{
public:

  //Empty Constructor
  Sensor_UV();

  //Methods
  void setUVindex(int value);
  int getUVindex();

  void Measure();                                           //Calculates UVI Using illuminance value

private:

  //Sensor value
  int UVindex = 6;

  void initAttributes();

};

#endif // SENSOR_UV_H
