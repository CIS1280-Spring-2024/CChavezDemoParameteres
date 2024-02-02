// Function definitions
#include "Functions.h"
void WriteHeader()
{
    cout << "ChavezComp5Act1 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\n";
    cout << "Welcome to ReturnTwoNumbers\n\n";
}
void WriteGoodbye()
{
    cout << "Thanks for using ReturnTwoNumbers, Goodbye!\n\n\n";
}
void AskForTwoNumbers(int* pNumb1, int* pNumb2)
{
    cout << "What is the first non-zero integer you would like to enter:" << endl;
    cin >> *pNumb1;
    cin.ignore();
    cout << "What is the second non-zero integer you would like to enter:"<< endl;
    cin >> *pNumb2;
    cin.ignore();
    if (*pNumb1 == 0)
    {
        cout << " The first 0" << endl;
    } else if (*pNumb2 != 0)
    {
        cout << "The first non-zero integer you entered was " << *pNumb1 << " and the second non-zero integer you entered was " << *pNumb2 << "!" << endl;
    }
    else
    cout << " One of the numbers you entered was 0" << endl;
}

int FindBigOne(int num1, int num2)
{
    if (num1 > num2) 
    {
        return num1;

    } 
    else if ( num2 > num1)
    {
        return num2;
    }
    else
    {
        return 0;
    }
}
