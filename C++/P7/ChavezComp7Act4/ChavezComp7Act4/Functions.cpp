#include "Functions.h"


void WriteHeader()
{
    cout << "ChavezComp5Act1 \nProgramed by: Colby Chavez \ncchavez572@cnm.edu\n\n\n\n\n\n";
    cout << "Welcome to SumAndAverage, which is a program that will calculate the sum and average of the elements in an array \n\n";
}
// void  AskForInts(int nums[]);
void  AskForInts(int nums[])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "What number would you like to add to the array?: \n";
		cin >> nums[i - 1];
		cin.ignore();
	}
}
// void CalcSumAndAve(int nums[],int &sum, double &ave);
// to calculate the sum and average. Of the 6 numbers in the array.
// Then display numbers, sum and average by calling the function
void CalcSumAndAve(int nums[], int &sum, double &ave)
{
	
	for (int i = 0; i < SIZE; i++)
	{	
		sum = sum + nums[i - 1];
	}
	ave = sum / SIZE;
}
// Then display numbers, sum and average by calling the function
// void DisplayAll(int nums [], int sum, double ave);
void DisplayAll(int nums[], int sum, double ave)
{
	cout << "The numbers you entered were: \n";
	for (int i = 0; i < SIZE; i++)
	{
		if (i+1 < SIZE)
		{ 
			cout << nums[i-1] << ", ";
		}
		else
		{
			cout << "and " << nums[i - 1] << ".";
		}
	}
	cout << "\nThe sum of those numbers is " << sum << ", and the average of all those numbers is " << ave << ".\n";


}	
// Ask the user if they want to do another using your function, DoAnother(), 
// using the response to control the do-while or while loop.
bool DoAnother()
{
	string doAnother;
	cout << "\n\n Do you want to calculate another SumAndAverage? yes/no    ";
	getline(cin, doAnother);
	if (doAnother == "yes")
	{
		return true;
	}
	else
	{
		return false;
	}

}

