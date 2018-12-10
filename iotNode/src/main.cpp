#include <iostream>
#include <time.h>

#include "include/dataQueue.h"
#include "include/iotDataQueue.h"
#include "include/mockTempSensor.h"
#include "include/mockHumSensor.h"
#include "include/iotDataQueueAdapter.h"

//this is an example
using namespace std;

void sendMessage(DataQueue *queue)
{
	cout << "Printing the queue with ID " << queue->getId() << ": ";
	while(!queue->isEmpty())
	{
		cout << queue->dequeue() << ", ";
	}
	cout << "\n";
}

int main()
{

	MockTempSensor tempSensor;
	tempSensor.setId(0);

	MockHumSensor humSensor;
	humSensor.setId(1);


	IotDataQueueAdapter tempQueue;
	tempQueue.init();
	tempQueue.setId(0);

	IotDataQueueAdapter humQueue;
	humQueue.init();
	humQueue.setId(1);

	for(int i=0; i<35; i++)
	{
		if(tempQueue.isFull())
		{
			cout << "Temperature queue full.\n";
			sendMessage(&tempQueue);
			// has to be called to be able to use the iotDataQueue again
			tempQueue.init();
		}
		if(humQueue.isFull())
		{
			cout << "Humidity queue full.\n";
			sendMessage(&humQueue);
			humQueue.init();
		}
		cout << "Reading temperature sensor...\n";
		tempQueue.enqueue(tempSensor.getReading());
		cout << "Reading humidity sensor...\n";
		humQueue.enqueue(humSensor.getReading());
	}

    return 0;
}
