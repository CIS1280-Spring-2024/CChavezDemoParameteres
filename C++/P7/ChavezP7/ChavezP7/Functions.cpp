#include "Header.h"

//	Write out a program title and brief introduction using your Header function.
void Header()
{
	cout << "Programed by Colby Chavez \nContact: Chavez572@cnm.edu\nChavezP7 - planet speed and gravity calulator\n\n\n Welcome to P7 Planets!.\n\nThis program will calculate the time it would take you to travel between earth, and other planets in the solar system.\nYou will be able to select how fast you travel, and then the results will be calulated, along with how much you would weight on the planet you are traveling to.\nAll of this will then be output on the screen as well as to a time coded file with your name.\n\nFirst, the program will have to ask you some questions.\n";
}
//	Pass the arrays to the FillPlanetInfo function, which will load the data into the three arrays.
void FillPlanetInfo(string planetName[], double distFromSun[],double specificGravity[])
{
	planetName[0] = "Mercury";
	planetName[1] = "Venus";
	planetName[2] = "Earth";
	planetName[3] = "Mars";
	planetName[4] = "Jupiter";
	planetName[5] = "Saturn";
	planetName[6] = "Uranus";
	planetName[7] = "Neptune";

	// distance in millions of miles
	distFromSun[0] = 36000000;
	distFromSun[1] = 67000000;
	distFromSun[2] = 93000000;
	distFromSun[3] = 141000000;
	distFromSun[4] = 483000000;
	distFromSun[5] = 886000000;
	distFromSun[6] = 1782000000;
	distFromSun[7] = 2793000000;

	//specific gravity
	specificGravity[0] = 0.27;
	specificGravity[1] = 0.86;
	specificGravity[2] = 1.00;
	specificGravity[3] = 0.37;
	specificGravity[4] = 2.64;
	specificGravity[5] = 1.17;
	specificGravity[6] = 0.92;
	specificGravity[7] = 1.44;
}
//	Pass the  function AskSpaceTravellerInfo a reference to the TravelerInfo struct 
//	variable and the array of planet names.
//	Get the user’s name, Earth weight, the speed they want to travel 
//	and the planet they wish to visit.
void AskSpaceTravellerInfo(string planetName[], TravelerInfo& travelInfo)
{
	//Please enter your name
	cout << "What is your name?\n";
	getline(cin, travelInfo.name);
	//Please enter your weight
	cout << "how much do you weight in Kg?\n";
	cin >> travelInfo.weight;
	cin.ignore();
	//	please enter your Travel destination
	//	You will need to provide a menu with the planet names 
	//	and a way for the user to select the chosen destination.
	int planetChoice;
	cout << "You are currently on earth.\nWhat planet would you like to travel to?\nPlease enter a number corresponding to that planet on the following list \n\n";
	for (unsigned int i = 0; i < SIZE; i++) 
	{
		cout << i + 1 << ") " << planetName[i] << "\n";
	}
	cin >> planetChoice;
	cin.ignore();
	travelInfo.planet = planetChoice - 1;

	//How fast would you like to travel (in miles per hour)?
	cout << "Ok, "<< travelInfo.name << ", how fast would you like to travel to " << planetName[planetChoice-1] << "(in miles per hour)?\n";
	cin >> travelInfo.speed;
	cin.ignore();
}

//calculates traveltime in hours, new weight and passes values to Write-Use the program instructions
void Calculate(string planetName[], double distFromSun[],double specificGravity[], TravelerInfo& travelInfo, TravelTimeCalcs& tTime)
{


	if (distFromSun[travelInfo.planet] >= distFromSun[2])
	{
		float travelDistance = distFromSun[travelInfo.planet] - distFromSun[2];
		tTime.travelTime = (travelDistance/ travelInfo.speed);
	}
	else
	{
		float travelDistance = distFromSun[2] - distFromSun[travelInfo.planet];
		tTime.travelTime = (travelDistance / travelInfo.speed);
	}

	travelInfo.newWeight = (travelInfo.weight * specificGravity[travelInfo.planet]);
	
}

//	The Write function
//	passing the planet name array, a pointer to the filename,
//	and the two structs, containing all the data to be presented to the user in a cout 
//	statement and to be written into a file.Call the CalcTimes function to convert the 
//	total hours to years, days and hours.Use a stringstream to create a string with all 
//	of the output data which will be displayed to the user and also written into a file.
//	Use two decimal places to display any numbers.
bool Write(string planetName[], TravelerInfo& travelInfo, TravelTimeCalcs& tTime, string* filename)
{
	//	passing the planet name array, a pointer to the filename,
	//	and the two structs, containing all the data to be presented to the user in a cout 
	//	statement and to be written into a file.Call the CalcTimes function to convert the 
	//	total hours to years, days and hours.
	
	CalcTimes(tTime);
	//	Still in the Write function, call CreateFilename to create a filename from the user’s 
	//	name and from today’s date.
	*filename = CreateFilename(travelInfo); //CreateFilename(info)

	ofstream OutputFile(*filename);

	//	Use a stringstream to create a string with all 
	//	of the output data which will be displayed to the user and also written into a file.
	//	Use two decimal places to display any numbers.
	stringstream ss;
	ss << "Ok, " << travelInfo.name << " you started on Earth and traveled to "
		<< planetName[travelInfo.planet] << " at a speed of " << travelInfo.speed
		<< "MPH.\nAt that speed during the journy to " << planetName[travelInfo.planet] << "on earth "
		<< tTime.travelTime << " Hours have passed...\n\nWhich is " << tTime.days << "days...\n\nOr "
		<< tTime.years << " years...\n\nWhen you arrrive on " << planetName[travelInfo.planet] << ", "
		<< travelInfo.name << " you weight " << travelInfo.newWeight
		<< "kg. Compared to your weight on earth which was " << travelInfo.weight << "kg.\n\n";
		

	string outputSS = ss.str();
	
	//Close opened file using close()
	OutputFile.close();
	
	//	In Write, open the file and check to see if the file was opened.
	OutputFile.open(*filename);
	//	Return a bool from the Write function indicating file success or failure.
	//	Check the bool in main and report to the user that the file was created, 
	//	and the filename and if not, that no file was created.
	//	I just did all of this from within the bool, rather than going back to main
	if (OutputFile.is_open())
	{
		cout << "A file named " << *filename << " has been creaed with the following information:\n\n" << outputSS;
		OutputFile.close();
		return true;
	}
	else
	{
		cout << "Something went wrong and the file was not properly created";
		return false;
	}
	
}

//calculates years, days, and hours of traveltime and writes to screen
void CalcTimes(TravelTimeCalcs& tTime)
{
	tTime.years = tTime.travelTime / 8760;
	tTime.days = tTime.travelTime / 24;
}

// function to creat files named from TravelerInfo
string CreateFilename(TravelerInfo& travelInfo)
{
	static int number = 1;

	//Get system date and time

	// current date/time based on current system
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int year = 1900 + ltm->tm_year;
	int month = 1 + ltm->tm_mon;
	int day = ltm->tm_mday;

	stringstream ss2;
	ss2 << travelInfo.name << "_" << year << "_" << month << "_" << day;

	
	number++;

	return ss2.str();
}


void Goodbye()
{
	cout << "Thank you for using P7 Planets!\n\n";
}
bool DoAnother()
{
	string doAnother;
	cout << "\n\n Would you like to calulate travel to another planet? yes/no \n";
	getline(cin, doAnother);
	if (doAnother == "yes")
	{
		return true;
	}
	else
	{
		return false;
	}

}

