// Function definitions
#include "Functions.h"
void WriteHeader()
{
    cout << "ChavezComp5Act1 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\n";
    cout << "Welcome to BiggerNumber\n\n";
}
void WriteGoodbye()
{
    cout << "Thanks for using ReturnTwoNumbers, Goodbye!\n\n\n";
}
void AskForTwoNumbers(int* pNum1, int* pNum2)
{
    cout << "Enter two non-zero integer, with a comma between the numbers.";
    char comma{ '1' };
    cin >> *pNum1 >> comma >> *pNum2;
    cin.ignore();
}
//This is the code I wrote that was incorrect.
//void AskForTwoNumbers(int &refNumb1, int &refNumb2)
//{
//    cout << "What is the first non-zero integer you would like to enter:" << endl;
//    cin >> refNumb1;
//    cout << "What is the second non-zero integer you would like to enter:" << endl;
//    cin >> refNumb2;
//    cin.ignore();
//}

int FindBigOne(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;

    }
    else if (num2 > num1)
    {
        return num2;
    }
    else
    {
        return 0;
    }
}
