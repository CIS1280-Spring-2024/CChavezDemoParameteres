// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// C++ TEMPLATE

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{

    // Your program should print your name, and program information to the screen(this is your header)
    cout << "ChavezComp3Act8 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";
    char playLoop = 'y';
    char carLoop = 'y';
    vector <string> carTypes{ "Porche", "Honda", "Toyota","Ford" };
    string userName = "test";
    int userCarSelection = 0;

    // CAR LOOP
    do {
        cout << "\nWelcome to C++ car selector!\nWe will need two peices of information to proccess your request.\nFirst your name, and then what type of car you would like to drive!\nWe have " << carTypes.size() << " options aviabale\n";
        for (int i = 0; i < carTypes.size(); i++) {
            cout << i+1 << ") :" << carTypes.at(i) << ".\n";
        }
        cout << "First off, what is your name?\n";
        cin >> userName;
        char carLoop = 'y';
        cout << "Ok great " << userName << ", what car would you like to drive from our list, please enter 1-" << carTypes.size() << "!\n";
        do {
            cin >> userCarSelection;
            if (userCarSelection < 1)
            {
                cout << "you did not input a valid selecion. please try again.\n";
            }
            else if (userCarSelection > carTypes.size())
            {
                cout << "you did not input a valid selecion. please try again.\n";
            }
            else {
                carLoop = 'n';
            }
        } while (carLoop == 'y');

        
        while (carLoop == 'y');
        cout << "Ok here we go! We have all the information we need to process your request!\n\n\nYour name is " << userName << " and you want to drive a " << carTypes.at(userCarSelection - 1) << "!\nThat sounds pretty awesome!\n\n";
        cout << "Would you like to run C++ car selector! again(y/n): ";
        cin >> playLoop;
    } 
    while (playLoop == 'y');
    
    cout << "\n\n\nGoodbye, Thanks for using C++ car selector!\n\n\n";
    return 0;
}