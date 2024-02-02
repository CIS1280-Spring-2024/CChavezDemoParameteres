#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include <sstream>
#include <iomanip> 

using namespace std;
class SimpleCalc
	//	The class should be named SimpleCalc.
{
private:
	char operation{ '+'};
	//	All operations are performed on doubles.
	double operand1{ 0.0 };
	double operand2{ 0.0 };
	double answer{ 0.0 };
	string results;
	string desc;
	void Calculate();
	
public:
	SimpleCalc(); // Default constructor
	void SetOperation(char oper, double op1, double op2);
	string GetResults();

};

#endif
