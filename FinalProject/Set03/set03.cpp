#include <iostream>

using namespace std;

void inverseRelation();
void yearlyInvestment();
void recursiveMode(double balance, double interest, int year, int time);
void iterativeMode(double balance, double interest, int year);


const int SIZE = 5;
double X[SIZE], Y[SIZE], balance, interest, newBalance;
int time = 0, year, option;

int main(int argc, char const *argv[])
{
	cout << " Welcome to SET #3. Please follow the onscreen instructions to proceed.\n\n";

	cout << " 1. inverse Relation";
	cout << "\n 2. Yearly Investment Calculator";
	cout << "\n 3. Post-Order Tree Traversal";
	cout << "\n 4. In-Order Tree Traversal";
	cout << "\n EXIT";

	switch(option){
		case 1:
			inverseRelation();
			break;
		case 2:
			yearlyInvestment();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return 0;
	}

	return 0;
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