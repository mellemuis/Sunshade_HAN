#include <iostream>
using namespace std;

#include "Sunshade.h"
#include "Motor.h"
#include "Sensor_Inside.h"
#include "Sensor_Outside.h"
#include "Sensor_UV.h"
#include "Sensors.h"
#include "test.h"



int main()
{
    Sunshade SunshadeObject;
    Test TestObject;

    //First collect variables
    Sensors* s1 = new Sensor_inside;                  //Collect room temperature & current room temperature
    s1->Measure();
    delete(s1);

    Sensors* s2 = new Sensor_UV;                      //Collect UVindex
    s2->Measure();
    delete(s2);

    Sensors* s3 = new Sensor_Outside;                 //Collect rainfall, lightintensity and wind
    s3->Measure();
    delete(s3);

    //Second check sensor values and retract, extend or stay idle
    SunshadeObject.ChecksensorValues();

    //Run Tests
    cout << endl << "<<TEST REPORTS>>" << endl;

    //Run Test 01: Extend
    TestObject.setTestsensorvaluesExtend();
    TestObject.testResult();

    //Run Test 01: Retract
    TestObject.setTestsensorvaluesRetract();
    TestObject.testResult();

    TestObject.printReport();

    return 0;
}
