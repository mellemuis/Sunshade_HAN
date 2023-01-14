#include <iostream>
using namespace std;

#ifndef MOTOR_H
#define MOTOR_H

class Motor                 //Sunshade's motor
{
public:

  //Empty Constructor
  Motor();

  //Methods
  void Extend();            //Motor rotates clockwise to extend sunshade
  void Retract();           //Motor rotates counterclockwise to retract sunshade


};

#endif // MOTOR_H
