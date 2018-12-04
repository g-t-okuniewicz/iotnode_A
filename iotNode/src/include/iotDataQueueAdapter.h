/*
 * iotDataQueueAdapter.h
 *
 *  Created on: 4 Dec 2018
 *      Author: gabi
 */

#ifndef INCLUDE_IOTDATAQUEUEADAPTER_H_
#define INCLUDE_IOTDATAQUEUEADAPTER_H_

#include "dataQueue.h"

class IotDataQueueAdapter : public DataQueue
{

public:
	void enqueue (int i);
	int dequeue ();
	bool isFull ();
	bool isEmpty();
};



#endif /* INCLUDE_IOTDATAQUEUEADAPTER_H_ */
