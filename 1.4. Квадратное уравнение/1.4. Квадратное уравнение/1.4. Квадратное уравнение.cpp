#include <iostream>

int main()
{
	double a, b, c, x1, x2, d;
	setlocale(LC_ALL, "rus");
	std::cout << "Введите a, b и c\n";
	std::cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if ((a == 0) && (b == 0) && (c == 0))
	{
		std::cout << "X is any.";
	}
	else
	{
		if (d < 0)
		{
			std::cout << ("No roots");
		}
		else
		{
			x1 = ((-b + sqrt(d)) / (2 * a));
			x2 = ((-b - sqrt(d)) / (2 * a));
			if (d == 0)
			{
				std::cout << ("X  ") << x1;
			}
			else
			{
				std::cout << "Х1 = " << x1 << std::endl;
				std::cout << "Х2 = " << x2 << std::endl;
			}
		}
	}
	return 0;
}