// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
#include <math.h>
using namespace std;
double x = 5;
double f;

void main()
{
	void func();
	cout << "x = " << x << endl;
	func();
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	func();
	cout << "f = " << round(f * 10000) / 10000;
}

void func()
{
	const double PI = 3.141592653;
	f = pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
}