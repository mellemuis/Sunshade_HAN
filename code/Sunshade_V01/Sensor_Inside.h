#include <iostream>
using namespace std;

#include "Sensors.h"

#ifndef SENSOR_INSIDE_H
#define SENSOR_INSIDE_H

class Sensor_inside: public Sensors                     //Sensor inside measures room temperature and user can set desired temperature
{
public:

  //Empty Constructor
  Sensor_inside();

  Sensor_inside Sensor_insideObject();

  //Methods
  void setRoomtemperature(int value);
  int getRoomtemperature();

  void setCurrentroomtemperature(int value);
  int getCurrentroomtemperature();

  void Measure();                                       //Measures current room temperature

private:

  //Sensor values                                       //Change value to change sunshade's state (extended or retracted)
  int Roomtemperature = 17;                             //Set room temperature by user
  int Currentroomtemperature = 18;

  void initAttributes();

};

#endif // SENSOR_INSIDE_H
