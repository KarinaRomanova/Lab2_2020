#include<iostream>
#include"Point.h"
using namespace std;

//+, -, =, ==, !==, <<

void SetCoord(long double& x, long double& y, long double& z);

int main() 
{
	setlocale(LC_ALL, "Russian");

		long double x;
		long double y;
		long double z; 

	cout << "������ �����";
	SetCoord(x, y, z);
	Point FirstPoint (x, y, z);

	cout << "\n������ �����";
	SetCoord(x, y, z);
	Point SecondPoint(x, y, z);

	cout << SecondPoint;
	 

	SecondPoint.GetPoint();

}

void SetCoord(long double &x, long double &y, long double &z) {
	cout << "\n\n������ ����������:\n";
	cout << "\tx = ";		cin >> x;
	cout << "\ty = ";		cin >> y;
	cout << "\tz = ";		cin >> z;
}