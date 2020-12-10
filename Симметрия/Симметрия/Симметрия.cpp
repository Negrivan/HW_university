#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string str;
    cin >> str;

    int k = str.length();
    char t = str[((k - 1) / 2)];
    int j = ((k - 1) / 2);
    int h = 0;
    if (k % 2 == 0)
    {
        cout << "Число не может быть симметричным" << endl;
    }
    else
    {
        if (t == '.')
        {
            for (int i = 1; j - i >= 0 && j + i < k; i++)
            {
                if (str[j - i] == str[j + i])
                {
                    h++;
                }
            }
        }
        if (h == j)
        {
            cout << "Число симметрично" << endl;
        }
        else
        {
            cout << "Число несимметрично" << endl;
        }
    }
}