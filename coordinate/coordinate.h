class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
private:
	int m_Ix;
	int m_Iy;
};