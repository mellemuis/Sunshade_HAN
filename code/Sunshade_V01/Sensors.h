#include <iostream>
using namespace std;

#ifndef SENSORS_H
#define SENSORS_H

class Sensors                                       //Class collects all sensor values
{
public:

  virtual void Measure() =0;                        //Virtual function is used because all sensors "measure" their specific value.

  //Empty Constructor
  Sensors();

  //Empty Destructor
  virtual ~Sensors();

};

#endif // SENSORS_H
