#include <iostream>

int main()
{
	double b, c, x;
	std::cout << "Enter b and c\n";
	std::cin >> b >> c;
	if (b == 0)
	{
		if ((b == 0) && (c == 0))
		{
			std::cout << "X is any";
		}
		else
		{
			std::cout << "Impossible";
		}
	}
	else
	{
		x = -c / b;
		std::cout << "X is " << x;
	}
	return 0;
}


