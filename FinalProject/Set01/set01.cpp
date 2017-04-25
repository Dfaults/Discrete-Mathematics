#include <iostream>
#include <math.h>

using namespace std;


void equalFunction();
void printMatch(bool flag, double match, const int SIZE);
void inverseRelation();
void yearlyInvestment();
void recursiveMode(double balance, double interest, int year, int time);
void iterativeMode(double balance, double interest, int year);


// Variable Declarations.

const int SIZE = 5;
bool flag = false;
double X[SIZE], Y[SIZE], balance, interest, newBalance;
int time = 0, year;

int main(int argc, char const *argv[])
{
	int option;

	cout << " Welcome to the first SET choose an option to begin. \n\n";
	cout << " 1. Determine whether X value equals Y value \n";
	cout << " 2. Find the Inverse Relation \n";
	cout << " 3. Calculate yearly investment \n";
	cout << " 4. Test if a Graph is a Tree \n";
	cout << " 5. EXIT this SET \n";

	cin >> option;

	switch(option){
		case 1:
			equalFunction();
			break;
		case 2:
			inverseRelation();
			break;
		case 3:
			yearlyInvestment();
			break;
		case 4:
			break;
		case 5:
			return 0;
		default:
			cout << "\n Please choose one of the options above in order to perform an action \n\n";
	}


	return 0;
}


void equalFunction(){
	// This function calculates the first option in the SET (Determine whether X value equals Y value).
	

	cout << " \n Enter the values of the first array. There must be " << SIZE << " values in this array and separated by white spaces: ";
		for (int i = 0; i < SIZE; ++i)
		{
			/* Get the input for X array */
			cin >> X[i];
		}

		cout << endl;

	cout << " Enter the valuesof the second array. There must be " << SIZE << " values in this array and separated by white spaces: ";
		for (int i = 0; i < SIZE; ++i)
		{
			/* Get the Y array */
			cin >> Y[i];
		}

		cout << endl;

	for (int i = 0; i < SIZE; ++i)
	{
		X[i];
		for (int k = 0; k < SIZE; k++)
		{
			/* Find if values are equals in both arrays. */
			if (X[i] == Y[k])
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


void inverseRelation() {

	const int ARRAY_SIZE = 3;
	double straight01[ARRAY_SIZE], straight02[ARRAY_SIZE], reverse[ARRAY_SIZE];

	cout << "\n There are " << ARRAY_SIZE << " Spaces in this array and they must be separated by white spaces when entering values. \n\n";
	cout << " Please enter the values you would like to have in the first array: ";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cin >> straight01[i];
	}

	cout << "\n Now please enter the second array in order to create the ordered pairs: ";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cin >> straight02[i];
	}

	/*for (int i = 0; i < ARRAY_SIZE; i++)
	{
		reverse[i] = straight[i];
	}*/

	cout << endl;

	cout << " The reversse order of the pairs is: ";
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		cout << "(" << straight02[i] << "," << straight01[i] << ") ";
		//cout << reverse[i] << " ";
	}

	cout << endl;

	system("pause");

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