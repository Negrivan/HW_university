#include <iostream>

int main()
{
	double	b, x, y;
	std::cout << "Insert b, x and y: \n";
	std::cin >> b >> x >> y;
	if ((b - y) > 0 && (b - x) >= 0)
	{
		std::cout << "z = " << log(b - y) * sqrt(b - x);
	}
	else
	{
		std::cout << "Error";
	}
	return 0;
}
