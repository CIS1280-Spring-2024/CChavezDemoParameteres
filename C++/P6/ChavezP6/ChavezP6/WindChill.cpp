//WindChill.cpp


#include "WindChill.h"


double AskForTemperature()
{
	double temp{ 100 };

	cout << "\n\n Hello. Please enter the temperature in degrees: ";
	cin >> temp;
	cin.ignore();
	// not having a cin.ignore() is breaking the loop
	return temp;
}

void WriteHeader()
{

	cout << "\n Welcome to the WindChill Calculator Program."
		<< "\n The WindChill is how cold it will feel on your skin when you factor in the wind.  ";
	cout << "\n As the wind increases, the body is cooled at a faster rate causing the skin temperature to drop"
		<< "\n This can lead to frostbite, which is caused by freezing of the skin and underlying tissues."
		<< "\n So the colder it is, the faster a person can get frostbite.";
	cout << "\n We will also calculate the time to frostbite for any temperature and wind speed in the range.";
}

double AskForWindSpeed()
{
	double wSpeed{ 0.0 };

	cout << "\n\n Hello. Please enter the WindSpeed in miles per hour: ";
	cin >> wSpeed;
	cin.ignore();
	// not having a cin.ignore() is breaking the loop
	return wSpeed;
}


int ValidateTempAndWS(double temp, double speed)
{

	int code{ 0 };

	//0 = all OK, 1 = both invalid, 2 = temp invalid,
	//3 = wind invalid, 4 = "Instant Death"
	if (temp <= 40 && speed >= 5)//if temp less than 40 & wspeed greater then 5 
	{
		code = 0;
	}
	else if (temp > 40 && speed < 5)//if temp not less than 40  & wspeed not greater than 5 
	{
		code = 1;
	}
	else if (temp > 40 && speed >= 5)//if temp not less than 40  & wspeed greater than 5 
	{
		code = 2;
	}
	else if (temp >= 40 && speed < 5)//if temp less than 40 & wspeed less than 5 
	{
		code = 3;
	}
	else if (temp < -45 && speed > 60)
	// Line 64 had an erronous Semi collon at the end casing the IF statement to break and alwast set the code to 4
	//	Bad code displayed on line 67
		//	else if (temp < -45 && speed > 60);
	{
		code = 4;
	}

	return code;
}


double CalcWindchill(double V, double T)
{

	double wChill = 35.74 + 0.6215 * T - 35.75 * pow(V, 0.16) + 0.4275 * T * pow(V, 0.16);

	return wChill;
}

int DetermineFrostbiteTimes(double T, double V)
{

	double fTime = 0.0;

	double first = ((V * 8. / 5.) * 0.667);

	double second = ((first + 4.8) * (-24.5)) + 2111.0;

	double third = ((T - 32) * 5. / 9.);


	double fourth = pow((-4.8 - third), -1.668);
	fTime = second * fourth;
	// on line 91 fTime is nor properly camel back cased incorrect code displayed on line 93
	// ftime = second * fourth;

	if (fTime > 30)
		fTime = -1;

	return static_cast<int> (fTime);

}

void Goodbye()
{

	cout << "\n Goodbye and thanks for calculating WindChill with us!";
}

bool DoAgain()
{
	string doAgain;
	cout << "\n\n Do you want to calculate another Wind Chill? yes/no    ";
	getline(cin, doAgain);
	if (doAgain == "yes")
	{
		return true;
	}
	else
	{
	return false;
	}
	//DoAgain was missing Else statment so it would alwasy close 
}
