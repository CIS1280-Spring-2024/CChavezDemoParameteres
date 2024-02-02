// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp5
#include "Functions.h"

int main()
{
    // The program will first show your class header by calling the Header function and then 
    // begin a do while loop.In this loop the program will call the functions listed below, 
    // requesting information, calculating, and presenting information to the customer.
    Header();

    //local variable declaration
    double volume = 0;
    double diameter = 0;
    double height = 0;
    int barrels = 0;
    int agingLoss = 0;
    int bottles = 0;
    int cases = 0;
    int loneBottles = 0;
    double ExtraForCrew = 0;
    char playLoop = 'y';
    do {
        string name = AskForName();
        AskForBarrels(diameter, height, barrels, agingLoss);
        if (agingLoss > 0)
        {
            volume = CalculateNetWhiskeyVol(diameter, height, barrels, agingLoss);
        }
        else
        {
            volume = CalculateNetWhiskeyVol(diameter, height, barrels);
        }
        DetermineBottles(volume, &bottles, &cases, &loneBottles, &ExtraForCrew);
        WriteResults(name, volume, agingLoss, barrels, cases, bottles, loneBottles, ExtraForCrew);
        cout << "Would you like to run C++ Distillery Bottling Calulator again(y/n): ";
        cin >> playLoop;
        cin.ignore();
        cout << "\n";
    } while (playLoop == 'y');


    WriteGoodbye();
    return 0;
}