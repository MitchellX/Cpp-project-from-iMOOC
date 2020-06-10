#include <stdlib.h>
#include <iostream>
#include "line.h"

int main()
{
	Line L1(1,2,3,4);
	L1.printInf();

	Line *L2 = new Line(5, 6, 7, 8);
	L2->printInf();

	delete L2;
	L2 = NULL;

	system("pause");
	return 0;
}