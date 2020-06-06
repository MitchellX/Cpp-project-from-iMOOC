#include "MyQueue.h"
#include <iostream>
using namespace std;

/*
	循环队列的实现，数组元素是Customer对象
*/

int main()
{
	MyQueue* queue = new MyQueue(4);
	Customer c1("zhangsan", 20);
	Customer c2("lisi", 25);
	Customer c3("wangwu", 30);

	queue->EnQueue(c1);
	queue->EnQueue(c2);
	queue->EnQueue(c3);

	queue->QueueTraverse();

	Customer c4;
	queue->DeQueue(c4);
	c4.printInfo();
	cout << "\n\n\n";
	queue->QueueTraverse();

	delete queue;
}