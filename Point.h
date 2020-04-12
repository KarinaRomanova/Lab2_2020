#pragma once
class Point
{
protected:
	long double x;
	long double y;
	long double z;

public:

	Point(long double x, long double y, long double z);

	Point operator + (Point SecondPoint);
	Point operator + (int a);
	

	Point operator - (Point SecondPoint);
	Point operator - (int a);
	
	Point operator += (Point SecondPoint);
	
	friend bool operator== (const Point& FirstPoint, const Point& SecondPoint);
	friend bool operator!= (const Point& FirstPoint, const Point& SecondPoint);
	friend ostream& operator<< (ostream& out, const Point& FirstPoint);
	void GetPoint();
};
