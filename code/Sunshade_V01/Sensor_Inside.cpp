#include <iostream>
using namespace std;

#include "Sensor_Inside.h"

Sensor_inside::Sensor_inside()
{
  initAttributes();
}

void Sensor_inside::initAttributes()
{
}

void Sensor_inside::Measure()
{
    cout << "Temperature set by user: " << Roomtemperature << " degrees Celsius" << endl;
    cout << "Sensor inside measures: " << Currentroomtemperature << " degrees Celsius" << endl;
}

void Sensor_inside::setRoomtemperature(int value)
{
    Roomtemperature = value;
}

int Sensor_inside::getRoomtemperature()
{
    return Roomtemperature;
}

void Sensor_inside::setCurrentroomtemperature(int value)
{
  Currentroomtemperature = value;
}

int Sensor_inside::getCurrentroomtemperature()
{
  return Currentroomtemperature;
}
