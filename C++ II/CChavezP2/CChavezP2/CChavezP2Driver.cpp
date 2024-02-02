//  Programmed by Colby Chavez
//  Email: cchavez572@cnm.edu
//  The goal of this program is to write a class that is a simple calculator
//	that performs basic arithmetic

#include <iostream>
#include "SimpleCalc.h"
#include <iomanip>

int main()
{
    // main Variables
    char operation{ '+' };
    double operand1{ 0.0 };
    double operand2{ 0.0 };
    string doAnother = "y";

    //  Your main function should show your course header and create one SimpleCalc object.
    cout << "Programmed by Colby Chavez\nEmail: cchavez572@cnm.edu\n\nThe goal of this program is to write a class that is a simple calculator\nthat performs basic arithmetic\n\n";
    SimpleCalc Calc;

    //  Then begin a do while loop that asks the user to select an operation and enter the two operands.
    do
    {
        cout << "What is the first operator\n";
        cin >> operand1;
        cin.ignore();
        cout << "What is the operation\n";
        cin >> operation;
        cin.ignore();
        cout << "What is the second operator\n";
        cin >> operand2;
        cin.ignore();
        //  Pass the values into the SetOperation function and call GetResults.
        Calc.SetOperation(operation, operand1, operand2);
        string stringOutput = Calc.GetResults();
        //  Show the results string to the user.Format the numbers to 2 decimal places.
        cout << stringOutput;

        cout << "Do another y/n? \n";
        cin >> doAnother;
        cin.ignore();
    } while (doAnother == "y");

    cout << "Thank you for using CChavezP2 for your calculation needs, goodbye!\n\n\n";
}

