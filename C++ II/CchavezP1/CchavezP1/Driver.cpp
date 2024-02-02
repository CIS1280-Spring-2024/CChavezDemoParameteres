//  Programmed by Colby Chavez
//  Email: cchavez572@cnm.edu
//  The goal of this program is to read in several sentences. 
//  If the sentence contains a color--that is found in the 
//  Colors.txt file, that color is replaced with the corresponding 
//  phrase found in the Phrases.txt file.   


//  Your project will contain three files : Driver.cpp, which will
//  contain the main function, and Functions.h and Functions.cpp, 
//  which will contain the functions to be called from main.

#include "Functions.h"

int main()
{
	do {

		//	The main function starts with displaying the class Header, 
		//	by calling a function. 
	
		//	Main contains the variable declarations :
		SentenceData data;
		string sentences[SIZE];
		int totalSentenceModified{ 0 };

		//	Main also contains the default filename assignments into 
		//	strings, and all of the calls to the functions.
		string colorFile;
		string sentenceFile;
		string phraseFile;
		string outputFile;  
		WriteHeader();
		AskForInputFilenames(colorFile, sentenceFile, phraseFile);
	
		//	Call the Read function for each file.
		ReadColors(data, colorFile);
		ReadSentences(data, sentenceFile, sentences);
		ReadPrases(data, phraseFile);

		//	Ask for the output filename
		outputFile = AskForOutputFilenames();

		//	Call the WriteOriginal function
		WriteOriginal(data, totalSentenceModified, outputFile);

		//	In the branch where all three files were successfully read, 
		//	call a function SwapColors, which returns an int, the number 
		//	of sentences that were modified.
		totalSentenceModified = SwapColors(data);
		// , open the output file, and call the 
		//	function WriteResults.
		WriteResults(data, outputFile);
		
	} while (DoAnother());
	//	When the program has finished executing, display a Good - bye 
	//	message, by calling a function.
	Goodbye();
	return 0;
}




