#include "PaintCalc.h"

void PaintCalc::Calculate()
{
    //  c.Now let’s do the Calculate function :
    //  need some local variables to calculate areas
    double shortWalls{ width * height * 2.0 };
    double longWalls{ length * height * 2.0 };
    double total{ shortWalls + longWalls };
    //  add in the ceiling if it is to be painted
    if (bCeiling == true)
    {
        double ceilingSquareFootage{ length * width };
        total = total + ceilingSquareFootage;
    }
    //  calculate the amount of paint needed
    exactP = total / paintCov; //gallons(decimal)

    //  Round up to the next integral gallon size and cast
    //  into an int to assign into gallons
    gallons = static_cast<int>(ceil(exactP));
}

void PaintCalc::BuildDesc()
{
    //  Now the BuildDesc function.We’ll use stringstream - better #include it in the.h file, too!
    //create and format the stringstream object:
    stringstream ss;
    ss.setf(ios::fixed | ios::showpoint);
    ss.precision(2);
    //Add the text 
    ss << "\n  Your room is " << length << "feet X " << width << " feet, with a " << height << " foot ceiling.\n\n  It needs exactly " << exactP << " gallons," << " so buy " << gallons << " gallons of paint." << endl << endl;
    //Convert to a string :  
    desc = ss.str();

}
//	iii.Use a constructor initializer.Same comment as for the declaration approach.
//	The two techniques are the same.
//	Here is the initializer :
// OG default constructor
//  PaintCalc::PaintCalc(): height{ 1.0 }, length{ 1.0 }, width{ 1.0 },
//  exactP{ 1.8 }, gallons{ 2 }, paintCov{ 200 },
//  bCeiling{ false }
//  {
//  }

// delagating constructor
PaintCalc::PaintCalc() : PaintCalc(1.0, 1.0, 1.0, 1.8, 2, 200, false)
{

}
// Overloaded constructor
PaintCalc::PaintCalc(double h, double l, double w, double exactP,
    int gallons, int coverage, bool ceiling) :
    height{ h }, length{ l }, width{ w }, exactP{ exactP },
    gallons{ gallons }, paintCov{ coverage }, bCeiling{ ceiling }
{

}

//	b.Now let’s look at the setters.Our default project has no real values in it.
//	So we need to use the setters.They are also called mutators.Why ? 
//	they change the values of the class variables.The value of the class 
//	variables is called the state of the object.
void PaintCalc::SetRoomDim(double h, double l, double w)
{
	length = l;
	width = w;
	height = h;
}

void PaintCalc::SetPaintCoverage(int pc)
{
	paintCov = pc;
}

void PaintCalc::DoCeiling(bool bc)
{
	bCeiling = bc;
}

string PaintCalc::GetDescription() const
{
    //  Now the BuildDesc function.We’ll use stringstream - better #include it in the.h file, too!
    //create and format the stringstream object:
    stringstream ss;
    ss.setf(ios::fixed | ios::showpoint);
    ss.precision(2);
    //Add the text 
    ss << "\n  Your room is " << length << "feet X " << width << " feet, with a " << height << " foot ceiling.\n\n  It needs exactly " << exactP << " gallons," << " so buy " << gallons << " gallons of paint." << endl << endl;
    //Convert to a string :  
    return ss.str();
}
