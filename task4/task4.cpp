// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
#include <math.h>

double x = 5;
double f;

void main()
{
	using namespace std;
	void func();
	cout << "x = " << x << endl;
	func();
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	func();
	cout << "f = " << round(f * 10000) / 10000;
	return;
}

void func()
{
	const double PI = 3.141592653;
	f = pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
	return;
}