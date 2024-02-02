
//	a.	Add the include guards.
#ifndef PAINTCALC_H
#define PAINTCALC_H

#include <string>
#include <sstream>
#include <iomanip> 
using namespace std;

class PaintCalc
{
private:
//	b.Add private class variables :
	double height, length, width;	//dimensions are in feet
	double exactP;			//exact # of gallons required
	int gallons, paintCov;		//paintCov in sq. ft. / gallon
	bool bCeiling;			//true if painting ceiling
	string desc;			//answer in a sentence
//	c.	Add private methods:
	void Calculate();
	void BuildDesc();

public:
	PaintCalc();		//default constructor
	PaintCalc(double h, double l, double w, double exactP, int gallons, 
		int coverage, bool ceiling); // Overloaded constructor
	//setters
	void SetRoomDim(double h, double l, double w);
	void SetPaintCoverage(int pc);
	void DoCeiling(bool bc);
	//getters
	double GetExactPaint() const { return exactP; }
	int GetGallons() const { return gallons; }
	string GetDescription() const;

};

#endif

