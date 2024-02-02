#ifndef CIRCLE_H
#define CIRCLE_H

const double PI{ 3.14159 };

class Circle
{
private:
	double radius{ 1 };
	double circum{ 1 };
	double area{ 1 };
	void Calculate();

public:
	Circle();
	void SetRadius(double rad);
	double GetCircum() { return circum; }
	double GetArea() { return area; }
};

#endif
#ifndef CIRCLE_H
#define CIRCLE_H

const double PI{ 3.14159 };

class Circle
{
private:
	double radius{ 1 };
	double circum{ 1 };
	double area{ 1 };
	void Calculate();

public:
	Circle();
	void SetRadius(double rad);
	double GetCircum() { return circum; }
	double GetArea() { return area; }
};

#endif
