#include <iostream>

using namespace std;


int main()
{
	float s, n, p, m;
	std::cout << "Insert S, n and m: \n";
	std::cin >> s >> n >> m;
	p = 0.00001;
	while ((s * p / 100 * pow((1 + p / 100), n)) / (12 * (pow((1 + p / 100), n) - 1)) < m)
	{
		p += 0.00001;
	}
	std::cout << "P = " << p << "%";
}