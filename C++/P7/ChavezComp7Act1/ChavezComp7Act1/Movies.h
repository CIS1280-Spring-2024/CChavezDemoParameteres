#include <iostream>
#include <string>
using namespace std;
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//Write a C++ program named Movies that uses a struct to store attributes of Movies.
// These will be the title, the year it was released and the star of the movie.
// This is a multi - file program.Declare the struct in the.h file.

struct favMovie
{
	string title;
	string star;
	string year;
};


// Add four functions : 
// WriteHeader
// Goodbye 
// PrintMovie 
// AskForFaveMovie
// Pass them a struct object using call by reference.

void WriteHeader();
void Goodbye();
void PrintMovie();
void AskForFavMovie(struct favMovie YourFavMovie);

#endif







