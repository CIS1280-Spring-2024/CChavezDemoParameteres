#include "SimpleCalc.h"
#include <sstream>
SimpleCalc::SimpleCalc()
//	It has one, default constructor.
{
	// Constructor does not need to set any inital vaules
}

void SimpleCalc::Calculate()
{
	switch (operation)
	{
	case '+':
		answer = operand1 + operand2;
		desc = "addition";
		break;
	case '-':
		answer = operand1 - operand2;
		desc = "subtraction";
		break;
	case '/':
		//	If the user requests a division by zero, the result string indicates that it is illegal to 
		//	perform a divide by zero. 
		if (operand2 == 0)
		{
			desc = "Calculate Error:No division by zero!";
			break;
		}
		else
		{
		answer = operand1 / operand2;
		desc = "division";
		break;
		}
	case '*':
		answer = operand1 * operand2;
		desc = "multiplication";
		break;
	default:
		//	Be sure to take care of the case when the user enters a wrong operation.
		desc = "Calculate Error Error:That operator is not allowed!";
	}

}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
// `representing the desired operation, and the two operands.The character symbols are + , -, / , and *, 
//	The actual calculation is performed in Calculate, called by SetOperation.
{

	operation = oper;
	operand1 = op1;
	operand2 = op2;
	Calculate();
}

string SimpleCalc::GetResults()
// The result of the operation is returned via a GetResults function that returns
//	a neatly formatted string that states the name of the operation, shows the 
//	two operands, the math operator, and the result in an equation - type 
//	format.
{
	int errorBuffer = desc.find("Error");
	string returnString;
	if (errorBuffer > 0)
	{
		stringstream errorResultString;
		errorResultString << "You encountered the following: " << std::setprecision(2) << desc << "\n";
		string returnString = errorResultString.str();
		return returnString;
	}
	else 
	{
		stringstream resultString;
		resultString << "Your operation was  " << desc << ": " << operand1 << operation << operand2 << "=" << answer << "\n";
		string returnString = resultString.str();
		return returnString;
	}

}