#include <iostream>

#include "include/dataQueue.h"
#include "include/iotDataQueue.h"
#include "include/sensor.h"

//this is an example
using namespace std;

int main()
{

	//MockTempSensor tempSensor;
	// read from sensor
	// check if queue is full
		// if full
			// output queue

		// if not full
			// enqueue reading

	/*
	iotDataQueue temperature;

	temperature.init();

	for(int i=1; i<=11; i++)
	{
		temperature.qput(i);
	}

	for(int i=1; i<=11; i++)
	{
		cout << temperature.qget() << "\n";
	}

	*/


	/*
    iotDataQueue temperature, humidity; //create two queue objects

    temperature.init();
    humidity.init();

    temperature.qput(10);
    humidity.qput(19);

    temperature.qput(20);
    humidity.qput(1);
    //this is a comment
    cout << "Contents of Temperature queue: ";

    cout << temperature.qget() << " ";
    cout << temperature.qget() << "\n";

    cout << "Contents of Humidity queue: ";
    cout << humidity.qget() << " ";
    cout << humidity.qget() << "\n";
	*/

    return 0;
}
