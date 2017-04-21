#include <iostream>
#include <math.h>

using namespace std;


void EqualFunction();



int main(int argc, char const *argv[])
{

	cout << " Welcome to the first SET choose an option to begin. \n\n";
	cout << " 1. Determine whether X value equals Y value \n";
	cout << " 2. Find the Inverse Relation \n";
	cout << " 3. Calculate yearly investment \n";
	cout << " 4. Test if a Graph is a Tree \n";
	cout << " 5. EXIT this SET \n";

	cin >> option;

	switch(option){
		case 1:
			EqualFunction();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return 0;
		default:
			cout << " Please choose one of the options above in order to perform an action \n\n";
	}


	return 0;
}


void EqualFunction(){
	// This function calculates the first option in the SET (Determine whether X value equals Y value). 
	int SIZE = 3, option;
	double X[SIZE], Y[SIZE], equals[];

	cout << " Enter the values of the first array. There must be " << SIZE << " values in this array and separated by white spaces: ";
		for (int i = 0; i < SIZE; ++i)
		{
			/* Get the input for X array */
			cin >> X[i];
		}

	cout << " Enter the valuesof the second array. There must be " << SIZE << " values in this array and separated by white spaces: ";
		for (int i = 0; i < SIZE; ++i)
		{
			/* Get the Y array */
			cin >> Y[i];
		}

	for (int i = 0; i < SIZE; ++i)
	{
		/* Find if values are equals in both arrays. */

		if (X[i] == Y[i])
		{
			/* Store the values that are equals */
			equals[i] = X[i];

		}
	}

	cout << " Matches were found! \n The values are: ";
	for (int i = 0; i < SIZE; ++i)
	{
		/* Print the matching values to the user */
		cout << equals[i] << " ";
	}

}