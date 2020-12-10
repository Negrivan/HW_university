#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	unsigned int A, B, C, N;

	cout << "Введите А, В и максимальную сумму денег, которую покупатель готов отдать за спиннер, которая больше, чем А" << endl;



	cin >> A >> B >> C;

	do
	{

		cin >> A >> B >> C;
		cout << "Ошибка ввода, выберите другие числа." << endl;
	} while (!(A <= C) || (B == 0));


	N = (C - A) / B;
	if (N == 0)
	{
		cout << "Такой спиннер не может быть произведен";
	}
	else
	{
		cout << "Максимальное число лопастей = " << N << endl;
	}

}