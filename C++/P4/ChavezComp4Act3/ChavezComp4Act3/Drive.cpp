// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp4Act3
#include "Functions.h"
int main()
{
    //Write a Visual Studio program named lastnameComp4Act3.
    //    tell the user what the program is about.
    //    5 pts Use cout statements to write your name, program title, and program objective to the screen 
    //    so that it is the first thing seen when your program runs.This is your course header.
    //    In your program, first call your WriteHeader function, and declare any variables you will need.
    WriteHeader();
    //    Then begin a do while or while loop.From main, ask the user for an integer, then call the EvenOrOdd 
    //    function.Check the return, then report the results to the user.
    char playLoop = 'y';
    do {
        int userInput = 0;
        int userOutput = 0;
        cout << "What number would you like to input:\n";
        cin >> userInput;
        cin.ignore();
        userOutput = EvenOrOdd(userInput);
        //    Write a C++ program named EvenOdd to find out if a given number is even or odd.Ask the user for 
        //    an integer and then pass it to the function EvenOrOdd.This function should return a bool or an int 
        //    or a string, indicating whether the number is even or odd.You decide which you want.If you return a 
        //    bool, a common meaning is : true means even and false means odd.If you return a number, that is more 
        //    arbitrary, you can say 0 is even and 1 is odd.Or whatever you like.If you return a string, you can 
        //    just return  “even” or “odd”.
        if (userOutput == 0) {
            cout << "The number you input was "<<userInput<<" and that number is even!\n\n";
        }
        else if (userOutput == 1) {
            cout << "The number you input was " << userInput << " and that number is odd!\n\n";
        }
        else {
            cout << "Something went wrong and this is an error message\n";
        }

        cout << "Would you like to run Even OR Odd again(y/n): ";
        cin >> playLoop;
        cin.ignore();
        cout << "\n";
    } while (playLoop == 'y');
    //    When the user is finished, write a goodbye message.
    cout << "Thanks for using Even or Odd, Goodbye!\n\n\n";
    //    5 pts Delete the intermediate files, zip your project and upload it to this activity in Brightspace.
    return 0;
}



