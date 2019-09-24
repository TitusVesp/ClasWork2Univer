// ClasWork2Univer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Figure.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	int key = 0;
	while (1)
	{
		system("cls");

		cout << "1 - Прямокутник\n2 - Прямокутний трикутник\n3 - Рiвносторонiй трикутник\n4 - Ромб\n0 - Bиxiд" << endl;

		cin >> key;

		int x = 0, y = 0;

		switch (key)
		{
		case 1:
			cout << "Imput length and width: " << endl;
			cin >> x >> y;
			Rectangle(x, y);
			break;
		case 2:
			cout << "Imput first side for right-angled: " << endl;
			cin >> x;
			Triangle_right(x);
			break;
		case 3:
			cout << "Imput side for equal_triangle: " << endl;
			cin >> x;
			Triangle_equal(x);
			break;
		case 4:
			cout << "Imput side for diamond: " << endl;
			cin >> x;
			Diamond(x);
			break;
		case 0:
			return 0;
		default:
			cout << "Incorrect value!" << endl;
			break;
		}

		system("pause");
	}
}
