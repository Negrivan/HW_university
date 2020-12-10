#include <iostream>

using namespace std;

int main()
{
	double s, r, n, p, m;
	cout << "Insert S, p and n: \n";
	cin >> s >> p >> n;
	if (p == 0)
	{
		m = s / (12 * n);
		cout << "m = " << m;
	}
	else
	{
		if (n == 0)
		{
			cout << "Error\n";
		}
		else
		{
			r = p / 100.0;
			m = (s * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
			cout << "m = " << m;
		}
	}
	return 0;
}