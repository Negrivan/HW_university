#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string line = "file.txt";
	ifstream fin;

	fin.open(line);
	if (!fin.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
	}
	fin.close();
	return 0;
}