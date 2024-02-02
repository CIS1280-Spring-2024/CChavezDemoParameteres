// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp5Act1
#include "Functions.h"


int main()
{
    WriteHeader();

//Write a C++ program called ReturnTwoNumbers.
// It will be a multi - file program that has a main, 
// a AskForTwoNumbers function and a FindBigOne function.
//
// main calls the AskForTwoNumbers function, which asks for two non - 
// zero integers.The AskForTwoNumbers function  has a void return 
// and uses pointers to get the values of the two numbers to main.
//
// The main function passes the two integers to the FindBigOne function, 
// which returns the larger value to main.For example, if the user puts in 
// 19 and 2, FindBigOne will return 19 to main.If the two numbers are the 
// same, it will return 0.
//
//Incorporate a do while or while loop in the main function so that the 
// user can keep entering two values as long as they desire.Then say good - bye.
    int numb1 { 0 }, numb2 { 0 };
    int bigNumb { 0 };
    char playLoop = 'y';
    do {
        AskForTwoNumbers(&numb1,&numb2);
        bigNumb = FindBigOne (numb1, numb2);
        if (bigNumb == 0)
        {
            cout << "The numbers were the same! \n\n";
        }
        else
        {
            cout << "The bigger number was " << bigNumb << "!\n\n";
        }
        cout << "Would you like to run ReturnTwoNumbers again(y/n): ";
        cin >> playLoop;
        cin.ignore();
        cout << "\n";
        
    } while (playLoop == 'y');


    WriteGoodbye();
    return 0;
}


