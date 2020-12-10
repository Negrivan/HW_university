#include <iostream>

using namespace std;

void check(int* pa, int* pb)
{
	cin >> *pa >> *pb;
	if (*pa <= 0 || *pb <= 0)
	{
		cout << "Числа не натуральные, введите новые" << endl;
		check(pa, pb);
	}
}

void main()
{
	setlocale(LC_ALL, "Ru");
	int a, b;
	cout << "Введите два натуральных числа" << endl;
	check(&a, &b);
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}
	cout << "Наибольший общий делитель равен " << a + b << endl;
}