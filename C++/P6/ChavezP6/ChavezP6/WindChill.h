//WindChill.h

#ifndef WIND_CHILL_H
#define WIND_CHILL_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// line 10 missing ; closing the statement

void WriteHeader();
double AskForTemperature();
// Line 13 missing () as part of function delcaration
double AskForWindSpeed();
int ValidateTempAndWS(double temp, double speed);
double CalcWindchill(double T, double V);
// on line 18 the C is erronously capitalized in Windchill incorect code on line 20
// double CalcWindChill(double T, double V);
int DetermineFrostbiteTimes(double T, double V);
void Goodbye();
bool DoAgain();

#endif

