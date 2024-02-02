// CChavezPaintCalcDemo.cpp 
// programed by Colby Chavez
// Email: cchavez572@cnm.edu
// C++ II Constructor Demo   

#include "Functions.h"

int main()
{

	cout << WriteHeader();
	PaintCalc calculator;
	do 
	{
		AskForUserInput(calculator);
		cout << calculator.GetDescription();

	} while (DoAnother());
	cout << SayGoodbye();
	return 0;
}
