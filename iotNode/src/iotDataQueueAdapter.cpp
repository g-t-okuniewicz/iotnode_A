/*
 * iotDataQueueAdapter.cpp
 */

#include "include/iotDataQueueAdapter.h"

using namespace std;

int counter;

void IotDataQueueAdapter::init()
{
	counter = 0;
	queue.init();
}

void IotDataQueueAdapter::enqueue(int i)
{
	if(counter < QUEUE_SIZE - 1)
	{
		queue.qput(i);
		counter++;
	}
	else
	{
		cout << "Data Queue full.\n";
	}
}

int IotDataQueueAdapter::dequeue()
{
	int i = 0;
	if(counter > 0)
	{
		i = queue.qget();
		counter--;
	}
	else
	{
		cout << "Data Queue empty.\n";
	}
	return i;
}

bool IotDataQueueAdapter::isFull()
{
	return counter >= QUEUE_SIZE - 1;
}

bool IotDataQueueAdapter::isEmpty()
{
	return counter == 0;
}
