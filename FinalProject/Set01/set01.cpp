#include <iostream>
#include <math.h>

using namespace std;


void EqualFunction();
void printMatch(bool flag, double match, const int SIZE);



const int SIZE = 5;
bool flag = false;
double X[SIZE], Y[SIZE];

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
	

	cout << " Enter the values of the first array. There must be " << SIZE << " values in this array and separated by white spaces: ";
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