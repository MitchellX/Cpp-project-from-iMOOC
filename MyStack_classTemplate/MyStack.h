#pragma once
#include <iostream>
using namespace std;

template<typename T>
class MyStack
{
public:
	MyStack(int size);
	~MyStack();
	bool stackEmpty();
	bool stackFull();
	void clearStack();
	int stackLenth();
	bool push(T element);
	bool pop(T &element);
	void stackTraverse(bool isFromButtom);
private:
	T* pBuffer;
	int iSize;
	int iTop;
};

/*			 class implement:		 */
template<typename T>
MyStack<T>::MyStack(int size)
{
	iSize = size;
	pBuffer = new T[size];
	iTop = 0;
}

template<typename T>
MyStack<T>::~MyStack()
{
	delete[]pBuffer;
	pBuffer = NULL;
}

template<typename T>
bool MyStack<T>::stackEmpty()
{
	if (0 == iTop)
		return true;
	return false;
}

template<typename T>
bool MyStack<T>::stackFull()
{
	if (iTop == iSize)
		return true;
	return false;
}

template<typename T>
void MyStack<T>::clearStack()
{
	iTop = 0;
}

template<typename T>
int MyStack<T>::stackLenth()
{

}

template<typename T>
bool MyStack<T>::push(T element)
{
	if (stackFull())
	{
		return false;
	}
	pBuffer[iTop] = element;
	iTop++;
	return true;

}

template<typename T>
bool MyStack<T>::pop(T& element)
{
	if (stackEmpty())
	{
		return false;
	}
	iTop--;		//先进行栈顶指针的--，使得指向最顶上的元素
	element = pBuffer[iTop];
	return true;
}

template<typename T>
void MyStack<T>::stackTraverse(bool isFromBottom)
{
	if (isFromBottom)
	{
		cout << "From bottom to top:" << endl;
		for (int i=0; i<iTop; i++)
		{
			cout << pBuffer[i];		//对于比较特殊的类，用friend 重载<<运算符
		}							//重载运算是定义在pBuffer[i]对象的函数定义中的
		cout << endl;
	} 
	else
	{
		cout << "From top to bottom" << endl;
		for (int i = iTop-1; i >=0; i--)
		{
			cout << pBuffer[i];
		}
		cout << endl;
	}
}