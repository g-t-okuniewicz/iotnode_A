/*
 * dataQueue.h
 *
 *  Created on: 16 Nov 2018
 *      Author: G.T.Okuniewicz
 */

#ifndef INCLUDE_DATAQUEUE_H_
#define INCLUDE_DATAQUEUE_H_

class DataQueue
{
	public:
		virtual DataQueue();
		virtual ~DataQueue();
		virtual void enqueue (int i);
		virtual int dequeue ();
		virtual bool isFull ();
		virtual bool isEmpty();
};



#endif /* INCLUDE_DATAQUEUE_H_ */
