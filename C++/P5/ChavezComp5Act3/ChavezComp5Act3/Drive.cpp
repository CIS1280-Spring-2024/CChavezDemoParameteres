// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezComp5Act3
#include "Functions.h"


int main()
{
    WriteHeader();

    int numb1{ 0 }, numb2{ 0 };
    int bigNumb{ 0 };
    char playLoop = 'y';
    do {
        AskForTwoNumbers(&numb1, &numb2);
        //This is the code I wrote that was incorrect.
        // AskForTwoNumbers(numb1, numb2);
        bigNumb = FindBigOne(numb1, numb2);
        if (bigNumb == 0)
        {
            cout << "The numbers were the same! \n\n";
        }
        else
        {
            cout << "The bigger number was " << bigNumb << "!\n\n";
        }
        cout << "Would you like to run BiggerNumber again(y/n): ";
        cin >> playLoop;
        cin.ignore();
        cout << "\n";

    } while (playLoop == 'y');


    WriteGoodbye();
    return 0;
}


