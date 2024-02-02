//  Your project will contain three files : Driver.cpp, which will
//  contain the main function, and Functions.h and Functions.cpp, 
//  which will contain the functions to be called from main.

//	Guards
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

//	Includes and setup all in Functions.h, as I'll be includiing 
//	it in both other files
//	DONT SUBMIT WITHOUT TESTING FOR RELIVANCE
#include <string>		
#include <iomanip>
#include <istream>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Constant declaration
const int SIZE = 10;

//  Functions.h will also contain struct that holds SentenceData.
//  That includes :

struct SentenceData
{
	int numSwapped[SIZE]{};
	string sentences[SIZE]{};
	vector<string> vColors;
	vector<string> vPhrases;
	int total{ 0 };
	int modified{ 0 };
	ofstream output;
	string resultsOriginal;
	string resultsSwapped;
};

// Function Declaration
void WriteHeader();
void AskForInputFilenames(string& colorFile, string& sentenceFile, string& phraseFile);
string AskForOutputFilenames();
bool ReadColors(SentenceData& pData, string filename);
bool ReadSentences(SentenceData& pData, string filename, string sentences[]);
bool ReadPrases(SentenceData& pData, string filename);
bool WriteOriginal(SentenceData& pData, int totalSentenceModified, string& outputFile);
bool WriteResults(SentenceData& pData, string& outputFile);
int SwapColors(SentenceData& pData);
void Goodbye();
bool DoAnother();
#endif
