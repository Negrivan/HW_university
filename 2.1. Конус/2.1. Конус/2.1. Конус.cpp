#include <iostream>

int main()
{
	double R, r, v, s, h, l;
	std::cout << "Insert R, r and h: \n";
	std::cin >> R;
	std::cin >> r;
	std::cin >> h;
	if ((R == 0) || (r == 0) || (h == 0))
	{
		std::cout << "Check the data.";
	}
	else
	{
		v = (1.0 / 3.0) * 3.14 * h * (pow(R, 2) + pow(r, 2) + R * r);
		s = 3.14 * (pow(R, 2) + pow(r, 2) + (r + R) * sqrt(pow(R - r, 2) + pow(h, 2)));
		std::cout << "V = " << v << std::endl << "S = " << s;
	}
	return 0;
}