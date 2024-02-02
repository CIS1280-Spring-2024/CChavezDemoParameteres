#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// In the.h file, before the prototypes, declare a variable const int SIZE{ 6 };
const int SIZE{ 6 };

void WriteHeader();
void  AskForInts(int nums[]);
void CalcSumAndAve(int nums[], int &sum, double &ave);
void DisplayAll(int nums[], int sum, double ave);
bool DoAnother();
#endif
