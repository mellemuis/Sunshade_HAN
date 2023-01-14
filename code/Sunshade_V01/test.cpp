#include <iostream>
using namespace std;

#include "test.h"

Test::Test()
{
}

void Test::setTestsensorvaluesExtend()
{
    //Set values sensor inside

    sensor_insideObject.setCurrentroomtemperature(17);
    sensor_insideObject.setRoomtemperature(18);
    sensor_insideObject.Measure();

    //Set UV sensor
    sensor_uvObject.setUVindex(6);
    sensor_uvObject.Measure();

    //Set sensor outside
    sensor_outsideObject.setRainfall(2);
    sensor_outsideObject.setWind(15);
    sensor_outsideObject.setLightintensity(30000);
    sensor_outsideObject.Measure();

    PASS01 = true;
    if(PASS01==true){
        //PASSES++;
        Sunshade::motorObject.Extend();
    }

}

void Test::setTestsensorvaluesRetract()
{
    //Set values sensor inside
    sensor_insideObject.setCurrentroomtemperature(17);
    sensor_insideObject.setRoomtemperature(18);
    sensor_insideObject.Measure();

    //Set UV sensor
    sensor_uvObject.setUVindex(2);
    sensor_uvObject.Measure();

    //Set sensor outside
    sensor_outsideObject.setRainfall(6);
    sensor_outsideObject.setWind(26);
    sensor_outsideObject.setLightintensity(27000);
    sensor_outsideObject.Measure();

    PASS02 = true;
    if(PASS02==true){
        //PASSES++;
        Sunshade::motorObject.Retract();
    }
}

void Test::testCheckvalues()
{

    Sunshade::ChecksensorValues();
}

void Test::testResult(){
    if(PASS01==true){
        PASSES++;
        //cout << PASSES << endl;
    }
    else
    {
        FAILS++;
    }
}

void Test::printReport()
{
    cout << "PASSED: " << PASSES << endl;
    cout << "FAILED: " << FAILS << endl;
}
