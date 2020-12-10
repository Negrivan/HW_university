#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

void s(char a)

{

	switch (a)
	{
	case('О'):
	{
		double r;
		cout << "Введите радиус фигуры " << endl;
		cin >> r;
		cout << "S = Pi*r^2" << endl <<
			"S = 3.14 * " << r << "^2 = " << (3.14 * r * r) << endl;
		return 0;
		break;
	}
	case ('П'):
	{
		double a, b;
		cout << "Введите стороны фигуры " << endl;
		cin >> a >> b;
		cout << "S = ab" << endl <<
			"S = " << a << " * " << b << " = " << a * b << endl;
		return 0;
		break;
	}
	case ('Т'):
	{
		double a, h;
		cout << "Введите сторону фигуры и высоту проведенную к ней " << endl;
		cin >> a >> h;
		cout << "S = a*h/2" << endl <<
			"S = " << a << "*" << h << "/2 = " << a * h / 2 << endl;
		return 0;
		break;
	}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a;
	cout << "Введите тип фигуры (О - круг, П - прямоугольник или Т - треугольник)" << endl;
	cin >> a;
	s(a);
}
