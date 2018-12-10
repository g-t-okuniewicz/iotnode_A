/*
 * mockTempSensor.cpp
 */

#include "include/mockTempSensor.h"

int MockTempSensor::getReading()
{
	static int reading = 0;
	return ++reading;
}
