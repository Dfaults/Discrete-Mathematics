/*
	Author: Dfaults
	Description: This program calculates the annual interest given by the bank according to the deposit being made.
				 The user must enter the interest rate in which the bank will operate, the number of months they want
				 to calculate that insterest, and the amount of money that will be gaining the interest during that time.
				 This must be done in both ITERATIVE mode and RECURSIVE mode in order to prove that it can be done by
				 either way and it will have the same results.

				 A bank pay 6% annual interest on saving, compounding the interest monthly. If we deposit $1000 on the 
				 first day of May, how much will this deposit be worth a year later? Write a program to solve the above problem.
				 Use two versions:
						Using iterative solution
						Recursive solution
*/

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

// Variable declaration.
	int month;
	double interest, balance, newBalance;

// Function declaration.
	void recursiveMode(double, double, int);
	void iterativeMode(double, double, int);

int main(int argc, char const *argv[])
{

	// User message to enter the values to be calculated.
	cout << "Welcome to the annual interest calculator!\n";
	cout << "Please enter the information in order to perform the calculation.\n";
	cout << "Please enter the balance for the account: ";
	cin >> balance;

	cout << "Now enter the number of months you would like to calculate the interest on: ";
	cin >> month;

	cout << "Finaly enter the interest which the bank will pay you: ";
	cin >> interest;

	// Function Calls.
	recursiveMode(balance, interest, month);
	iterativeMode(balance, interest, month);

	return 0;
}


void recursiveMode(double balance, double interest, int month){

	// Calculates the new balance by recursively calling itself.

	int time = 1;

	if (time == month)
	{
		// Escape the function.
		cout << "The new balance after interest is payed is: " << newBalance << endl;
		return;
	}else{

		newBalance += pow((1 * interest), time) * balance;
	}
	recursiveMode(newBalance, interest, time + 1);

	//return newBalance;
}

void iterativeMode(double balance, double interest, int month){

	// Calculates the new balance by iterating the months one by one until the calculation is complete.

	for (int i = 0; i < month; ++i)
	{
		newBalance = pow((1 * interest), i) * balance;
	}

	cout << "The new balance after interest is payed is: " << newBalance << endl;

	//	return newBalance;
}