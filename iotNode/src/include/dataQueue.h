/*
 * dataQueue.h
 */

#ifndef INCLUDE_DATAQUEUE_H_
#define INCLUDE_DATAQUEUE_H_

class DataQueue
{
public:
	virtual ~DataQueue() = 0;
	virtual int getId();
	virtual void setId(int id);
	virtual void enqueue (int i) = 0;
	virtual int dequeue () = 0;
	virtual bool isFull () = 0;
	virtual bool isEmpty() = 0;
protected:
	int id;
};
#endif /* INCLUDE_DATAQUEUE_H_ */
