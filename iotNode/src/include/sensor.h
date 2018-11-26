/*
 * sensor.h
 */

#ifndef INCLUDE_SENSOR_H_
#define INCLUDE_SENSOR_H_

class Sensor
{
	public:
		Sensor();
		virtual ~Sensor();
		virtual int read() = 0;
	protected:
		int m_reading;
};


#endif /* INCLUDE_SENSOR_H_ */
