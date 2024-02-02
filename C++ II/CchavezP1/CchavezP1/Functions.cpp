//  Your project will contain three files : Driver.cpp, which will
//  contain the main function, and Functions.h and Functions.cpp, 
//  which will contain the functions to be called from main.

#include "Functions.h"

// Function Definitions
void WriteHeader()
{
	cout << "CchavezP1\nProgrammed by Colby Chavez\nEmail: cchavez572@cnm.edu\n\n\n";
	cout << "The goal of this program is to read in several sentences.\nIf the sentence contains a color that is found in the\nColors.txt file, that color is replaced with the\ncorresponding phrase found in the Phrases.txt file.\n\n\n";
}

void AskForInputFilenames(string& colorFile, string& sentenceFile, string& phraseFile)
//	Also, it has the output file ofstream object declared and 
//	the output file opened and checked.
//	Ask the user if they want to enter a filename for each 
//	file or if they want to use the default value.
//	Don’t make the user type in all of the filenames if they 
//	want to use the default.
//	You may do this in main, or in a function(or more than one).
//	For instance, I asked them to enter 0 if they wanted the default.
//	Ask the user if they want to enter a filename for each file or if 
//	they want to use the default value.Don’t make the user type in all
//	of the filenames if they want to use the default.You may do this 
//	in main, or in a function(or more than one).
//	For instance, I asked them to enter 0 if they wanted the default.
{
	string textBuffer;
	cout << "\nPlease, enter the name of the color file you would like to use (Enter 0 if you would like to use the default)?:";
	cin >> textBuffer;
	
	if (textBuffer != "0")
	{
		colorFile = textBuffer;
	}
	else
	{
		colorFile = "Colors.txt";
	}
	cin.ignore();
	cout << "\nPlease, enter the name of the sentence file you would like to use (Enter 0 if you would like to use the default)?:";
	cin >> textBuffer;
	if (textBuffer != "0")
	{
		sentenceFile = textBuffer;
	}
	else
	{
		sentenceFile = "Sentences.txt";
	}
	cin.ignore();
	cout << "\nPlease, enter the name of the phrase file you would like to use (Enter 0 if you would like to use the default)?:";
	cin >> textBuffer;
	if (textBuffer != "0")
	{
		phraseFile = textBuffer;
	}
	else
	{
		phraseFile = "SwapPhrases.txt";
	}
	cin.ignore();
	cout << "Great!\nThese are the Input Files the program will be using:\n" << "Color File: " << colorFile << "\n""Sentence File: " << sentenceFile << "\n" << "Phrase File: " << phraseFile << "\n";
}
string AskForOutputFilenames()
{
	string textBuffer;
	cout << "\nPlease, enter the name of the Output file you would like to use (Enter 0 if you would like to use the default)?:";
	cin >> textBuffer;
	cin.ignore();
	if (textBuffer != "0")
	{
		cout << "Great!\nThe program will use the Outputfile you selected named:\n" << textBuffer << "\n";
		return textBuffer;
	}
	else
	{
		cout << "Great!\nThe program will use the defaule output file named:\nCChavezP1Output.txt \n\n\n";
		return "CChavezP1Output.txt";
	}
}

bool ReadColors(SentenceData& pData, string filename)
//	Call the Read function for each file.
//	Pass in the vectors by reference, and pass in the array as usual.
//	In main, check the bool return from each Read function to make 
//	sure the file was opened and read.If not, tell the user and exit 
//	the program.
{
	cout << "\nReading Color Data...\n";
	ifstream inputFile(filename);
	//	Check to see if file opened
	if (!inputFile)
	{
		cout << "Something went wrong and the file was not opened.\n";
		return false;
	}
	else
	{
		string stringBuffer;
		while (getline(inputFile, stringBuffer))
		{
			pData.vColors.push_back(stringBuffer);
		}

		//	for (int i = 0; i < pData.vColors.size(); i++)
		//	{
		//		cout << "pData.vColors.at(i)" << pData.vColors.at(i) << " \n";
		//	}
		inputFile.close();
		return true;
	}
}
bool ReadSentences(SentenceData& pData, string filename, string sentences[])
{
	cout << "\nReading Sentence Data...\n";
	ifstream inputFile(filename);
	//	Check to see if file opened
	if (!inputFile)
	{
		cout << "Something went wrong and the file was not opened.\n";
		return false;
	}
	else
	{
		string stringBuffer;
		getline(inputFile, stringBuffer);

		for (int i = 0; i < SIZE && std::getline(inputFile, stringBuffer); ++i)
		{
			stringstream iss(stringBuffer);
			getline(iss, sentences[i]);
			pData.sentences[i] = sentences[i];
			pData.total++;
		}
		inputFile.close();
		return true;
	}
}
bool ReadPrases(SentenceData& pData, string filename)
{
	cout << "\nReading Phrase Data...\n";
	ifstream inputFile(filename);
	//	Check to see if file opened
	if (!inputFile)
	{
		cout << "Something went wrong and the file was not opened.\n";
		return false;
	}
	else
	{
		string stringBuffer;
		while (getline(inputFile, stringBuffer))
		{
			pData.vPhrases.push_back(stringBuffer);
		}
		inputFile.close();
		return true;
	}
}
bool WriteOriginal(SentenceData& pData, int totalSentenceModified, string& outputFile)
//	Call the WriteOriginal function, which writes to the output file.
//	It writes the original sentences, colors, phrases to the output 
//	file. It is passed the information to be written as well as the 
//	output filestream object.
{
	//	Assembelly of the stringstream
	ofstream OutputFile(outputFile);
	stringstream ss; 
	ss << "\nOriginal Colors: \n";
	for (int i = 0; i < pData.vColors.size(); i++)
	{
		ss << pData.vColors[i] << "\n";
	}
	ss << "\nOriginal Phrases: \n";
	for (int i = 0; i < pData.vPhrases.size(); i++)
	{
		ss << pData.vPhrases[i] << "\n";
	}
	ss << "\nOriginal Sentences: \n";
	for (int i = 0; i < pData.total; i++)
	{
		ss << pData.sentences[i] << "\n";
	}

	//	Output of thhe stringstream
	pData.resultsOriginal = ss.str();
	OutputFile.close();
	OutputFile.open(outputFile);
	if (OutputFile.is_open())
	{
		OutputFile << pData.resultsOriginal;
		cout << "The following Original information has been saved to the file named " << outputFile << ": \n\n" << pData.resultsOriginal << "\n\n";
		OutputFile.close();
		return true;
	}
	else
	{
		cout << "Something went wrong and the file was not properly created";
		return false;
	}
}

