#include <iostream>

int main()
{
	bool lamp, curt;
	int day;
	std::cout << "Is the lamp on? (0/1): \n";
	std::cin >> lamp;
	std::cout << "Is curtain opened? (0/1): \n";
	std::cin >> curt;
	std::cout << "What time is it? \n";
	std::cin >> day;
	if (lamp == 1)
	{
		std::cout << "The room is lit.";
	}
	else
	{
		if ((9 <= day <= 21))
		{
			if (curt == 1)
			{
				std::cout << "The room is lit.";
			}
			else
			{
				std::cout << "The room is dark.";
			}
		}
		else
		{
			std::cout << "The room is dark.";
		}
	}
}