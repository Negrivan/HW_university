#include <iostream>

using namespace std;

void main()
{
	int N, S = 31;
	const int a = 14, c = 22, m = 25;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		S = (a * S * i + c) % m;
	}
	cout << S << endl;
}