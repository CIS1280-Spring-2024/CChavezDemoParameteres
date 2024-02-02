#include "Circle.h"

Circle::Circle()
{
}

void Circle::Calculate()
{
	area = PI * radius * radius;
	circum = 2 * PI * radius;
}

void Circle::SetRadius(double rad)
{
	radius = rad;
	Calculate();
}
