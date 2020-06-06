#include "MyQueue.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int queueCap)
{
	m_QueueCap = queueCap;
	m_pQueue = new Customer[queueCap];
	ClearQueue();
}

MyQueue::~MyQueue()
{
	delete[] m_pQueue;
	m_pQueue = NULL;
	cout << "~MyQueue()" << endl;
}

void MyQueue::ClearQueue()
{
	m_Head = 0;
	m_Tail = 0;
	m_QueueLen = 0;
}

bool MyQueue::QueueEmpty() const
{
	if (0 == m_QueueLen)
		return true;
	return false;
}

bool MyQueue::QueueFull() const
{
	if (m_QueueCap == m_QueueLen)
		return true;
	return false;
}

bool MyQueue::EnQueue(Customer element)
{
	if (QueueFull())
		return false;
	m_pQueue[m_Tail] = element;
	m_Tail++;
	m_Tail = m_Tail % m_QueueCap;
	m_QueueLen++;
	return true;
}

bool MyQueue::DeQueue(Customer& element)
{
	if (QueueEmpty())
		return false;
	element = m_pQueue[m_Head];
	m_Head++;
	m_Head = m_Head % m_QueueCap;
	m_QueueLen--;
	return true;
}

void MyQueue::QueueTraverse()
{
	for (int i = m_Head; i < m_QueueLen + m_Head; i++)
	{
		m_pQueue[i].printInfo();
	}
	cout << endl;
}