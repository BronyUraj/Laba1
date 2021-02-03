// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
void main()
{
	using namespace std;
	extern void func();
	extern double x;
	extern double f;
	cout << "x = " << x << endl;
	func();
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	func();
	cout << "f = " << round(f * 10000) / 10000;
	return;
}