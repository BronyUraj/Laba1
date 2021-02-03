// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
#include <math.h>
void main()
{
	using namespace std;
	const double PI = 3.14159265358979323;
	double x = 5;
	cout << "x = " << x << endl;
	double f = pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	f = pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
	cout << "f = " << round(f * 10000) / 10000;
	return;
}