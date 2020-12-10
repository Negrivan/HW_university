#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Здравствуйте. 0 - выход" << endl << endl;
    int a, b, ran[4], i, j, c[4], bull, cow;
    bool f = 0;

    while (true)
    {
        i = 0;
        srand(time(NULL));
        while (i < 4)
        {
            ran[i] = rand() % 10;
            for (j = 0; j < i; j++)
            {
                if (ran[i] == ran[j])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                i++;
            }
            f = 0;
        }
        cout << endl;
        int s = 0;
        while (true)
        {
            bull = 0;
            cow = 0;
            cout << s + 1 << " - ";
            s++;
            cin >> a;
            if (a == 0)
                break;
            for (i = 3; i >= 0; i--)
            {
                b = a % 10;
                c[i] = b;
                a = (a - b) / 10;
            }
            for (i = 0; i < 4; i++)
            {
                if (c[i] == ran[i])
                {
                    bull++;
                    cout << "+";
                }
                else cout << '-';
            }
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++)
                {
                    if (c[i] == ran[j])
                    {
                        cow++;
                    }
                }
            }
            cout << endl << "Быки - " << bull << ". Коровы - " << cow - bull << '.' << endl << endl;
            if (bull == 4)
            {
                cout << "Вы победили!!!! \nКоличество ходов: " << s;
                break;
            }
        }
    }
}
\