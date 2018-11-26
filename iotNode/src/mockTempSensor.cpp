/*
 * tempSensor.cpp
 */
#include "include/sensor.h"

class MockTempSensor : public Sensor
{
public:
	unsigned int getId()
	{
		return m_id;
	}
	int read()
	{
		return 0;
	}
};



