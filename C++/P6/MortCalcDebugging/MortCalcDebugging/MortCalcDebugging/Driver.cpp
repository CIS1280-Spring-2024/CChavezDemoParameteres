//Ivonne Nelson
//inelson1@cnm.edu

//Driver.cpp

//This program calculates monthly payment and total interest
//given a principal, interest rate, and time period.


#include <string> 
using namespace std;

int main()
{
	int years{ 0 };
	double prin{ 0.0 }, interest{ 0.0 };

	string result;
	string again{ "yes" };
	
	bool bvalid{ true };
	
	Header();

    do 
	{	
		prin = AskPrin();
		interest = AskInterest();
		years = AskYears();

		bValid = Validate(prin, interest, years);	
	
		if(bValid)
		{
			result = MortCalc(years,prin,interest);
			cout << result;
		}
		else
			cout<<"\n\n You input was not valid.  Try again.\n";        
	
	
	}while (DoAgain();

	
	return 0;
}
