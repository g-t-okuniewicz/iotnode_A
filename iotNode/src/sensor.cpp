/*
 * sensor.c
 */

#include "include/sensor.h"

Sensor::~Sensor() {}

int Sensor::getId()
{
	return id;
}
void Sensor::setId(int id)
{
	this->id = id;
}
