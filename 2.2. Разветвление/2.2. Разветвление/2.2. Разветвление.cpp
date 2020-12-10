#include <iostream>
#include <cmath>

int main()
{
	double x, a, w;
	std::cout << "Insert a and x: \n";
	std::cin >> a >> x;
	if (x<1 && x>-1)
		std::cout << "w = " << a * log(fabs(x));
	else
	{
		if ((a - pow(x, 2)) >= 0)
			std::cout << "w = " << sqrt(a - pow(x, 2));
		else
			std::cout << "Error";
	}
	return 0;
}