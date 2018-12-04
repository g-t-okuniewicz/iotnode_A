/*
 * tempSensor.cpp
 */
#include "include/sensor.h"

class MockTempSensor : Sensor
{
public:
	unsigned int getId()
	{
		return 0;
	}
	int read()
	{
		return 0;
	}
};



