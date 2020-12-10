#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int N = 255;
	ofstream fout;
	ifstream fin;
	fout.open("file.txt");
	if (!fout.is_open())
	{
		cout << "Unsuccessful opening file" << endl;
	}
	else
	{
		char S[N]{};
		cin.getline(S, 255);
		fout << S;
		fout.close();
		fout.open("file2.txt");
		fin.open("file.txt");
		if (!(fin.is_open() && fout.is_open()))
		{
			cout << "Unsuccessful opening file" << endl;
		}
		else
		{
			char ch;
			while (fin.get(ch))
			{
				fout << int(ch) << '\n';
			}
			fin.close();
			fout.close();
		}
	}

	return 0;
}