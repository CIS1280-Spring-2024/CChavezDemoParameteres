// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// Colby Chavez
// cchavez572@cnm.edu
// ChavezP1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 5 pts Use cout statements to write your name, program title, and program objective to the screen
    // so that it is the first thing seen when your program runs.  
    // This is your course header. 
    cout << "ChavezComp1Act4 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n";

    // In main, declare variables and declare PI and the prices for soil and gravel as constants. 
    // my variable are the precalulated coster per cubic unch of material set at the value of 1728 cubic iinches per cubic foot.
    const double pi = 3.14159, vigoroOrganicPottingMixPricePerCubicFoot = 7.97, vigoroPeaPebblesPricePerCubicFoot = 3.98, cubicInchesToFeet = 0.000578704;

    // initilizing non-constant variables.
    double potTopDiameter = 0, potBottomDiameter = 0, potHeight = 0, averageDiameterOfThePot = 0, averagePotRadius = 0, potVolume = 0, soilVolumeCubicFeet = 0, gravelVolumeCubicFeet = 0, potQty = 0, priceForSoil = 0, priceForGravel = 0, pricePerPot = 0, priceForAllPots = 0;


    // Ask the user for the top diameter of the pot.
    cout << "Welcome to C++ Greenhouse potting calulator! \nWhat is the diameter for the pot that you would you like to calculate in inches?\n";
    cin >> potTopDiameter;

    // Then ask the user for the number of pots to be calculated.
    cout << "How many pot would you like to calulate for \n";
    cin >> potQty;
    // Base calulation to se the bottom of the pot based on the input
    potBottomDiameter = potTopDiameter - 2;
    // Then calculate the average diameter of the pot  
    averageDiameterOfThePot = (potTopDiameter + potBottomDiameter) / 2;
    // and the average radius.
    averagePotRadius = averageDiameterOfThePot / 2;
    // Calculate the volume of the pot, 
    potVolume = pi * potTopDiameter * averagePotRadius * averagePotRadius;
    // the volume of the soil and gravel in the pot,  // Convert the volume to cubic feet and 
    soilVolumeCubicFeet = (potVolume * cubicInchesToFeet) * 0.8;
    gravelVolumeCubicFeet = (potVolume * cubicInchesToFeet) * 0.1;
    // calculate the price of the soil, the price of the gravel and the total price to be paid.
    priceForSoil = soilVolumeCubicFeet * vigoroOrganicPottingMixPricePerCubicFoot;
    priceForGravel = gravelVolumeCubicFeet * vigoroPeaPebblesPricePerCubicFoot;
    pricePerPot = priceForSoil + priceForGravel;
    priceForAllPots = pricePerPot * potQty;
    // Report the results to the user, showing the pot size, the volume of soil required, and the price. 
    cout << "\n\nA pot with a diameter of " << potTopDiameter << " requires " << soilVolumeCubicFeet << " cubic inches of Vigoro Organic Potting mix. \nThis would cost $" << setprecision(2) << setiosflags(ios::fixed) << priceForSoil << " per pot! \n\n";
    // Then report the volume of gravel, and the price. 
    cout << "A pot with a diameter of " << potTopDiameter << " requires " << gravelVolumeCubicFeet << " cubic inches of Vigoro pea pebbles. \nThis would cost $" << setprecision(2) << setiosflags(ios::fixed) << priceForGravel << " per pot! \n\n";

    // Finally, report the total cost for filling the pot.
    cout << "The total cost of filling a pot with a diameter of " << potTopDiameter << " with both Vigoro Organic Potting mix and Vigoro pea pebbles would be $" << pricePerPot << " per pot! \n\n";
    cout << "The total cost of filling all " << potQty << " pots with Vigoro Organic Potting mix and Vigoro pea pebbles would be $" << setprecision(2) << setiosflags(ios::fixed) << priceForAllPots << "!\n\n\n\n";
    // Write your results to 2 decimal places of precision and use dollar signs for the monetary amounts. 
    // Write a good-bye message to the customer before exiting.
    cout << "Thank you for using C++ Greenhouse potting calulator!\n\n\n";


}