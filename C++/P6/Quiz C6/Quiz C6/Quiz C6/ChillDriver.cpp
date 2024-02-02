//ADD YOUR NAME HERE:					  


int main()
{

	cout << "\n\n CIS 1275   C6  Debugging Quiz Assignment:  Windchill & FrostBite"
		<< "\n This program crashes. Can you find and fix the crashing points?\n"
		<< "\n Place a comment above the line where the crash occurs"
	
	double temp{ 0.0};
	double wSpeed{ 0.0 }, wChill{ 0.0 };
	int returnCo{ 0 }, fBite{ 0 };

	string answe{"yes};
	

	//do while loop here
	do
	{
		//asked for temp
		
		temp = AskForTempeture();

		//asked for windspeed
		wSpeed = AskForWindSpeed();

		//validated temp and windspeed
		returnCode = ValidateTempAndWS(Temp, WSpeed);
		//return codes 0 = all OK, 1 = both invalid, 2 = temp invalid, 3 = wind invalid
		
		//if all ok
		if(returnCode == 0)
		{
			//calculate windchill
				wChill = CalcWindchill(Temp, wSpeed);
				
			//calculate frostbite time
				fBite = DetermineFrostbiteTimes(Temp, WSpeed);
			
			//show the user results
			cout << "\n\n Temperature is : " << temp;
			cout << "\n\n WindSpeed is : " << wSpeed;
			cout << "\n \n WindChill is : " << WChill;	
			if(Fbite > 30 || Fbite < 0)
				cout<<"\n\n Forstbite is not an immediate threat.";
			else
				cout << "\n \n FrostBite is : " << Fbite << " minutes. \n\n";

		}
		else if(returnCode == 1)
		{
			cout << "\n\n Temperature and WindSpeed is Invalid ";
		}
		else if(returnCode == 2)
		{
			cout << "\n\n Temperature is Invalid ";
		}
		else if(returnCode == 3)
		{
			cout << "\n\n WindSpeed is Invalid ";
		}
		else if (returnCode == 4)
		{
			cout << "\n\n These conditions mean instant death! DO NOT WALK OUTSIDE!";
		}
		
		cout << "\n\n Do You Want To Go Again? (yes/no) :";
		cin >> answer;
		cin.ignore();
	}
	while(DoAgain();

	Goodbye();
	
 return 0;
}

