// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
using namespace std;
void main()
{
	double func(double x);
	double x = 5;
	cout << "x = " << x << endl;
	double f = func(x);
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	f = func(x);
	cout << "f = " << round(f * 10000) / 10000;
}
