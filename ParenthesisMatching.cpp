#include <iostream>
#include "../MyStack_classTemplate/Coordinate.h"
#include "../MyStack_classTemplate/MyStack.h"
using namespace std;

/*
	description:
		input any set of parentheses and determine whether it matches
	example:
		[()] yes  [()()] yes  [[()] no [()]] no
*/

int main()
{
	MyStack<char>* pStack = new MyStack<char>(30);
	//another stack to imply which char is needed to match
	MyStack<char>* pStack_Need = new MyStack<char>(30);	

	char str[] = "[{([()])}]";
	char currentNeed = 0;	//store the needed matching char
	//scan
	for (int i=0; i < (int)strlen(str); i++)
	{
		if (currentNeed != str[i])
		{
			pStack->push(str[i]);

			switch (str[i])
			{
			case '[':
				pStack_Need->push(currentNeed);
				currentNeed = ']';
				break;
			case '(':
				pStack_Need->push(currentNeed);
				currentNeed = ')';
				break;
			case '{':
				pStack_Need->push(currentNeed);
				currentNeed = '}';
				break;
			default:
				break;
			}
		} 
		//matching:  currentNeed == str[i]
		else
		{
			char temp = 0;
			if (!pStack->stackEmpty())
			{
				pStack->pop(temp);
				pStack_Need->pop(currentNeed);
			}

		}
	}

	if (pStack->stackEmpty())
	{
		cout << "matching" << endl;
	}
	else
	{
		cout << "not matching" << endl;
	}

	delete pStack_Need;
	delete pStack;
	pStack_Need = NULL;
	pStack = NULL;
}
