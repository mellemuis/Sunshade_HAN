#ifndef TEST_H
#define TEST_H

#include <iostream>
using namespace std;

#include "Sunshade.h"
#include "Motor.h"
#include "Sensor_Inside.h"
#include "Sensor_Outside.h"
#include "Sensor_UV.h"
#include "Sensors.h"

class Test: public Sunshade
{
public:
    Test();

public:

//Variables
bool PASS01, PASS02; //Check passes
int PASSES = 0;
int FAILS = 0;

//Test functions
void setTestsensorvaluesExtend();
void setTestsensorvaluesRetract();
void setTestsensorvalues();
void testCheckvalues();
void printReport();
void testResult();



};
#endif // TEST_H
