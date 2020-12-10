#include <iostream>

using namespace std;

int a(double b)
{
	if (b == 0)
	{
		return 0;
	}
	if (b > 0)
	{
		return 1;
	}
	if (b < 0)
	{
		return -1;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	double x;
	cout << "Введите число" << endl;
	cin >> x;
	cout << "Знак числа " << a(x) << endl;
}