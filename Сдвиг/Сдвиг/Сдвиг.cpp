#include <iostream>

using namespace std;

void FillArray(int* const Arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 11;
	}
	Arr[size -1] = 5;
}

void ShowArray(int* const Arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}

void MoveRight(int*& Arr, int const sdvig, int const size)
{
	int *newArray = new int[size];
	for (int  i = 0; i < size; i++)
	{
		if (i + sdvig < size)
		{
			newArray[i + sdvig] = Arr[i];
		}
	}
	for (int i = 0; i < sdvig; i++)
	{
		newArray[i] = 0;
 	}
	delete[] Arr;
	Arr = newArray;
	
}
void MoveLeft(int*& Arr, int const sdvig, int const size)
{
	int* newArray = new int[size];
	for (int i = size-1; i >= -sdvig; i--)
	{
		if (i + sdvig >= 0)
		{
			newArray[i + sdvig] = Arr[i];
		}
	}
	for (int i = size - 1; i >= size + sdvig; i--)
	{
		newArray[i] = 0;
	}
	delete[] Arr;
	Arr = newArray;
}
	
	

void main()
{
	const int size = 10;
	int Shift = 0;
	int* Array = new int[size];
 	cout << "Enter necessary shift(+ for the right, - for the left)" << endl;
	cin >> Shift;
	FillArray(Array, size);
	ShowArray(Array, size);
	if (Shift > size)
	{
		for (int i = 0; i < size; i++)
		{
			Array[i] = 0;
		}
	}
	else
	{
		if (Shift >= 0)
		{
			MoveRight(Array, Shift, size);
		};
		if (Shift <= 0)
		{
			MoveLeft(Array, Shift, size);
		};
	}
	ShowArray(Array, size);

	delete[] Array;
}