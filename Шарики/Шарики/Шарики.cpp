#include <iostream>


using namespace std;

int perestanovka(int m, int n, int balls[]);
int fact(int n);

int main()
{
	cout << "Enter n: ";
	int n;
	cin >> n;

	int* balls = new int[n];
	for (int i = 0; i < n; i++)
	{
		balls[i] = i + 1;
	}

	cout << "Result is " << perestanovka(1, n, balls) << endl;
	delete[] balls;
	return 0;
}

int perestanovka(int m, int n, int balls[])
{
	int result = 0;
	if (m >= n)
	{
		if (balls[m - 1] == n)
		{
			result = 1;
		}
	}
	else
	{
		for (int i = m; i <= n; i++)
		{
			if (balls[m - 1] == i)
			{
				result += fact(n - m);
			}
			else
			{
				int buf = balls[i - 1];
				balls[i - 1] = balls[m - 1];
				balls[m - 1] = buf;
				result += perestanovka(m + 1, n, balls);
				balls[m - 1] = balls[i - 1];
				balls[i - 1] = buf;
			}
		}
	}
	return result;
}

int fact(int n)
{
	if (n > 1)
	{
		return  n * fact(n - 1);
	}
	else
	{
		return n;
	}
}