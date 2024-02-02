// Function definitions
#include "Functions.h"
void WriteHeader()
{
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\nWelcome to Even or Odd!\nThe program will ask you for any number.\nThen it will deterimine if that number is Even or Odd!\n\n";
}

int EvenOrOdd(int userInput)
{
    //    The way we figure out if a number is even or odd is to check if 2 is an even factor.If it is, the 
    //    number is even and if not, it is odd.One way to do this is to use the modulus operator.  
    //    You figure out how to set that up.
    //    EvenOrOdd function : Pass the number entered by the user into the function.
    //    Use the modulus operator to see if it is even or odd.Return your choice of a return type.
    int userOutput = userInput % 2;
    return userOutput;
}