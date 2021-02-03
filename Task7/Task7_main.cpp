// f(x) = cos(3/8 * pi - x/4) ^ 2 - cos(11/8 * pi + x/4)^2
#include <iostream>
#include "func.h"
using namespace std;
void main()
{
	cout << "x = " << x << endl;
	func();
	cout << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	func();
	cout << "f = " << round(f * 10000) / 10000;
}