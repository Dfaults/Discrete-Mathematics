#include <iostream>

using namespace std;

void universeFunction();
void yearlyInvestment();
void recursiveMode(double balance, double interest, int year, int time);
void iterativeMode(double balance, double interest, int year);


const int SIZE = 5;
double X[SIZE], Y[SIZE], balance, interest, newBalance;
int time = 0, year;


int main(int argc, char const *argv[])
{
	cout << " Welcome to SET #2 please choose one of the options in order to proceed \n\n";

	cout << " 1. Universe";
	cout << "\n 2. Composition of R o S & S and R";
	cout << "\n 3. Yearly investment Calculator";
	cout << "\n 4. Pre-Order Tree traversal";
	cout << "\n 5. EXIT";


	switch(option){
		case 1:
			universeFunction();
			break;
		case 2:
			break;
		case 3:
			yearlyInvestment();
			break;
		case 4:
			break;
		case 5:
			return 0;
	}
	return 0;
}



void universeFunction(){

	/* This function makes sure to test if the values entered in the X array exist in the universe array. */

	double universe[SIZE], X[SIZE];


	cout << " \n Please enter the universe array in order to get started (separate values with white spaces): ";
	for (int i = 0; i < SIZE; ++i)
	{
		cin >> universe[i];
	}

	cout << "\n Now please enter the values for X={...: ";
	for (int i = 0; i < SIZE; ++i)
	{
		cin >> X[i];
	}

	for (int i = 0; i < SIZE; ++i)
	{
		X[i];
		for (int k = 0; k < SIZE; k++)
		{
			/* Find if values are equals in both arrays. */
			if (X[i] == universe[k])
			{
				/* Store the values that are equals */
				//equals[k] = X[i];
				flag = true;
				double match = X[i];
				printMatch(flag, match, SIZE);

			}
			else {
				flag = false;
				printMatch(flag, NULL, SIZE);
			}
		}
		
	}
	
system("pause");

}


void printMatch(bool flag, double match, const int SIZE) {

	// This functions only job is to check if the flag and print out a message to the user.

	if (flag != false)
	{
		cout << " Matches were found! \n The values are: " << match << " ";
		
	}
	else if(flag == false){
		//cout << " No Matches were found in the arrays :( \n\n";
	}

}



void yearlyInvestment() {

	cout << " \n Welcome to the investment calculator! follow the instructions in order to get your yearly interest calculated. \n\n";

	cout << "\n Please enter the balance for the account: ";
	cin >> balance;

	cout << "\n Now enter the number of years you would like to calculate the interest on: ";
	cin >> year;

	cout << "\n Finaly enter the interest which the bank will pay you: ";
	cin >> interest;

	// Function Calls.

	cout << endl << endl << " Recursive Mode.........\n\n";
	recursiveMode(balance, interest, year, time);
	system("pause");

	cout << endl << endl << " Iterative Mode.........\n\n";
	iterativeMode(balance, interest, year);


	system("pause");
}


void recursiveMode(double balance, double interest, int year, int time){

	// Calculates the new balance by recursively calling itself.

	
	if (time != year)
	{

		newBalance = + pow((1 * interest), time) * balance;

		cout << "\n The new balance after " << time << " years of interest is payed is: " << newBalance << endl;

		//newBalance += pow((1 * interest), time) * balance;
		
	}else if(time == year){

		// Escape the function.
		cout << "The new balance after interest is payed is: " << newBalance << endl;
		return;
	}
	return recursiveMode(newBalance, interest, year, time + 1);

	//return newBalance;
}


void iterativeMode(double balance, double interest, int year){

	// Calculates the new balance by iterating the years one by one until the calculation is complete.

	for (int i = 0; i <= year; i++)
	{
		newBalance = balance + pow((1 * interest), i) * balance;
		
		cout << "\n The new balance after " << i << " years of interest is payed is: " << newBalance << endl;
	}

	cout << endl;

	system("pause");

	//	return newBalance;
}