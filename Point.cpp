#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(long double x, long double y, long double z)
	:x(x), y(y), z(z) 
{}


Point Point::operator + (Point SecondPoint)
	{
		return Point(this->x + SecondPoint.x, this->y + SecondPoint.y, this->z + SecondPoint.z);
	}
Point Point::operator + (int a)
{
	return Point(this->x + a, this->y + a, this->z + a);
}

Point Point::operator - (int a)
{
	return Point(this->x - a, this->y - a, this->z - a);
}
Point Point::operator - (Point SecondPoint)
{
	return Point(this->x - SecondPoint.x, this->y - SecondPoint.y, this->z - SecondPoint.z);
}

 Point Point :: operator+=  (Point SecondPoint)
{
	return Point(this->x = SecondPoint.x, this->y = SecondPoint.y, this->z = SecondPoint.z);
}
<<<<<<< HEAD

 bool Point:: operator== (const Point& SecondPoint)
=======
 bool operator== (const Point& FirstPoint, const Point& SecondPoint)
>>>>>>> parent of acdb1e7... final
 {
	 return (this->x == SecondPoint.x && this->y == SecondPoint.y && this->z == SecondPoint.z);
	
 }
 bool Point::operator!= (const Point& SecondPoint)
 {
<<<<<<< HEAD
	 return (this->x != SecondPoint.x && this->y != SecondPoint.y && this->z != SecondPoint.z);
=======
	 return (FirstPoint.x != SecondPoint.x && FirstPoint.y != SecondPoint.y && FirstPoint.z != SecondPoint.z);

>>>>>>> parent of acdb1e7... final
 }

 ostream& operator<< (ostream& out,  Point& point)
 {
	 out << "Point(" <<point.x << ", " << point.y << ", " << point.z << ")";

	 return out;
 }

void Point::GetPoint()
{
	cout << x<<"\n";
	cout << y << "\n";
	cout << z << "\n";
}