#include <iostream>
#include <fstream>
#include <vector> 

using namespace std;

//56

int main()
{
	setlocale(LC_ALL, "RUS");

	remove("file.txt");

	int lines, cols, b = 0;
	cout << "Введите размеры массива" << endl;

	cin >> lines >> cols;

	if (lines == 0 || cols == 0)
	{
		cout << "Массив не существует" << endl;
	}
	else
	{
		ofstream writer;

		writer.open("file.txt");
		srand(time(NULL));
		if (!writer.is_open())
		{
			cout << "Error\n";
		}
		else
		{
			for (int i = 0; i < lines * cols; i++)
			{
				int b = rand() % 100;
				writer << b << ' ';
			}
		}

		writer.close();



		vector<vector<float>> Need(lines, vector <float>(cols));
		vector<float> a(cols);
		fstream file;
		file.open("file.txt");
		if (!file.is_open())
		{
			cout << "Не удалось открыть файл" << endl;
		}
		else
		{
			for (int i = 0; i < Need.size(); i++)
			{
				for (int j = 0; j < cols; )
				{
					if (file >> b)
					{
						Need[i][j] = b;
						j++;
					}
					else
					{
						file.clear();
						file.ignore(1);
					}
				}
			}
		}
		file.close();
		for (int i = 0; i < Need.size(); i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << Need[i][j] << '\t';
			}
			cout << endl;
		}
		cout << "\n\n";
		for (int i = 0; i < cols; i++)
		{
			for (int j = 0; j < lines; j++)
			{
				a[i] += Need[j][i];
			}
		}
		for (int i = 0; i < cols; i++)
		{
			cout << a[i] << '\t';
		}
	}

	
	return 0;
}
	



