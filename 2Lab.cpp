#include<iostream>
#include"Point.h"
using namespace std;

//+, -, =, ==, !==, <<

void SetCoord(long double& x, long double& y, long double& z);
void SetNewCoord(long double& x, long double& y, long double& z);

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
	while (true) {
		cout << "\n\n�������� ��������:\n\t1. �������� \n\t2. �������� \n\t3. ������������\n\t4. �������� ��������� \n\t5. �������� ����������� \n\t6. ����� ����������\n\t7. ����� ����� \n\t8. ����� �� ���������\n\n����� ��������:";
		int act;
		cin >> act;
		if (act == 7) { 
			Point ThirdPoint(0, 0, 0);
			ThirdPoint.SetNewCoord();
			SecondPoint = ThirdPoint;
			
		}
		else {
			switch (act)
			{
			case 1:
				FirstPoint = FirstPoint + SecondPoint;
				break;
			case 2:
				FirstPoint = FirstPoint - SecondPoint;
				break;
			case 3:
				FirstPoint = SecondPoint;
				break;
			case 4:
				FirstPoint == SecondPoint;
				break;
			case 5:
				FirstPoint != SecondPoint;
				break;
			case 6:
				cout << "\n" << FirstPoint;
				break;

			case 8:
				return 0;

			default:
				cout << "\n������!";
				return 0;
			}
		}
	}
	

}

void SetCoord(long double &x, long double &y, long double &z) 
{
	cout << "\n\n������ ����������:\n";
	cout << "\tx = ";		cin >> x;
	cout << "\ty = ";		cin >> y;
	cout << "\tz = ";		cin >> z;
}
