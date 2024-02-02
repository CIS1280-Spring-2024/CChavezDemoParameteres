//	Programed by: Colby Chavez
//	contact: cchavez572@cnm.edu
//	ChavezComp7Act1: Movies
// 
//5 pts  Write your name, email address and file name at the top of your source code in a comment.
//5 pts Use cout statements to write your name, program title, and program objective to the screen so that it is the first thing seen when your program runs.This is your course header.

#include "Movies.h"

//Write a C++ program named Movies that uses a struct to store attributes of Movies.
// These will be the title, the year it was released and the star of the movie.


int main()
{
	WriteHeader();
	//	In main, create two struct objects, mine and yours.
	struct favMovie YourFavMovie = {"null", "null", "null"};
	// Initialize the stuct with values for mine, that is, your favorite movie.
	struct favMovie MyFavMovie = { "Star Wars", "Harrison Ford", "1977" };
	//cout << "My favorite movie is " << MyFavMovie.title << ", staring " << MyFavMovie.star << ", and relesed in " << MyFavMovie.year << "!";
	// Ask the user for their favorite movie and the data by passing the yours 
	AskForFavMovie(YourFavMovie.title, YourFavMovie.star, YourFavMovie.year);

	// Movies object to the function AskForFaveMovie.
	return 0;
}

//In main, create two struct objects, mine and yours.Initialize the stuct with values for mine, that is, your favorite movie.Ask the user for their favorite movie and the data by passing the yours Movies object to the function AskForFaveMovie.
//
//Call PrintMovie twice, once to display the favorite of mine and once to display the favorite of yours.
//
//5 pts Delete the intermediate files, zip your project and upload it to this activity in Brightspace.