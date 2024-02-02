#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <sstream>
#include <iomanip> 
#include <iostream>
#include "PaintCalc.h"
using namespace std;

void AskForUserInput(PaintCalc& calc);
string WriteHeader();
bool DoAnother();
string SayGoodbye();
#endif
