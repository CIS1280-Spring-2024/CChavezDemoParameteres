// Programed By: Colby Chavez
// Contact: cchavez572@cnm.edu
// Program: ChavezComp7Act4
// 5 pts  Write your name, email address and file name at the top of your source code in a comment.
// 
#include "Functions.h"

int main()
{
	WriteHeader();
	// 5 pts Use cout statements to write your name, program title, and program objective to the screen so that it is the first thing seen when your program runs.  This is your course header.  
	// In main(), call WriteHeader();

	// Declare an array of 6 integers named numbers.
	int nums[6];
	// Declare variables for sum and average.
	int sum = { 0 };
	double ave = { 0 };

	// Open a do-while or while loop
	string answer = "yes";
	do{
		// this is all here to zero out the variables so the program can loop
		// I did not see a more eligant place to build this into he code with
		//  the paramiters you se in the assigment: 
		// SOMETHING LIKE lines 27-32 IS REQUIRED
		for (int i = 0; i < SIZE; i++)
		{
			nums[i] = 0;
		}
		sum = 0;
		ave = 0;

		// Ask the user to input 6 ints using the function
		// void  AskForInts(int nums[]);
		// Call the function
		AskForInts(nums);
		
		// void CalcSumAndAve(int nums[],int &sum, double &ave);
		// to calculate the sum and average. Of the 6 numbers in the array.
		CalcSumAndAve(nums, sum, ave);
	// Then display numbers, sum and average by calling the function
	// void DisplayAll(int nums [], int sum, double ave);
		DisplayAll(nums, sum, ave);

	// Ask the user if they want to do another using your function, DoAnother(), using the response to control the do-while or while loop.
	}while (DoAnother());
	// When the  user is done, say goodbye.
	cout << "Thanks for using SumAndAverage for your basic math needs";
	return 0;
}
