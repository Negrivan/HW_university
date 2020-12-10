#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 13; i++)
	{
		if (i < 7 && i > 0)
		{
			for (int j = 0; j < 8; j++)
			{
				cout << "* ";
			}
			for (int j = 0; j < 40; j++)
			{
				cout << "_";
			}
		}
		else
		{
			for (int j = 0; j < 56; j++)
			{
				cout << "_";
			}
		}
		if (i != 0)
		{
			cout << "|";
		}
		cout << endl;
	}
}