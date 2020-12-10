#include <iostream>

using namespace std;

void checkAmount(int* N)
{
	cin >> *N;
	if (*N > 54)
	{
		cout << "В поезде нет столько мест, введите другое количество" << endl;
		checkAmount(N);
	}
}

void main()
{
	setlocale(LC_ALL, "Ru");
	int N = 0, K, Counter = 1, MaxCount = 0;
	cout << "Введите количество свободных мест" << endl;
	checkAmount(&N);
	int Train[9]{};
	if (N < 6)
	{
		cout << "Свободных купе нет." << endl;
	}
	else
	{
		cout << "Введите номера сободных мест" << endl;
		for (int i = 0; i < N;)
		{
			cin >> K;
			if (K > 54 || K < 1)
			{
				cout << "Такого места не существует выберите другое" << endl;
			}
			else
			{
				if ((K >= 1 && K <= 4) || K == 54 || K == 53)
				{
					Train[0]++;
				}
				if ((K >= 5 && K <= 8) || K == 52 || K == 51)
				{
					Train[1]++;
				}
				if ((K >= 9 && K <= 12) || K == 50 || K == 49)
				{
					Train[2]++;
				}
				if ((K >= 13 && K <= 16) || K == 48 || K == 47)
				{
					Train[3]++;
				}
				if ((K >= 17 && K <= 20) || K == 46 || K == 45)
				{
					Train[4]++;
				}
				if ((K >= 21 && K <= 24) || K == 44 || K == 43)
				{
					Train[5]++;
				}
				if ((K >= 25 && K <= 28) || K == 42 || K == 41)
				{
					Train[6]++;
				}
				if ((K >= 29 && K <= 32) || K == 40 || K == 39)
				{
					Train[7]++;
				}
				if ((K >= 33 && K <= 36) || K == 38 || K == 37)
				{
					Train[8]++;
				}
				i++;
			}
		}
		for (int i = 0; i < 9; i++)
		{
			if (Train[i] == 6)
			{
				if (Train[i + 1] == 6)
				{
					Counter++;
				}
				else
				{
					if (MaxCount <= Counter)
					{
						MaxCount = Counter;
					}
				}
			}
		}
		cout << "Свободных купе - " << MaxCount << endl;
	}
}
