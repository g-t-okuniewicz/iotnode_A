/*
 * sensor.h
 */

#ifndef INCLUDE_SENSOR_H_
#define INCLUDE_SENSOR_H_

class Sensor
{
public:
	virtual ~Sensor() = 0;
	virtual int getReading() = 0;
	virtual int getId();
	virtual void setId(int id);
protected:
	int id;
};

#endif /* INCLUDE_SENSOR_H_ */
