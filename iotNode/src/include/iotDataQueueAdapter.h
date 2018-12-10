/*
 * iotDataQueueAdapter.h
 */

#ifndef INCLUDE_IOTDATAQUEUEADAPTER_H_
#define INCLUDE_IOTDATAQUEUEADAPTER_H_

#include <iostream>

#include "dataQueue.h"
#include "iotDataQueue.h"

#define QUEUE_SIZE 10

class IotDataQueueAdapter : public DataQueue
{

public:
	void init();
	void enqueue (int i);
	int dequeue ();
	bool isFull ();
	bool isEmpty();
private:
	iotDataQueue queue;
	int counter;
};



#endif /* INCLUDE_IOTDATAQUEUEADAPTER_H_ */
