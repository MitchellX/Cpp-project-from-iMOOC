#include <iostream>
#include "Coordinate.h"
#include "MyStack.h"
using namespace std;

/*
	栈-类模板
	将普通栈改造为类模板栈，使其可以应用于任何数据类型
*/


int main()
{
	//记得在 MyStack<> 中写入具体类型
	MyStack<Coordinate>* pStack = new MyStack<Coordinate>(5);

	pStack->push(Coordinate(1, 2));
	pStack->push(Coordinate(3, 4));

	pStack->stackTraverse(true);
	pStack->stackTraverse(false);

	Coordinate c1;
	pStack->pop(c1);

	pStack->push(Coordinate(5, 6));
	pStack->push(Coordinate(7, 8));
	pStack->push(c1);
	pStack->stackTraverse(true);

	pStack->clearStack();
	pStack->stackTraverse(true);

}
