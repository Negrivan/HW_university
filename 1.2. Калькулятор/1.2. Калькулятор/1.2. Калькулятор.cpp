#include <iostream>
#include <cmath>

int main()
{
	double a, b, z;
	char r;
	std::cin >> (a) >> (r) >> (b);
	if (r == '/')
	{
		if (b == 0)
		{
			std::cout << "Impossible";
		}
		else 
		{
			z = a / b;
			std::cout << z;
		}
	}
	else
	{
		if (r == '*')
			z = a * b;
		if (r == '+')
			z = a + b;
		if (r == '-')
			z = a - b;
		if (r == '^')
			z = pow(a, b);
		std::cout << "Result is " << z;
	}
	return 0;
}
