#include <math.h>
double func(double x)
{
	const double PI = 3.141592653;
	return pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
}