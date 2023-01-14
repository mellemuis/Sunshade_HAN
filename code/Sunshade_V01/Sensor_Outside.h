#include <iostream>
using namespace std;

#include "Sensors.h"

#ifndef SENSOR_OUTSIDE_H
#define SENSOR_OUTSIDE_H

class Sensor_Outside: public Sensors                      //Sensoroutside contains 3 sensors: rain switch (activated by rainfall), LUX meter (lightintensity) and anemometer(wind)
{
public:




  //Empty Constructor
  Sensor_Outside();

  //Methods
  void setRainfall(int);
  int getRainfall();

  void setLightintensity(int value);
  int getLightintensity();

  void setWind(int value);
  int getWind();

  void Measure();                                           //Measures rainfall, lightintensity & wind velocity

private:

  //Sensor values
  int Rainfall = 2;
  int Lightintensity = 30000;
  int Wind = 5;

  void initAttributes();

};

#endif // SENSOR_OUTSIDE_H
