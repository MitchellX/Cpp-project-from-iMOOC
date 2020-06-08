#include "Coordinate.h"
#include <iostream>

ostream& operator<<(ostream& out, Coordinate& coor)
{
	out << "(" << coor.iX << ", " << coor.iY << ")" << endl;
	return out;
}

Coordinate::Coordinate(int x, int y)
{
	iX = x;
	iY = y;
}

Coordinate::~Coordinate()
{

}

void Coordinate::printCoordinate()
{
	cout << "(" << iX << ", " << iY << ")" << endl;
}
