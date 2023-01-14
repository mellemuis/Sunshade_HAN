#include <iostream>
using namespace std;

#include "Sunshade.h"

// Constructors/Destructors


Sunshade::Sunshade()
{
 initAttributes();
}

// Methods
void Sunshade::initAttributes()
{
}

void Sunshade::ChecksensorValues()           //Function to check the collected sensor values. Depending on these values and the sunshade's state it extends or retract
{
    if(
       Sensor_inside::getCurrentroomtemperature() >= Sensor_inside::getRoomtemperature()
       && Sensor_Outside::getRainfall() <= 3                                                //Rainfall measured in mm/hour
       && Sensor_Outside::getWind() <= 25                                                   //Wind velocity measured in km/hour
       && Sensor_Outside::getLightintensity() >28000                                        //Lightintensity measured in lux
       && Sensor_UV::getUVindex() >= 5                                                      //UV index (UVI) is a measure of the level of UV radiation
       && State_extended != true
      )
        {
        Motor::Extend();
        }
    else
        {
        Motor::Retract();
        }
}

void Sunshade::setState_Extended(int value)
{
    State_extended = value;
}

bool Sunshade::getState_Extended()
{
    return State_extended;
}

void Sunshade::setState_Retracted(int value)
{
    State_extended = value;
}

bool Sunshade::getState_Retracted()
{
    return State_extended;
}


