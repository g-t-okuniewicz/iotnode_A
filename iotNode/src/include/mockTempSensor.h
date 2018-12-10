/*
 * mockTempSensor.h
 */

#ifndef INCLUDE_MOCKTEMPSENSOR_H_
#define INCLUDE_MOCKTEMPSENSOR_H_

#include "sensor.h"

class MockTempSensor : public Sensor
{
public:
	int getReading();
};

#endif /* INCLUDE_MOCKTEMPSENSOR_H_ */
