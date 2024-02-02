// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezP2

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{ 
    // Your program should print your name, and program information to the screen(this is your header)
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";
    //In this program, we’re going to ask the user to enter the pertinent dimensions for a cylinder of metal that is made of 
    // gold, lead, silver or aluminum. Your user interface needs to have the user enter the 2-character chemical symbol when 
    // selecting which type of metal is desired. (Be clear in your instructions, spell out the metal and show the symbols exactly.) 
    // You will need to specify what cylinder dimensions the user must enter, that is, length and diameter (or radius). 
    // (Dimensions should be in inches.) You are to calculate the total volume of the cylinder and determine its weight, in pounds. 

    //initialize variables
    const double pi = 3.14159, goldCubicInchWeight = 0.698, leadCubicInchWeight = 0.41, silverCubicInchWeight = 0.379, aluminiumCubicInchWeight = 0.1;
    double cylinderHeight = 0, cylinderRadius = 0, densityValue = 0, cylinderVolume = 0, cylindertWeight = 0;
    string cylinderMetal = "XX", metalType = "X";

    // then ask for the metal, and cylinder dimensions.
    cout << "Welcome to Metal Cylinder Calculator!\n\nWhat is the height of the cylinder you wish to calulate?\n";
    cin >> cylinderHeight;
    cout << "Ok, the cylinder is " << cylinderHeight << " inches high!\n\nNow, what is the radius of the cylinder? \n";
    cin >> cylinderRadius;
    cout << "Ok, the cylinder is " << cylinderRadius << " inches in radius!\n\nFinally, what metal is the cylinder made from? Please enter the 2 character elemental symbol for the metal you would like to calulate in all capial letters.\nYou can choose Gold(AU), Lead(PB) or Silver(AG) or Alumminum(AL)\n";
    cin >> cylinderMetal;
    // Your program should have only one place where the calculations are performed.
    // You will need an if / else if block to determine the density value for the calculation.
    // Use this value in your calculations.
    if (cylinderMetal == "AU") {
        densityValue = goldCubicInchWeight;
        metalType = "Gold";
    }
    else if (cylinderMetal == "PB") {
        densityValue = leadCubicInchWeight;
        metalType = "Lead";
    }
    else if (cylinderMetal == "AG") {
        densityValue = silverCubicInchWeight;
        metalType = "Silver";
    }
    else if (cylinderMetal == "AL") {
        densityValue = aluminiumCubicInchWeight;
        metalType = "Aluminium";
    }
    else {
        cout << "Error: You did not enter a compatable elemental symbol.\n";
    }
    // Perform the calculations and show all dimensions, metal and weight(in pounds).
    // Show all values to 2 decimal places.
    cout << "\nCalulating...\n\n";
    cylinderVolume = pi * cylinderRadius * cylinderRadius * cylinderHeight;
    cylindertWeight = cylinderVolume * densityValue;

    // You will report to the customer 
    // 1) the metal they chose, 
    // 2) the dimensions the customer entered, 
    // 3) the total volume of the cylinder, and 
    // 4) the weight of the cylinder, in pounds.
    cout << "The calulated cylinder was made of "<< metalType<<", had a height of "<< cylinderHeight << " inches, and a radius of "<< cylinderRadius<<" inches!.\n";
    cout << "This means the " << metalType << " cylinder had a volume of " << setprecision(2) << setiosflags(ios::fixed) << cylinderVolume << " cubic inches, and a weight of " << setprecision(2) << setiosflags(ios::fixed) << cylindertWeight << " pounds!.\n";

    return 0;
}