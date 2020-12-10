#include <iostream>
#include <map>
#include <string>

using namespace std;

int FromRoman(string n, map<char, int> m)
{
	int buf = 0;
	int res = 0;
	for (char c : n)
	{
		int n = m[c];
		if (n < buf)
		{
			res += buf;
			buf = n;
		}
		else
		{
			if (n > buf)
			{
				if (buf == 0)
				{
					buf = n;
				}
				else
				{
					res += n - buf;
					buf = 0;
				}
			}
			else
			{
				if (n == buf)
				{
					res += buf + n;
					buf = 0;
				}
			}
		}
	}
	return res + buf;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	map<char, int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
Begin:
	string x;
	cin >> x;
	int Dlina = x.length();
	int y = 0;
	int check50 = 0, check500 = 0, check5 = 0;
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == 'V')
		{
			check5++;
		}
		if (x[i] == 'L')
		{
			check50++;
		}
		if (x[i] == 'D')
		{
			check500++;
		}
	}
	if (check50 >= 2 || check500 >= 2 || check5 >= 2)
	{
		y++;
	}
	else
	{
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == 'I' || x[i] == 'X')
			{
				if (m[x[i + 1]] > 10 * m[x[i]])
				{
					y++;
					break;
				}
			}
			if (x[i] == 'V' || x[i] == 'L' || x[i] == 'D')
			{
				if (m[x[i]] < m[x[i + 1]])
				{
					y++;
					break;
				}
			}
		}
	}
	for (int i = 0; i < x.length(); i++)
	{
		int Counter = 1;
		for (int j = 0; j < i; j++)
		{

			if (x[i] == x[j])
			{
				Counter++;
			}
			if (Counter > 4)
			{
				y++;
				break;
			}
		}
	}

	if (x.length() > 2)
	{
		for (int i = 0; i <= x.length() - 3; i++)
		{
			if (x[i] == x[i + 1] && x[i] == x[i + 2] && x[i] == x[i + 3])
			{
				y++;
				break;
			}
			if (x[i] == x[i + 3] && m[x[i + 2]] == m[x[i + 1]] / 2)
			{
				y++;
				break;
			}
			if (x[i + 1] == x[i + 2] && m[x[i]] < m[x[i + 1]])
			{
				y++;
				break;
			}
			if (x[i] == x[i + 3] && (m[x[i + 1]] + m[x[i + 2]]) % 6 == 0)
			{
				y++;
				break;
			}
		}
	}
	if (x.length() >= 2)
	{
		for (int i = 0; i < x.length() - 2; i++)
		{
			if (x[i] == x[i + 2] && m[x[i]] < m[x[i + 1]])
			{
				y++;
				break;
			}
		}
		for (int i = 0; i < x.length() - 2; i++)
		{
			if (x[i] == x[i + 1] && m[x[i + 2]] > m[x[i]])
			{
				y++;
				break;
			}
		}
	}

	if (y == 0)
	{
		cout << FromRoman(x, m) << endl;
	}
	else
	{
		cout << "Значения неверные" << endl;
	}
	goto Begin;
	return 0;
}