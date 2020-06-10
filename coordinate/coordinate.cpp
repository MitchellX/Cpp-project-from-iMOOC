#include <iostream>
#include "coordinate.h"
using namespace std;

Coordinate::Coordinate(int x, int y):m_Ix(x), m_Iy(y)
{
	cout << "Coordinate(int x, int y)" << endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << endl;
}

void Coordinate::setX(int x)
{
	m_Ix = x;
}
int Coordinate::getX()
{
	return m_Ix;
}
void Coordinate::setY(int y)
{
	m_Iy = y;
}
int Coordinate::getY()
{
	return m_Iy;
}