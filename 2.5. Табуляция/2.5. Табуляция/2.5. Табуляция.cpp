#include <iostream>

int main()
{
	float x = -4;
	while (x <= 4)
	{
		if (x != 1)
		{
			std::cout << (pow(x, 2) - 2 * x + 2) / (x - 1) << "\n";
		}
		else
		{
			std::cout << "Error " << std::endl;
		}
		x += 0.5;
	}
	return 0;
}
