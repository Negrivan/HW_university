#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned long long int N, K;
	cin >> N >> K;
	if (K == 0 || N == 0)
	{
		cout << "Неверные данные" << endl;
	}
	else
	{
		while (K != 1)
		{
			N = (N - K % 2) / 2;
			K /= 2;
		}
		cout << (N - 1) / 2 << " " << N / 2;
	}
}