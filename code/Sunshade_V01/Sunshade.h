
#ifndef SUNSHADE_H
#define SUNSHADE_H

#include "Sensor_Inside.h"
#include "Sensor_Outside.h"
#include "Sensor_UV.h"
#include "Motor.h"

class Sunshade: public Sensor_inside, Sensor_Outside, Sensor_UV, Motor      //Derived classes (sensor inside, sensor outside, sensor UV and motor) inherit from base class sunshade
{
public:

  //Objects
  Motor motorObject;
  Sensor_inside sensor_insideObject;
  Sensor_Outside sensor_outsideObject;
  Sensor_UV sensor_uvObject;

  //Empty Constructor
  Sunshade();

  //Methods
  void ChecksensorValues();

  void setState_Extended(int value);
  bool getState_Extended();

  void setState_Retracted(int value);
  bool getState_Retracted();

private:

  //States Sunshade
  bool State_extended;
  bool State_retracted;

  void initAttributes();

};

#endif // SUNSHADE_H
