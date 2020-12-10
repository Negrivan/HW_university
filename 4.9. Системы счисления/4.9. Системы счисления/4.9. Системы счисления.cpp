#include <iostream>
#include <map>
#include <string>

using namespace std;

int To_ten(string number, int base)
{
	map<char, int> m;
	for (int i = 0; i < 36; i++)
	{
		if (i <= 9) m[i + '0'] = i;
		else m[i + 'A' - 10] = i;
	}
	int base10num = 0, i_numbers = number.length() - 1;
	for (char c : number)
	{
		int number = m[c];
		if (number > (base - 1))
		{
			return -1;
		}
		else
		{
			base10num += number * pow(base, i_numbers);
			i_numbers--;
		}
	}
	return base10num;
}
int Needed_NS(int number, int base)
{
	map<int, char> m;
	for (int i = 0; i <= 36; i++)
	{
		if (i <= 9) m[i] = i + '0';
		else m[i] = i + 7 + '0';
	}
	int array[25], buf = 0;
	do
	{
		int digit = number % base;
		array[buf] = digit;
		number = int(number / base);
		buf += 1;
	} while (number >= base);
	array[buf] = number;

	cout << "Число в целевой СС: ";
	for (int i = buf; i >= 0; i--)
	{
		if (isdigit(array[i]))
			cout << array[i];
		else
			cout << m[array[i]];
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "RU");

	string Number; int Base;

	cout << "Введите число: " << endl;
	cin >> Number;
	cout << "Введите основание его СС: " << endl;
	cin >> Base;

	int Base_10_num = To_ten(Number, Base);
	if (Base_10_num == -1)
	{
		cout << "Неверные данные" << endl;
	}
	else
	{
		int new_base;

		cout << "Введите основание целевой СС: " << endl;
		cin >> new_base;

		Needed_NS(Base_10_num, new_base);
	}

	return 0;
}