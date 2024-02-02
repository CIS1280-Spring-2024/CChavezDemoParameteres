// Programed by Colby Chavez
// contact cchavez572@cnm.edu
// program name: CChavezP8pt2

//	•	This project must be Multi - File programming : driver in main(), function bodies in Functions.cpp and prototypes in Functions.h(or your own filenames)
#include "Header.h"


int main()
{

	//	•	Main will drive all other functions in your program – variables will be declared in 
	//		main and passed to functions as needed; values will be returned to main and passed 
	//		to other functions, as needed.
	//	•	Pointers and /or references must be part of this final project.
	//	•	Your project cannot be a modified version of any program done as a programming 
	//		assignment.
	
	//	•	Include proper use of variables : declaration, initialization and 
	//		usage – avoid warnings.
	//	main variable declatation 
	// Arrarys
		//	•	Your data will be stored in arrays.There can be multiple parallel one - 
		//		dimensional arrays or , if you prefer, you may use a two or three - dimensional array.
		//	•	Conditional and looping structures must be included as part of your code.
	string Faction[SIZE]{""};
	double Games[SIZE]{};
	double Wins[SIZE]{};
	int Losses[SIZE]{};
	int Draws[SIZE]{};
	double WinRate [SIZE]{};
	// this last array is not in the data and I will be creating data to fll it 
	// inside the Read() fucntion so that I can sort the data more efficently in 
	// the Analyse() function
	string MetaFaction[SIZE]{};
	// output struct delcatation data is loadded in the Analyse() function 
	MetaFactionOutput imperialMetaFaction;
	MetaFactionOutput chaosMetaFaction;
	MetaFactionOutput xenosMetaFaction;
	string userName = "";

	
	//	•	Conditional and looping structures must be included as part of your code.
	Header(userName);
	//	•	Your program will call a Read function that will read an input file that has 
	//		at least 25 data points.
	Read(Faction, Games, Wins, Losses, Draws, WinRate, MetaFaction);
	//	•	Your program will then call an Analyze function(or maybe 3 functions) 
	//	instead of three different functions I built 3 data structures to hold my 
	//	output data in one function
	Analyze(Faction, Games, Wins, Losses, Draws, WinRate, MetaFaction, imperialMetaFaction, chaosMetaFaction, xenosMetaFaction);
	//	•	Your program will then call a Write function which will open a file, 
	Write(userName, imperialMetaFaction,chaosMetaFaction,xenosMetaFaction);
	return 0;
}

