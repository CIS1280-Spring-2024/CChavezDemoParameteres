// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp1Act4

#include <iostream>
using namespace std;


int main()
{
// 5 pts Use cout statements to write your name, program title, and program objective to the screen
// so that it is the first thing seen when your program runs.  
// This is your course header. 
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";
// Write a program in C++ to use two constant data types.
// Declare and initialize two const numbers using uniform initialization.
// They should represent the value of pi and the symbol for newline.
// 
// I DON"T KNOW WHAT "symbol for newline" MEANS HERE IN THIS CONTEXT!
// I think you meant Radius so I made a program with a constant for PI and radius using two different data typoes double and int. 
// Then output the calulation requested with those values. 
    const double pi = 3.14159;
    const int radius = 5;
    double result = pi * radius * radius;
// Use them to calculate the area of a circle and cout the calculation.
// The area of a circle is pi* radius* radius.The radius is 5.
    cout << "The area of the circle with the radius of 5 units is:" << result<<" units.\n\n";
    return 0;
}
