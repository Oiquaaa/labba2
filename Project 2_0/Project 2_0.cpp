// Lab_02.cpp
// < Коханець Павло >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;  // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "a = "; cin >> a;

	z1 = (1.0 - 2 * (sin(a) * sin(a))) / (1.0 + sin(2 * a));
	z2 = (1.0 - tan(a)) / (1.0 + tan(a));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}

