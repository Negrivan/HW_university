#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	ifstream file("TEST.txt");
	int b, j = 0;
	do
	{
		if (file >> b)
		{
			cout << b << " ";
			j++;
		}
		else
		{
			file.clear();
			file.ignore(1, ' ');
		}
	} while (!file.eof());
	if (j == 0)
	{
		cout << "В файле TEST.txt чисел не обнаружено" << endl;
	}
	file.close();
	return 0;
}