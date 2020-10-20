// Lab_03_4.cpp
// М'ягких Владислав
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11
#include <iostream>
using namespace std;
int main()
{
	double x; 
	double y; 
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if ((y * y <= (R * R) - (x * x) && x >= 0 && y>=0) ||
		(y >= - x - R && y <= 0 && x <=0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}