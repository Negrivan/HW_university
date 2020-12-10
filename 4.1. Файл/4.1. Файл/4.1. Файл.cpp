#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	ofstream fout("data.txt");

	if (!fout.is_open())
		cout << "Ошибка! Файл не может быть открыт.";
	else
	{
		for (int i = 0; i < 10; i++)
		{
			float a;
			cin >> a;
			fout << a;
			fout << " ";
		}
		fout.close();
	}

	ifstream fin("data.txt");
	float sum = 0, sum_tmp;

	if (!fin.is_open())
		cout << "Ошибка! Файл не может быть открыт.";
	else
		while (fin >> sum_tmp)
			sum += sum_tmp;
	cout << "Сумма чисел из файла: " << sum;
	return 0;
}
