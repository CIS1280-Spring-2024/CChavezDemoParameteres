// Function definitions
#include "Functions.h"
void WriteHeader()
{
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\n";
    cout << "Welcome to number summer!\nThe program will ask you for any number.\nThe program wiill then sum all numbers between 1 and that number then output the result!\n\nARE YOUR READY!\n\n";
}

int GetNumber()
{   
    int getNumOutput = 0;
    cout << "What number would you like to sum?\n";
    cin >> getNumOutput;
    cin.ignore();
    return getNumOutput;
}

int AddUpToSum(int userInput)
{   
    int autoVar = userInput;
    int outputSum = 0;
    while (autoVar > 0)
    {
        outputSum = outputSum + autoVar;
        autoVar = autoVar - 1;
    }

    return outputSum;
}
void WriteGoodbye()
{
    cout << "Thanks for using Even or Odd, Goodbye!\n\n\n";
}