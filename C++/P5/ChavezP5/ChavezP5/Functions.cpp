// Function definitions
#include "Functions.h"
void Header()
{
    cout << "ChavezComp5Act1 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\n";
    cout << "Welcome to C++ Distillery Bottling Calulator \n\n";
}
string AskForName()
{   
    string name = "name";
    // The AskName function gets the name of the whiskey.
    cout << "What is the name of the whiskey?\n";
    getline (cin, name);
    return name;
}
void AskForBarrels(double& rDiameter, double& rHeight, int& rBarrels,int& rAgingLoss)
{
    // The AskForBarrels function obtains the inside diameter, height(in inches),
    // the number of aging barrels and the amount of loss due to aging.For oak barrels, 
    // the amount of loss is a percentage between 2 and 15.  
    // Ask the user to enter 0 for stainless steel barrels(no loss).All values are numeric.
    // You may assume the diameter and height are in whole inches.Pass using References for this function.
    cout << "What is the inside diameter of the barrels you are using?\n";
    cin >> rDiameter;
    cout << "What is the height of the barrels you are using?\n";
    cin >> rHeight;
    cout << "What is the aging loss percentage of the barrels you are using?\n";
    cin >> rAgingLoss;
    cout << "And finally, how many barrels of whiskey are you distilling\n";
    cin >> rBarrels;
}
double CalculateNetWhiskeyVol(double diameter, double height, int barrels)
{

    // The first CalcNetWhiskeyVol function is passed the dimensions of the barrels 
    // and the number of barrels only.Use the information to determine 
    // the total volume of whiskey in gallons. The function returns a floating 
    // point value (use either float or double).  You can pass variables by 
    // value or use references for these functions.
   
    double volume = (3.14159 * (diameter / 2) * (diameter / 2) * height * barrels) / 231;
    return volume;
}
double CalculateNetWhiskeyVol(double diameter, double height, int barrels, int agingLoss)
{
    // The second CalcNetWhiskeyVol function is additionally passed the agingLoss, 
    // an int representing the percentage lost.   Use the information to determine 
    // the total volume of whiskey in gallons. The function returns a floating 
    // point value (use either float or double).  You can pass variables by 
    // value or use references for these functions.
    //This modifier is created so that I can just keep mulitplying to calulate for the Aging loss. 

    float volume = (((3.14159 * (diameter / 2) * (diameter / 2) * height * barrels)* (1-agingLoss/100))/ 231);
    cout << "volume " << volume;
    return volume;
}
void DetermineBottles(double volume, int* pBottles, int* pCases, int* pLoneBottles, double* pExtraForCrew)
{
    // The whiskey volume is passed to the DetermineBottles function which calculates the 
    // number of total number of cases(twelve bottles to a case), total bottles produced, 
    // and left over total full bottles.You can assume the bottling crew polishes off the 
    // remaining partial bottle in celebration of finishing the job.  :-)   Keep track of 
    // this amount, too.For example, if the total bottle production was 38.75 bottles, then 
    // there were 38 total bottles resulting in 3 full cases, 2 left over bottles, and the 
    // crew “sampled” ¾ of a bottle, or 1.125 liters of whiskey.  (Let’s hope it is a large crew!!!)  
    // Pass by Reference using pointers  for this function.
    *pBottles = (volume * 3.785412) / 1.5;
    *pCases = *pBottles / 12;
    *pLoneBottles = *pBottles - (*pCases * 12);
    *pExtraForCrew = (volume * 3.785412) - (*pBottles * 1.5);
}
void WriteResults(string name, double volume, int agingLoss, int barrels, int cases, int bottles, int loneBottles, double extraForCrew)
{
    // The WriteResults function is passed call by value all of the information and writes it to the screen.
    // You should display the Whiskey Name, the dimensions of the barrel, the total volume of whiskey, 
    // the aging loss(if any), and the total volume of whiskey minus the loss(in gallons), the total 
    // number of cases, total bottles produced, the leftover total full bottles, and the percentage of the 
    // ‘crew treat’.

    //  PROFFESOR I could not see how to pass down dimenstions of the barrel based upong the varables I was 
    //  allowed to pass into the function. this also kept me from contributing losses as that was all 
    //  purposfully not done as a pointer or reference so I did not know which part of your instructions to 
    //  violate. maybe there was a miscommuication or a typo. please count me off as approptiate as this was 
    //  my solution for a functional program.
    cout << "All calulations are complete\n\nThe whiskey named " << name << ", produced " << volume << " gallons of wiskey out of " << barrels << " barrels. \nThis produced "<< bottles << " bottles, cased in "<< cases << " cases.\nThis left a remainder of  "<< loneBottles << " loose uncased bottles, and "<< extraForCrew << " liters of extra unbottled whiskey for the crew.\nThis "<< extraForCrew<<" liters of 'Crew Treat' was "<< extraForCrew/ volume<< " of the total volume of finished whiskey produced.\n\n";
}
void WriteGoodbye()
{
    //  When the customer is finished, present a goodbye message.  
    // I put this in another function
    cout << "Thanks for using C++ Distillery Bottling Calulator, Goodbye!\n\n\n";
}

  
