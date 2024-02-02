// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp4Act6
#include "Functions.h"


int main()
{
    
    // 5 pts  Write your name, email address and file name at the top of your source code in a comment.
    //WriteHeader();
    //5 pts Use cout statements to write your name, program title, and program objective to the screen 
    // so that it is the first thing seen when your program runs.This is your course header.
    //Also write a Header function and a Goodbye function.
    WriteHeader();
    //Write a C++ program that calls a function to ask the user for a number.Then it calls a function 
    // that adds the numbers from 1 to that  number, inclusive and returns the sum.Finally, 
    // it displays the sum.
    //Use multi - file format.
    char playLoop = 'y';
    do {
        //int GetNumber() and int AddUpToSum(int num);
        int userInput = GetNumber();
        int userSum = AddUpToSum(userInput);
        cout << "The sum of your number is " << userSum << "! Impressed?\n\n";
        cout << "Would you like to run Number Summer again(y/n): ";
        cin >> playLoop;
        cin.ignore();
        cout << "\n";
    } while (playLoop == 'y');

    //Also write a Header function and a Goodbye function.
    WriteGoodbye();
    //    5 pts Delete the intermediate files, zip your project and upload it to this activity in Brightspace.
    return 0;
}
