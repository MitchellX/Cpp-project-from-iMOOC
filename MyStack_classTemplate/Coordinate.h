#pragma once
#include <ostream>
using namespace std;

class Coordinate
{
	//���������<< ������ʹ��&���ã����Ч��
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	Coordinate(int x=0, int y=0);
	~Coordinate();
	void printCoordinate();

private:
	int iX;
	int iY;
};