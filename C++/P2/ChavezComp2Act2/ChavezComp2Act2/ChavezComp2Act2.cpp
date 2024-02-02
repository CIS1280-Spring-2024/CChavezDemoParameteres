// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp2Act2

#include <iostream>
using namespace std;


int main()
{
    // 5 pts Use cout statements to write your name, program title, and program objective to the screen
    // so that it is the first thing seen when your program runs.  
    // This is your course header. 
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";
    // Write a C++ program to compute the sum of the two given integers.
    // If the sum is in the range 10..20 inclusive return 30.  
    double firstInt = 0, secondInt = 0, twoIntSum = 0;
    // Ask the user  to enter two integers, read them into two int variables you have already declared and initialized.
    cout << "Welcome to magic number?\n\nWhat is the first number you would like to input?\n";
    cin >> firstInt;
    cout << "Ok that number was "<<firstInt<<"!What is the Second number you would like to input ? \n";
    cin >> secondInt;
    twoIntSum = firstInt + secondInt;
    // Display the answer.If it is greater than or equal to 10 and less than or equal to  20, display 30.
    if (twoIntSum >= 10) {
        if (twoIntSum <= 20) {
            cout << "The sum is 30! You found the magic number can you guess why?\n";
        }
        else {
            cout << "Too High! The sum is " << twoIntSum << "! You did not find the magic number. Keep guessing to figure it out! \n";
        }
    }
    else {
        cout << "Too Low! The sum is " << twoIntSum << "! You did not find the magic number. Keep guessing to figure it out! \n";
    }
    return 0;
}
