/*
 * mockHumSensor.h
 */

#ifndef INCLUDE_MOCKHUMSENSOR_H_
#define INCLUDE_MOCKHUMSENSOR_H_

#include "sensor.h"

class MockHumSensor : public Sensor
{
public:
	int getReading();
};

#endif /* INCLUDE_MOCKHUMSENSOR_H_ */
