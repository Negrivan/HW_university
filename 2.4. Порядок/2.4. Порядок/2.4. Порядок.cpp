#include <iostream>

int main()
{
	int i, N;
	std::cout << "Insert N: \n";
	std::cin >> N;
	std::cout << N;
	for (i = N + 1; i < N + 10; i++)
		std::cout << ", " << i;
}