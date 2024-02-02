// Programed by Colby Chavez
// contact cchavez572@cnm.edu
// program name: ChavezP7 - planet speed and gravity calulator

#include "Header.h"


int main()
{
	//	This program goes where no program has gone before, exploring new frontiers in C++.
	//	The program performs calculations concerning weight on various 
	//	planets as well as travel time between planets.In main, use arrays to hold planet names, 
	//	distance from the sun, and the specific gravity on each planet.
	string planetName[SIZE];
	string filename;
	double distFromSun[SIZE];
	double specificGravity[SIZE];
	//	These are parallel arrays, so that the information at a position in each array refers 
	//	to information concerning the same planet.
	//	We will travel from earth to another planet.
	// travelInfo sruct declaration
	TravelerInfo travelInfo;
	TravelTimeCalcs tTime;

	//	Write out a program title and brief introduction using your Header function.
	Header();
	//	Pass the arrays to the FillPlanetInfo function, which will load the data into the three arrays.
	FillPlanetInfo(planetName, distFromSun, specificGravity);

	//	Start a do while loop in main as your Play loop.
	do {
		//	Pass the  function AskSpaceTravellerInfo a reference to the TravelerInfo struct 
		//	variable and the array of planet names.
		//	Get the user’s name, Earth weight, the speed they want to travel 
		//	and the planet they wish to visit.
		AskSpaceTravellerInfo(planetName, travelInfo);

		//	Pass the data you obtained(TravelerInfo variable), the 
		//	TravelTimeCalc struct variable, and the 3 arrays into 
		//	the CalculateTimeandWeight function, which will determine 
		//	the user’s weight on the destination planet and the 
		//	travel time in hours.
		Calculate(planetName, distFromSun, specificGravity, travelInfo, tTime);

		//	Call the Write function, 
		Write(planetName, travelInfo, tTime, &filename);

	//	Ask the user if they would like to calculate another space trip.
	// Remember to tell the user the choices for an answer.
	// If yes, loop up to the top of the Play Loop.When the user is done, present a good - bye message.
	} while (DoAnother());
	Goodbye();
	//	Set the precision, etc, so you are reporting numbers with 2 decimal places.

	return 0;
}

