// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp3Act6

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    // Your program should print your name, and program information to the screen(this is your header)
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";

    //
    // Write a C++ program that asks the user to enter integer values to be stored in a vector. 
    // It will then calculate the average of the values and find the highest and lowest value using a loop.
    // Start by telling the user what the program does.Then declare and initialize variables you will need.
    cout << "Welcome to ChavezComp3Act6\nYou will give me a some numbers.\nThen I will calualte the average of the values given.\nThen I will find the highest and lowest value for you using a loop!\nEnter -99 when you would like to stop entering numbers,\nAnd rememeber enttering -99 doesn't count as a number to be calulated\n\n";
    // Then declare and initialize variables you will need.
    char playLoop = 'y';
    // Open a play loop and declare any variables that you want to have scope inside the play loop.
    do {
        vector<int>userVector;
        double gameAVG{ 0.0 };
        int userInput{ 0 };
        // Begin an inner number - entering loop.
        // This should be either a while or do - while loop.Prompt the user to enter a set of numbers and to enter - 
        // 99 when they want to stop.The - 99 signals the program to stop the number - entering loop.It is called a sentinel value.
        // All the values are stored in the vector except the - 99.
        while (userInput != -99)
        {
            cout << "What number would you like to input? \n";
            cin >> userInput;
            if (userInput != -99) {
            userVector.push_back(userInput);
            }
            cin.ignore();
                
        }
        // If the user only enters - 99, then the program reports that no valid numbers were entered.
        if (userVector.empty()) 
        {
            cout << "You did not enter any valid numbers to do the calulations\n";
        }
        // To calculate the average, first add all of the values of the elements in the vector together.Use a for loop to do this.
        // after the loop has finished, divide the sum by the number of elements to get the average.
        else {
            double sumNum = 0, highestNum = 0, lowestNum = 0;
            for (int i = 0; i < userVector.size(); i++) {
                sumNum += userVector.at(i);
                if (userVector.at(i) >= highestNum) 
                {
                    highestNum = userVector.at(i);
                }
                if (lowestNum == 0 )
                {
                    lowestNum = userVector.at(i);
                }
                else if (userVector.at(i) < lowestNum)
                {
                    lowestNum = userVector.at(i);
                }
            }
            double gameAVG = sumNum / userVector.size();
            cout << "The average of all " << userVector.size() << " numbers entered, was " << gameAVG << "!\n";
            cout << "The highest number out of all " << userVector.size() << " numbers entered, was " << highestNum << "!\n";
            cout << "The Lowest number out of all " << userVector.size() << " numbers entered, was " << lowestNum << "!\n";
        }

            cout << "Would you like to run the program again(y/n): ";
            cin >> playLoop;
        }
    while (playLoop == 'y');

    cout << "\n\n\nGoodbye thanks for using ChavezComp3Act6 for your edge case number calulations\n\n\n";
    return 0;
}
