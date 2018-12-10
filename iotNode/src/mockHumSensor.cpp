/*
 * mockTempSensor.cpp
 */

#include "include/mockHumSensor.h"

int MockHumSensor::getReading()
{
	static int reading = 0;
	return ++reading;
}
