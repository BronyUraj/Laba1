#include <math.h>
#include "func.h"
double x = 5;
double f;
void func()
{
	const double PI = 3.141592653;
	f = pow(cos(3 / 8. * PI - x / 4.), 2) - pow(cos(11 / 8. * PI + x / 4.), 2);
	return;
}