int SwapColors(SentenceData& pData)

//	In the branch where all three files were successfully read, 
//	call a function SwapColors, which returns an int, the number 
//	of sentences that were modified.
//	There will be five arguments to this function.
//	This is where you check all of the sentences to see if they 
//	contain any of the colors.Any individual color will only be in 
//	sentence one time, however, a sentence may have more than one 
//	color in it.
// 
//	A sentence may begin with a color, hence the first 
//	letter is capitalized.You will have to take that into 
//	consideration for your search.If a color is located in the 
//	sentence, that color is replaced with a corresponding phrase.
//	If the color is the first word in the sentence, the corresponding 
//	phrase must also be capitalized so the sentence is 
//	grammatically correct.The total number of replacement actions 
//	for each sentence is stored in the NumSwapped array.
{	
	// tracks overall number of swapps
	int totalColorsSwappedinSent = 0;
	for (int i = 0; i < pData.total; i++)
	{
		//	counts swaps per sentence
		int swappedCount = 0;
		// makes first letter lower case
		pData.sentences[i].at(0) = static_cast<char>(tolower(pData.sentences[i].at(0)));
		for (int v = 0; v < pData.vColors.size(); v++)
		{
			string colorBuffer = pData.vColors[v];
			
			int indexBuffer = pData.sentences[i].find(colorBuffer);

			if (indexBuffer >=0 )
			{
				pData.sentences[i].replace(indexBuffer, colorBuffer.length(), pData.vPhrases[v]);
				//cout << "swapped sentence(top)" << pData.sentences[i] << "\n";
				totalColorsSwappedinSent++;
			}

		}
		// makes first letter back to upper case
		pData.sentences[i].at(0) = static_cast<char>(toupper(pData.sentences[i].at(0)));
	}
	pData.modified = totalColorsSwappedinSent;
	return totalColorsSwappedinSent;
}

bool WriteResults(SentenceData& pData, string& outputFile)
//	call the function WriteResults.
//	It also writes to the output file.
//	In WriteResults, write the total number of sentences analyzed, 
//	the total that were modified, and the modified sentences.
//	For each sentence state how many colors were swapped out.
//	The output file must contain your name and program #.
//	In addition to writing the results to the file, display the 
//	results to the user in a cout.
{
	//	Assembelly of the stringstream
	ofstream OutputFile(outputFile, ios::app);
	stringstream ss;
	ss << "\n\n\nThe results of the program are as follows:\n"
		<< "Sentences Analyzed: " << pData.total << "\n"
		<< "Sentences Modifications: " << pData.modified << "\n\n"
		<< "Sentences after modifications: \n";
	for (int i = 0; i < pData.total; i++)
	{
		ss << pData.sentences[i] << "\n\n";
		if (pData.numSwapped[i] > 0)
		{
			ss << pData.sentences[i] << "\n\n";
		}
		
	}
	
	//	Output of thhe stringstream
	pData.resultsSwapped = ss.str();
	OutputFile.close();
	OutputFile.open(outputFile);
	if (OutputFile.is_open())
	{
		OutputFile << pData.resultsSwapped;
		cout << "The following new information has been saved to the file named " << outputFile << ": \n\n" << pData.resultsSwapped << "\n\n";
		OutputFile.close();
		return true;
	}
	else
	{
		cout << "Something went wrong and the file was not properly created";
		return false;
	}
}

void Goodbye()
{
	cout << "\n\n Thank you for using CChavezP1, have a good day!\n";
}
bool DoAnother()
{
	string doAnother;
	cout << "\n\nWould you like to run CChavezP1 again? yes/no \n";
	getline(cin, doAnother);
	if (doAnother == "yes")
	{
		return true;
	}
	else
	{
		return false;
	}

}