/*
 * dataQueue.cpp
 */

#include "include/dataQueue.h"

DataQueue::~DataQueue() {}

int DataQueue::getId()
{
	return id;
}
void DataQueue::setId(int id)
{
	this->id = id;
}
