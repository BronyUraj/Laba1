// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
#include <math.h>
using namespace std;
double func(double x)
{
	const double PI = 3.141592653;
	return pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
}

void main()
{
	double x = 5;
	cout << "x = " << x << endl;
	double f = func(x);
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	f = func(x);
	cout << "f = " << round(f * 10000) / 10000;
}