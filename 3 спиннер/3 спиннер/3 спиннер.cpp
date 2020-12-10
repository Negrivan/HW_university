#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	unsigned long long int N = 0, M = 0, S = 0, Res = 0;
	cout << "Введите размеры исходного листа" << endl;

	cin >> N >> M;  //Считывание размеров исходного листа.

	for (int i = 0; i <= N; i++) //Подсчет количества прямоугольников которое создает один ряд клеток.
	{
		S += i;
	}
	for (int i = 1; i <= M; i++) //Подсчет общего количества прямоугольников.
	{
		Res = i * S + Res;
	}
	cout << "Суммарное количество прямоугольников = " << Res << endl;
} 
