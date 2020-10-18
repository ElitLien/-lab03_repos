// Lab_03_3.cpp
// М'ягких Владислав
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; 
	double R; 
	double y; 
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -1 - R)
		y = -x - 1 - R;
	else
		if (-1 - R < x && x <= -1)
			y = sqrt((R * R) - (x + 1) * (x + 1));
		else
			if (-1 < x && x <= 1)
				y = R + x + 1;
			else
				if (1 < x && x <= 2)
					y = (2 * R) - (R * x) - x + 1;
				else
					y = -1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}