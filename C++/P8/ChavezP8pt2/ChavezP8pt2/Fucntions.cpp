#include "Header.h"

//	•	This project must be Multi - File programming : driver in main(), function bodies in Functions.cpp and prototypes in Functions.h(or your own filenames)

//	Write out a program title and brief introduction using your Header function.
void Header(string& userName)
{
	cout << "Programed by Colby Chavez \nContact: Chavez572@cnm.edu\nCChavezP8pt2 Warhammer 40k Win Rates\n\n\n Welcome to Warhammer 40k Win Rates\n\nPlease enter your username so we can continue:\n";
	cin >> userName;
	//cin.ignore();
}

void Read(string Faction[], double Games[], double Wins[], int Losses[], int Draws[], double WinRate[], string MetaFaction[])
{
	cout << "\nReading Data...\n\n";
	ifstream inputData("ChavezP8datafile.csv");
	//	Check to see if file opened
	if (!inputData)
	{
		cout << "Something went wrong and the file was not opened.\n";
	}
	else
	{
		// if file opend it gets proccesed into the arrays
		string inputString;
		getline(inputData, inputString);

		for (int i = 0; i < SIZE && std::getline(inputData, inputString); ++i)
		{
			stringstream iss(inputString);
			getline(iss, Faction[i], ',');
			iss >> Games[i];
			iss.ignore();
			iss >> Wins[i];
			iss.ignore();
			iss >> Losses[i];
			iss.ignore();
			iss >> Draws[i];
			iss.ignore();
			iss >> WinRate[i];
			iss.ignore();

		}
		

		//this is exists for testing purposes and could be removed
		cout << "Data Read!\n\n";
	}
}

void Analyze(string Faction[], double Games[], double Wins[], int Losses[], int Draws[], double WinRate[],string MetaFaction[], MetaFactionOutput& imperialMetaFaction, MetaFactionOutput& chaosMetaFaction, MetaFactionOutput& xenosMetaFaction)
{
	//this is exists for testing purposes and could be removed
	cout << "Analyzing Data...\n\n";
	

	//code to zero out datastructes
	imperialMetaFaction.games = 0;
	imperialMetaFaction.wins = 0;
	imperialMetaFaction.losses = 0;
	imperialMetaFaction.draws = 0;
	imperialMetaFaction.winRate = 0;
	chaosMetaFaction.games = 0;
	chaosMetaFaction.wins = 0;
	chaosMetaFaction.losses = 0;
	chaosMetaFaction.draws = 0;
	chaosMetaFaction.winRate = 0;
	xenosMetaFaction.games = 0;
	xenosMetaFaction.wins = 0;
	xenosMetaFaction.losses = 0;
	xenosMetaFaction.draws = 0;
	xenosMetaFaction.winRate = 0;

	// this display of conditonal statements are to apply the MetaFaction[] definitions
	// so  data can be sorted in into data strucrues for output. they are hardcoded but the data 
	// can be in any order and they will correctly be assigned a MetaFaction[] variable. 
	for (int i = 0; i < SIZE; ++i)
	{
		if (Faction[i] == "Adepta Sororitas")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Adeptus Custodes")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Adeptus Mechanicus")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Aeldari")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Astra Militarum")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Black Templars")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Blood Angels")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Chaos Daemons")
		{
			MetaFaction[i] = "Chaos";
		}
		else if (Faction[i] == "Chaos Knights")
		{
			MetaFaction[i] = "Chaos";
		}
		else if (Faction[i] == "Chaos Space Marines")
		{
			MetaFaction[i] = "Chaos";
		}
		else if (Faction[i] == "Dark Angels")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Death Guard")
		{
			MetaFaction[i] = "Chaos";
		}
		else if (Faction[i] == "Deathwatch")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Drukhari")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Genestealer Cults")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Grey Knights")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Imperial Knights")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Leagues Of Votann")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Necrons")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Orks")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Space Marines")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "Space Wolves")
		{
			MetaFaction[i] = "Imperial";
		}
		else if (Faction[i] == "T'au")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "Thousand Sons")
		{
			MetaFaction[i] = "Chaos";
		}
		else if (Faction[i] == "Tyranids")
		{
			MetaFaction[i] = "Xenos";
		}
		else if (Faction[i] == "World Eaters")
		{
			MetaFaction[i] = "Chaos";
		}
		else
		{
			MetaFaction[i] = "Error";
		}
	}

	// this for loop and its internal condtionals sort the data by metaFaction label
	//  and sum it all into the output data structures
	for (int i = 0; i < SIZE; ++i)
	{
		if (MetaFaction[i] == "Imperial")
		{
			imperialMetaFaction.games =  Games[i] + imperialMetaFaction.games;
			imperialMetaFaction.wins = imperialMetaFaction.wins + Wins[i];
			imperialMetaFaction.losses = imperialMetaFaction.losses + Losses[i];
			imperialMetaFaction.draws = imperialMetaFaction.draws + Draws[i];
		}
		if (MetaFaction[i] == "Chaos")
		{
			chaosMetaFaction.games = chaosMetaFaction.games + Games[i];
			chaosMetaFaction.wins = chaosMetaFaction.wins + Wins[i];
			chaosMetaFaction.losses = chaosMetaFaction.losses + Losses[i];
			chaosMetaFaction.draws = chaosMetaFaction.draws + Draws[i];
		}
		if (MetaFaction[i] == "Xenos")
		{
			xenosMetaFaction.games = xenosMetaFaction.games + Games[i];
			xenosMetaFaction.wins = xenosMetaFaction.wins + Wins[i];
			xenosMetaFaction.losses = xenosMetaFaction.losses + Losses[i];
			xenosMetaFaction.draws = xenosMetaFaction.draws + Draws[i];
		}
	}
	// code to set win rates in the metafaction outputs
	imperialMetaFaction.winRate = (imperialMetaFaction.wins / imperialMetaFaction.games) * 100;
	chaosMetaFaction.winRate = (chaosMetaFaction.wins / chaosMetaFaction.games) * 100;
	xenosMetaFaction.winRate = (xenosMetaFaction.wins / xenosMetaFaction.games) * 100;
	cout << "Data Analysed!\n\n";
}

