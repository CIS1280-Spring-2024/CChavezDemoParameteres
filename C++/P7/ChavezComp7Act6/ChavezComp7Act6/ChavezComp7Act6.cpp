// Programed: by Colby Chavez
// Contact: cchavez@cnm.edu
// chavezComp7Act4 FavoriteMovies
//5 pts  Write your name, email address and file name at the top of your source code in a comment.
// 
//Write a C++ program called FavoriteMovies.Yes, more movies!
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	cout << "Programed: by Colby Chavez\nContact: cchavez@cnm.edu\nchavezComp7Act4 FavoriteMovies\n\n";
	//5 pts Use cout statements to write your name, program title, and program objective to the screen so 
	//	that it is the first thing seen when your program runs.This is your course header.
	cout << "This program is to create a text file of a list of my favorite movies!\n\n";
	//	In main, write a header statement saying that this program is to record a list your favorite movies.
	//	Then create an array of strings, sized to 5 and initialize it with the titles of your favorite movies.
	string movieArray[5] = { "Star Wars", "Aliens", "Quiz Lady", "Dogma", "Monty Python's The Meaning of Life" };
	//	This program will ask you to write the same information using cout and also using ofstream.
	//	It would be repetition of code to simply copy and paste the same information in to each stream.
	//	Instead, we will use another stream, stringstream, to create a formatted string containing the 
	//	information to be written and displayed.
	//  Then simply write and cout the resulting string.
	//	So, you will use three streams in this program.

	stringstream my_ss;
	my_ss << "My favorite movies are\n1) " << movieArray[0] <<"\n2) " << movieArray[1] << "\n3) " << movieArray[2] << "\n4) " << movieArray[3] << "\n5) " << movieArray[4] << "\n\n";
	string storedString = my_ss.str();
	cout << storedString;

	ofstream MyFile("mymovielist.txt");
	MyFile << storedString;
	//	Open an output file stream and make up a filename.Open the file and write a header into the file, 
	// something like, “These are my favorite movies.“  Then write your array of favorite movies into 
	// the file.
	MyFile.close();
	// Close the file and also write the array using cout.
	// Say goodbye.
	cout << "All of this information has been output to a txt file called mymovielist.\n\nThank you for running the FavoriteMovies program, goodbye!\n\n";
		return 0;
}