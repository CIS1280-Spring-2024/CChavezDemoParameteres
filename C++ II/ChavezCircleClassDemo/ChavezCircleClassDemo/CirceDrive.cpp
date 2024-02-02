// cchavez572@cnm.edu Colby Chavez
// Demo: The Circle Class
// CircleDrive.ccp

#include"Circle.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "\Colby Chavez Circle Demo";

	//variables
	double radius;
	Circle circle;

	cout << "\nPlease enter the radius of the circle:     ";
	cin >> radius;

	circle.SetRadius(radius);

	double circum = circle.GetCircum();
	double area = circle.GetArea();

	cout << "\nFor a circle with a radus of " << radius << " has a circumfrence  of " << circum << ", and an area of " << area << ".\n\n";
}