#include "Movies.h"


// Add four functions : 
// WriteHeader
// Goodbye 
// PrintMovie 
// AskForFaveMovie
// Pass them a struct object using call by reference.

void WriteHeader()
{
	cout << "Welcome to the program Movies.\n\nThe program will ask you what your favorite movies is, who stars in the movies and what year it relesed.\n\n After it has all that information then it will share the information about my favorite movie.";

}
void Goodbye()
{

}
void PrintMovie()
{

}
void AskForFavMovie(struct favMovie& YourFavMovie)
{
	cout << "What is the name of your favorite movie? \n";
	cin >> YourFavMovie.title;
	cin.ignore();
	cout << "Awesome!\nNow, what year did " << YourFavMovie.title << " relese in ? \n";
	cin >> YourFavMovie.year;
	cin.ignore();
	cout << "Great!\nFinally, who is one of the stars of " << YourFavMovie.title << "? \n";
	cin >> YourFavMovie.star;
	cin.ignore();
}
