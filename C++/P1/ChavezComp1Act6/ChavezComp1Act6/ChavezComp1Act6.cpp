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
// Write a program in C++ to calculate the results of these algebraic expressions of doubles:
// Declare the variables written above and initialize then as specified.
// Also create variables to hold the results of the computations and display each result.

   double y = 0.0, x = 5.0, z = 0.0, a= 2.1, b = 2.5, c = 4.0, d = 0.0;
   y = 3 * (x / 2);
   z = 3 * b * c + 4;
   d = (3 * x + 2) / (4 * a - 1);
   
   cout << "the result of the first calculation is: " << y << "\n";
   cout << "the result of the second calculation is: " << z << "\n";
   cout << "the result of the third calculation is: " << d << "\n\n";
   return 0;
}
