#include <math.h>

double f;
double x = 5;

void func()
{
	const double PI = 3.141592653;
	f = pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
}