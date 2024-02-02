
#include "Functions.h"

void AskForUserInput(PaintCalc& calc)
{
	double number{ 0.0 };
	double height{}, length{}, width{};

	// Room dimensions
	cout << "\n\nHow tall is your room in feet?\n";
	cin >> height;
	cin.ignore();
	cout << "\n\nHow long is your room in feet?\n";
	cin >> length;
	cin.ignore();
	cout << "\n\nHow wide is your room in feet?\n";
	cin >> width;
	cin.ignore();

	// don't need setters after overloaded constructor
	// calc.SetRoomDim(height, length, width);

	// ceiling paint check
	char answer;
	bool ceiling{ false };
	cout << "\n\nDo you want to paint the ceiling? (y/n)\n";
	cin >> answer;
	cin.ignore();
	if (answer == 'y')
	{
		ceiling = true;
	}
	calc.DoCeiling(ceiling);

	//get paint coverage
	int cov{};
	cout << "\n\nWhat is the paint coverage? (sq ft / gallon)\n";
	cin >> cov;
	cin.ignore();
	// don't need setters after overloaded constructor
	//calc.SetPaintCoverage(cov);

	//builds new calulator just to run the calulation meberwise assignment
	PaintCalc pCalc(height, length, width, 1.0, 1, cov, ceiling);
	calc = pCalc;
}

string WriteHeader()
{
	return "\n\nColby Chavez Paint Calc Constructor Demo\n";
}

bool DoAnother()
{
	char answer{ 'n' };
	cout << "\n\nDo you want to calulate another room? (y/n) \n";
	cin >> answer;
	if (answer == 'y')
		return true;
	return false;
}

string SayGoodbye()
{
	return "\n\nThanks for grading Colby Chavez Paint Calc Constructor Demo, goodbye!\n";
}