bool Write(string& userName, MetaFactionOutput& imperialMetaFaction, MetaFactionOutput& chaosMetaFaction, MetaFactionOutput& xenosMetaFaction)
{
		//	output your name, a description of the data, its location(URL) and the 
		//	results of your analysis to an external file(you can also write to the 
		//	screen to check for correctness).The function should ask the user for the 
		//	output file name.NOTE : do not build your program so that it has any interaction 
		//	with the user, other than asking for the output file name.Text in your results 
		//	file should be formatted for readability.
		string fileName = userName + "'s Warhammer 40k Win Rate output";
		ofstream OutputFile(fileName);

		//Assembely of written output file in a string stream
		stringstream ss;
		ss << "IMPERIAL FACTION\nTotal games: " << setprecision(10) << imperialMetaFaction.games
			<< "\nTotal wins: " << imperialMetaFaction.wins
			<< "\nTotal losses: " << imperialMetaFaction.losses
			<< "\nTotal draws: " << imperialMetaFaction.draws
			<< "\nImperial win rate: " << setprecision(2) << imperialMetaFaction.winRate << "%\n\n\n"
			<< "CHAOS FACTION\nTotal games: " << setprecision(10) << chaosMetaFaction.games
			<< "\nTotal wins: " << chaosMetaFaction.wins
			<< "\nTotal losses: " << chaosMetaFaction.losses
			<< "\nTotal draws: " << chaosMetaFaction.draws
			<< "\nChaos win rate: " << setprecision(2) << chaosMetaFaction.winRate << "%\n\n\n"
			<< "XENOS FACTION\nTotal games: " << setprecision(10) << xenosMetaFaction.games
			<< "\nTotal wins: " << xenosMetaFaction.wins
			<< "\nTotal losses: " << xenosMetaFaction.losses
			<< "\nTotal draws: " << xenosMetaFaction.draws
			<< "\nXenos win rate: " << setprecision(2) << xenosMetaFaction.winRate << "%\n\n\n";
		string outputSS = ss.str();

	
		//Close opened file using close()
		OutputFile.close();
		OutputFile.open(fileName);
		if (OutputFile.is_open())
		{
			OutputFile << outputSS;
			cout << "A file named " << fileName << " has been created with the following information : \n\n" << outputSS << "\n\n Thank you for using Warhammer 40k Win Rates";
			OutputFile.close();
			return true;
		}
		else
		{
			cout << "Something went wrong and the file was not properly created";
			return false;
		}

}



