#pragma once
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
	
	Point operator += (Point SecondPoint);
	
<<<<<<< HEAD
	bool operator== (const Point& SecondPoint);
	 bool operator!= (const Point& SecondPoint);
	friend std::ostream& operator<< (std::ostream& out, Point& point);

	void SetNewCoord();
=======
	friend bool operator== (const Point& FirstPoint, const Point& SecondPoint);
	friend bool operator!= (const Point& FirstPoint, const Point& SecondPoint);
	friend ostream& operator<< (ostream& out,  Point& point);
	void GetPoint();
>>>>>>> parent of acdb1e7... final
};
