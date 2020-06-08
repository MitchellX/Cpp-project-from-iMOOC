#pragma once
#include <ostream>
using namespace std;

class Coordinate
{
	//重载运算符<< ，这里使用&引用，提高效率
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	Coordinate(int x=0, int y=0);
	~Coordinate();
	void printCoordinate();

private:
	int iX;
	int iY;
};