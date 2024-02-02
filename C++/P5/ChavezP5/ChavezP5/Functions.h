#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void Header();
void WriteGoodbye();
string AskForName();
void AskForBarrels(double& rDiameter, double& rHeight, int& rBarrels, int& rAgingLoss);
double CalculateNetWhiskeyVol(double diameter, double height, int barrels);
double CalculateNetWhiskeyVol(double diameter, double height, int barrels, int agingLoss);
void DetermineBottles(double volume, int* pBottles, int* pCases, int* pLoneBottles, double* pExtraForCrew);
void WriteResults(string name, double volume, int agingLoss, int barrels, int cases, int bottles, int loneBottles, double extraForCrew);

// AskForBarrels
// CalculateNetWhiskeyVol
// DetermineBottles
// WriteResults
#endif





