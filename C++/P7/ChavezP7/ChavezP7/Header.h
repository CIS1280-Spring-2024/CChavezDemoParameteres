
#ifndef _HEADER_H
#define _HEADER_H

// #includes & guards
#pragma warning(disable : 4996).
#include <string>		
#include <iomanip>		
#include <sstream>
#include <fstream>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 8;

//	Your program should first declare variables, include your arrays.
//	Declare two struct variables to hold data.
// `The first will be the TravelerInfo struct, which holds name(string), weight(double), newWeight(double) for the weight on the other planet, planetChoice(int) and speed(int).
//	The second struct is the TravelTimeCalc struct.It holds total travel time, years, days, and hours. All are ints.
//	Both structs are declared in the Functions.h file.
struct TravelerInfo
{
	string name;
	double weight;
	double newWeight;
	int planet;
	int speed;
};

struct TravelTimeCalcs
{
	int travelTime;
	int days; 
	int years;
	int hours;
};


// Header function delcaration
void Header();
void FillPlanetInfo(string planetName[], double distFromSun[], double specificGravity[]);
void AskSpaceTravellerInfo(string planetName[], TravelerInfo& travelInfo);
void Calculate(string planetName[], double distFromSun[],double specificGravity[], TravelerInfo& travelInfo, TravelTimeCalcs& tTime);
bool Write(string planetName[], TravelerInfo& travelInfo, TravelTimeCalcs& tTime, string* fileName);
void CalcTimes(TravelTimeCalcs& tTime);
string CreateFilename(TravelerInfo& travelInfo);
bool DoAnother();
void Goodbye();

#endif
