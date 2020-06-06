#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "Customer.h"

class MyQueue
{
public:
	MyQueue(int queueCap);
	virtual ~MyQueue();
	void ClearQueue();
	bool QueueEmpty() const;
	bool QueueFull() const;
	//int QueueLength() const;
	bool EnQueue(Customer element);
	bool DeQueue(Customer& element);
	void QueueTraverse();

private:
	Customer* m_pQueue;
	int m_QueueLen;
	int m_QueueCap;
	int m_Head;
	int m_Tail;
};


#endif // !MYQUEUE_H

