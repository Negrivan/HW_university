#include <iostream>
#include <Windows.h>
#include <conio.h>

void main()
{
	float x;
	HDC hDC = GetDC(GetConsoleWindow());
	HPEN Pen = CreatePen(0, 3, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 0, 100, 0);
	LineTo(hDC, 200, 100);
	MoveToEx(hDC, 100, 0, 0);
	LineTo(hDC, 100, 200);
	Pen = CreatePen(0, 3, RGB(8, 232, 222));
	SelectObject(hDC, Pen);
	for (x = -10.0; x <= 10.0; x += 0.001)
	{
		MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 100, 0);
		LineTo(hDC, 10 * x + 100, -10 * sin(x) + 100);
	}
}