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
	
		

	cout << "Первая точка";
	SetCoord(x, y, z);
	Point FirstPoint (x, y, z);

	cout << "\nВторая точка";
	SetCoord(x, y, z);
	Point SecondPoint(x, y, z);
	while (true) {
		cout << "\n\nВыберите действие:\n\t1. Сложение \n\t2. Разность \n\t3. Присваивание\n\t4. Проверка равенства \n\t5. Проверка неравенства \n\t6. Вывод результата\n\t7. Новая точка \n\t8. Выход из программы\n\nНомер действия:";
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
				cout << "\nОшибка!";
				return 0;
			}
		}
	}
	

}

void SetCoord(long double &x, long double &y, long double &z) 
{
	cout << "\n\nВедите координаты:\n";
	cout << "\tx = ";		cin >> x;
	cout << "\ty = ";		cin >> y;
	cout << "\tz = ";		cin >> z;
}
