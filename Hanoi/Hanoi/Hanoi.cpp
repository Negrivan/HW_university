#include <iostream>

using namespace std;

void Hanoi(int n, int i, int j)
{
	if (n == 1)
	{
		cout << "Переложить диск номер " << 1 << " со стержня " << i << " на стержень " << j << endl;
	}
	else
	{
		int Third = 6 - j - i;

		Hanoi(n - 1, i, Third);

		cout << "Переложить диск номер " << n << " со стержня " << i << " на стержень " << j << endl;

		Hanoi(n - 1, Third, j);

	}
}

void main()
{
	int n, i, j;
	setlocale(LC_ALL, "rus");
	cout << "Введите высоту башни " << endl;

	cin >> n;

	cout << "Введите номера начального и конечного стрежней " << endl;

	cin >> i >> j;

	cout << "Алгоритм перекладывания будет такой " << endl

		<< "=========================" << endl;

	Hanoi(n, i, j);
}
