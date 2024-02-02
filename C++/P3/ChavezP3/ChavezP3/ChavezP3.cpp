// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// C++ TEMPLATE

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    //  The C++ Tropical Fish store is here to help you select the perfect tank for your tropical fish enjoyment.
    //  The first rule of thumb for setting up a nice, healthy fish tank is two gallons of water for every inch of fish in the tank.
    //  You must remember to consider the adult size of the fish.This means if you have three adult fish, and each fish is 3” long, 
    //  you need to have at least an 18 gallon tank.
    // 
    //  The second rule involves what sort of fish will live in the tank.
    //  If all of the fish are peaceful, then a tank sized according to total adult fish length will be fine 
    //  – however, if there are aggressive fish in the tank, then the tank should be sized 1.5 times that.
    //  That is only an approximation, and in real life, you would have to carefully select your fish to make sure they get along well.
    //  But for this program, we will follow the two rules we just listed.
    // 
    //  Start your program in main by writing out your course header.
    // 
    // Your program should print your name, and program information to the screen(this is your header)
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";

    // Declare 3 vectors, one for the type of fish(i.e.tetra, loaches, etc), one for the number of each type of fish, 
    // and one that holds the adult size of a single fish.This means that the same element in the three vectors correspond to one type, 
    // size and number of fish.For instance, an adult tetra would grow to be 1inch in length, and there might be 4 of them in your tank.
    cout << "\n\n\nWelcome to C++ tropical fish store calulator\nEnter 'done' all lower case and without quotes to complete the custom calulations for your tank\n\n";
    vector <string> fishType;
    vector <int> fishQty;
    vector <int> fishMaxSize;
    char playLoop = 'y';
   
    //  Then open a do while loop for setting up one fish tank.This is also called a play loop.
    //  You may need to declare some variables here.
    do {
        fishType.clear();
        fishQty.clear();
        fishMaxSize.clear();
        int dataEntryLoop = 0;
        string userTypeInput = "test";
        int userQtyInput = 0;
        int userMaxSizeInput = 0;
        char userAggroFish = 'n';
        double TotalFishLen = 0;
        double fishGal = 0;
        double perfectTank = 0;
        double accTankSize = 0;

        //  We will ask the user to enter the information for the fish they expect to place in the new tank, 
        //  then we will suggest the correct size tank.
        //  Tanks come in 4 sizes in our store : 20, 40, 60 and 80 gallons.
        //  Ask the user to enter all of this information.You will need a while loop so the user can enter more than one fishtype.
        //  When the user enters “done “ for the fish type, the loop will exit and stop collecting data.
        while (dataEntryLoop == 0) 
        {   
            
            cout << "\nWhat type of fish would you like in your tank?\n";
            cin >> userTypeInput;
            //  Ask the user to enter all of this information.You will need a while loop so the user can enter more than one fishtype.
            if (userTypeInput != "done") {
                fishType.push_back(userTypeInput);
                cin.ignore();
                cout << "How many of the " << userTypeInput << " fish would you like in your tank? \n";
                cin >> userQtyInput;
                fishQty.push_back(userQtyInput);
                cin.ignore();
                cout << "What is the maximum adult size, in inches, of the " << userTypeInput << " fish you want in your tank? \n";
                cin >> userQtyInput;
                fishMaxSize.push_back(userQtyInput);
                cin.ignore();
            }
            else {
                //  When the user enters “done “ for the fish type, the loop will exit and stop collecting data.
                //  Next ask your user if there are any aggressive fish in the group.
                cout << "Ok, that is all the fish you want. Are there any aggresive fish in the mix(y/n): \n";
                cin >> userAggroFish;
                dataEntryLoop = 1;
            }

        }
        //  Determine that best size tank based on the two rules. First, determine how many gallons based on the adult fish sizes 
        //  and the number of fish.Then modify the result if any of the fish are aggressive.
        //  Now figure out which of the tanks would fit that situation.
        for (int i = 0; i < fishType.size(); i++) {
            TotalFishLen += fishQty.at(i) * fishMaxSize.at(i);
            }
        if (userAggroFish == 'y') {
            accTankSize = TotalFishLen * 3;
        }
        else {
            accTankSize = TotalFishLen * 2;
        }

        if (accTankSize == 0) {
            perfectTank = 0;
        }
        else if (accTankSize <= 20) {
            perfectTank = 20;
        }
        else if (accTankSize <= 40) {
            perfectTank = 40;
        }
        else if (accTankSize <= 60) {
            perfectTank = 60;
        }
        else if (accTankSize <= 80) {
            perfectTank = 80;
        }
        //  If the user would need a tank bigger than 80 gallons, set the perfectTank variable to 99. 
        else {
            perfectTank = 99;
        }  
        //  That will tell the user that we don’t carry any bigger tanks.
        //  Check to see if the calculated tank size is 99.  
        if (perfectTank == 99) {
            cout << "Woah, buddy that is a lot of fish. The biggest tank we have in stock is 80 gallons.\nYou would need a tank that holds at least"<< accTankSize <<"gallons, for that many fish!\n\n";
        }
        else if (perfectTank == 0) {
            cout << "Woah, buddy you did not select any fish.\nPlease enter at least one fish if you want us to find the perfect tank for you\n\n";
        }
        else {
            //  Write out a tank report, including a table showing the fish information, total fish, total length of fish, minimum required gallons and the appropriate C++ tank.
            //  Here is a sample for 4 Clown Loaches and 5 Neon Tetras :

            //  C++ Tropical Fish Store Tank Requirements
            //  Type of Fish        Number         Adult Size
            //  Clown Loach          4                      3
            //  Neon Tetra           5                      1

            //  Aggressive : No    Total Fish Length : 17"  Min Tank Size: 40 gallons

            cout << "\n\nC++ Tropical Fish Store Tank Requirements\nType of Fish                  Qty                  Max Size\n";
            for (int i = 0; i < fishType.size(); i++) {
                cout << fishType.at(i) << "                          " << fishQty.at(i) << "                      " << fishMaxSize.at(i)<<"\n";
            }
            cout << "Aggressive: "<< userAggroFish <<"  Total Fish Length: "<< TotalFishLen <<" inches  Min Tank Size: "<< perfectTank<<" gallons\n\n";
        }
        //  Write out a tank report, including a table showing the fish information, total fish, total length of fish, minimum required gallons and the appropriate C++ tank.
        //  Here is a sample for 4 Clown Loaches and 5 Neon Tetras :

        //  C++ Tropical Fish Store Tank Requirements
        //  Type of Fish        Number         Adult Size
        //  Clown Loach          4                      3
        //  Neon Tetra           5                      1

        //  Aggressive : No    Total Fish Length : 17"  Min Tank Size: 40 gallons
        
        //  Then ask the customer if they want to calculate another fish tank.If the answer is yes, loop back to the top of the while loop.
        cout << "Would you like to run the C++ tropical fish store calulator again(y/n): ";
        cin >> playLoop;
    } 
    while (playLoop == 'y');
    //  If the answer is no, drop out of the loop, and show your customer a good - bye message.

    cout << "\n\n\nGoodbye Thanks for using C++ tropical fish store calulator for your fish store calulations\n\n\n";
    return 0;
}
