#ifndef MORT_CALC_H
#define MORT_CALC_H

//MortCalc.h

//Function prototypes

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

void Header();
double AskPrin();
double AskInterest();
int AskYears();
bool Validate(double prin, double interest, int years);
string MortCalc(int years, double principle, double interest);
void Goodbye();
bool DoAgain();

#endif
