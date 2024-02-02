
#ifndef _HEADER_H
#define _HEADER_H

//	•	This project must be Multi - File programming : driver in main(), function bodies in Functions.cpp and prototypes in Functions.h(or your own filenames)

// #includes & guards
#include <string>		
#include <iomanip>
#include <istream>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// universal constant and Struct declaration in the header file
// this constants for the total number of datapoint in the file
// and for the array sized based on the fixed facion count of 26
const int SIZE = 26;

struct MetaFactionOutput
{
	string metaFaction;
	double games;
	double wins;
	int losses;
	int draws;
	float winRate;
};


// Header function delcaration
void Header(string& userName);
void Read(string Factions[], double Games[], double Wins[], int Losses[], int Draws[], double WinRate[], string MetaFaction[]);
void Analyze(string Factions[], double Games[], double Wins[], int Losses[], int Draws[], double WinRate[], string MetaFaction[],MetaFactionOutput& imperialMetaFaction, MetaFactionOutput& chaosMetaFaction, MetaFactionOutput& xenosMetaFaction);
bool Write(string& userName, MetaFactionOutput& imperialMetaFaction, MetaFactionOutput& chaosMetaFaction, MetaFactionOutput& xenosMetaFaction);

#endif

