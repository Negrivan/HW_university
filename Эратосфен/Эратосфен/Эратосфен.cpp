#include <iostream>
#include <vector>

using namespace std;

void check(int* pn)
{
	cin >> *pn;
	if (*pn <= 0)
	{
		cout << "Число не натуральное, введите новое" << endl;
		check(pn);
	}
}
void main()
{
	setlocale(LC_ALL, "RU");
	int m = 2, j = 2;
	int n = 0;
	cout << "Введите натуральное число " << endl;
	check(&n);
	vector<int> pa(n + 1);
	for (int i = 0; i <= n; i++)
	{
		if (i == 1)
		{
			pa[i] = 0;
		}
		else
		{
			pa[i] = i;
		}
	}
	while (m <= n)
	{
		if (pa[m] != 0)
		{
			j = m * 2;
			while (j <= n)
			{
				pa[j] = 0;
				j += m;
			}

		}
		m++;
	}
	for (int j = 0; j <= n; j++)
	{
		if (pa[j] == 0)
		{
			continue;
		}
		else
		{
			cout << pa[j] << " ";
		}
	}
}
