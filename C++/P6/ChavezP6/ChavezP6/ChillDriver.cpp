//ADD YOUR NAME HERE: Colby Chavez		  

#include "WindChill.h"
// the #include "WindChill.h" was missing and required for most of the program to work in a multi file format
int main()
{

	cout << "\n\n CIS 1275   C6  Debugging Quiz Assignment:  Windchill & FrostBite"
		<< "\n This program crashes. Can you find and fix the crashing points?\n"
		<< "\n Place a comment above the line where the crash occurs";
		// Line 9 missing ; closing the statement started on line 7

	double temp{ 0.0 };
	double wSpeed{ 0.0 }, wChill{ 0.0 };
	int returnCode{ 0 }, fBite{ 0 };
	// Line 15 variable declaration incorret bad code on line 17
	//	int returnCo{ 0 }, fBite{ 0 };
	string answer{ "yes"};
	//	Line 16 variable missspelled as "answe" and missing " closing the string "yes"

		//do while loop here
		do
		{
			//asked for temp
			temp = AskForTemperature();
			// line 24 replaced the functionn call that was misspeled and dislpaed on line 26
			// temp = AskForTempeture();

			//asked for windspeed
			wSpeed = AskForWindSpeed();

			//validated temp and windspeed
			returnCode = ValidateTempAndWS(temp, wSpeed);
			// Variables on line 33 not camelback cased properly incorrect code on line 35
			// returnCode = ValidateTempAndWS(Temp, WSpeed);
			//return codes 0 = all OK, 1 = both invalid, 2 = temp invalid, 3 = wind invalid

			//if all ok
			if (returnCode == 0)
			{
				//calculate windchill
					wChill = CalcWindchill(temp, wSpeed);
					// Variables on line 42 not cased properly incorect code on line 44
					// wChill = CalcWindchill(Temp, wSpeed);
					//calculate frostbite time
						fBite = DetermineFrostbiteTimes(temp, wSpeed);
						// Variables on line 46 not cased properly incorect code on line 48
						// fBite = DetermineFrostbiteTimes(Temp, WSpeed);
						//show the user results
						cout << "\n\n Temperature is : " << temp;
						cout << "\n\n WindSpeed is : " << wSpeed;
						cout << "\n \n WindChill is : " << wChill;
						// Variables on line 52 not cased properly incorect code on line 54
						// cout << "\n \n WindChill is : " << WChill;
						if (fBite > 30 || fBite < 0)
						// Variables on line  55 not cased properly incorect code on line 57
						// if (Fbite > 30 || Fbite < 0)
							cout << "\n\n Forstbite is not an immediate threat.";
						else
							cout << "\n \n FrostBite is : " << fBite << " minutes. \n\n";
						// Variables on line  60 not cased properly incorect code on line 62
						// cout << "\n \n FrostBite is : " << Fbite << " minutes. \n\n";

					}
					else if (returnCode == 1)
					{
						cout << "\n\n Temperature and WindSpeed is Invalid ";
					}
					else if (returnCode == 2)
					{
						cout << "\n\n Temperature is Invalid ";
					}
					else if (returnCode == 3)
					{
						cout << "\n\n WindSpeed is Invalid ";
					}
					else if (returnCode == 4)
					{
						cout << "\n\n These conditions mean instant death! DO NOT WALK OUTSIDE!";
					}
					
					// unneeded lines of code on lines 83-85
					// cout << "\n\n Do You Want To Go Again? (yes/no) :";
					// cin >> answer;
					// cin.ignore();

				} while (DoAgain());
				// Do again missing closing parenthisis incorrecty code on line 89
				// } while (DoAgain();
				Goodbye();

			 return 0;
					}

