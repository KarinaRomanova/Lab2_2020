#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	long double x;
	long double y;
	long double z;

public:

	Point(long double x, long double y, long double z);
	
	Point operator + (Point SecondPoint);
	Point operator + (int a);
	

	Point operator - (Point SecondPoint);
	Point operator - (int a);
	
	Point& operator= (Point SecondPoint);
	
	bool operator== (const Point& SecondPoint);
	 bool operator!= (const Point& SecondPoint);
	friend std::ostream& operator<< (std::ostream& out, Point& point);

	void SetNewCoord();
};
