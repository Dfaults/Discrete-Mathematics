/*
	 Objectives: Assume that a set of n elements is represented as an array. Write a program to represent the sets operations X (INTERSECTION) Y, X (UNION) Y, X (DIFFERENCE) Y, and complement, given the arrays representing X and Y.
				 Assume that a set of n elements is represented as an array. Write a program to represent the operation of X (SYMETRIC DIFFERENCE) Y, given the arrays representing X and Y (the symmetric difference is denoted).
				 Let X, Y two arrays. Write a program to determine whether  X is a proper subset of Y.
*/

#include <iostream>
#include <string>

using namespace std;

const int SIZEA = 5, SIZEB = 5;
string arrayA[SIZEA];
string arrayB[SIZEB];

bool validateArray(){


	if(arrayA == NULL || arrayB == NULL){
		cout << " Sorry you need to enter values for both sets in order to function.";
		return false;
	}
	else {
		return true;
	}

}

void Union(){

	cout << " Please enter values for the first set: ";
	for (int i = 0; i < SIZEA; ++i)
	{
		cin >> arrayA[i];
	}

	cout << " Please enter values for the second set: ";
	for (int i = 0; i < SIZEB; ++i)
	{
		cin >> arrayB[i];
	}
	validateArray();

	if (validateArray() == true)
	{

		for (int i = 0; i < SIZEA; ++i)
		{
			for (int k = 0; k < SIZEB; k++)
			{
				if (arrayA[i] == arrayB[k]) {
					cout << " There was a union match in value: " << arrayA[i] << endl;
				}

			}
		}

	}
	system("pause");
}


void Intersection(){

	cout << " Please enter values for the first set: ";
	for (int i = 0; i < SIZEA; ++i)
	{
		cin >> arrayA[i];
	}

	cout << " Please enter values for the second set: ";
	for (int i = 0; i < SIZEB; ++i)
	{
		cin >> arrayB[i];
	}
	validateArray();

	if (validateArray() == true)
	{

		for (int i = 0; i < SIZEA; ++i)
		{
			for (int k = 0; k < SIZEB; k++)
			{
				if (arrayA[i] == arrayB[k]) {
					cout << " There was an intersection match in value: " << arrayA[i] << endl;
				}

			}
		}

	}

	system("pause");
}

void Belonging(){

	string element;
	bool matchA = false, matchB = false;

	cout << " Please enter values for the first set: ";
	for (int i = 0; i < SIZEA; ++i)
	{
		cin >> arrayA[i];
	}

	cout << " Please enter values for the second set: ";
	for (int i = 0; i < SIZEB; ++i)
	{
		cin >> arrayB[i];
	}
	validateArray();

	if (validateArray() == true)
	{

		cout << " Enter the element to compare against sets: ";
		cin >> element;

		for (int i = 0; i < SIZEA; ++i)
		{

			if (arrayA[i] == element) {
				matchA = true;
				//cout << "Element: " << element << " is part of set A.\n";
			}
			/*else if(arrayA[i] != element) {
				matchA = false;
				//cout << "Element: " << element << " is NOT part of set A.\n";
			}*/
	
		}

		for (int k = 0; k < SIZEB; k++)
		{
			if (arrayB[k] == element) {
				matchB = true;
				//cout << "Element: " << element << " is part of set B.\n";
			}
			/*else if (arrayB[k] != element) {
				matchB = false;
				//cout << "Element: " << element << " is NOT part of set B.\n";
			}*/

		}

		if (matchA == true) {
			cout << " Element: " << element << " belongs to set A.\n";
		}
		else if (matchB == true) {
			cout << " Element: " << element << " belongs to set B.\n";
		}
		else if(matchA != true || matchB != true) {
			cout << " Element: " << element << " does NOT belong to any of the sets.\n";
		}

	}

	system("pause");
}

void Difference() {

	string element;
	bool matchA = false, matchB = false;

	cout << " Please enter values for the first set: ";
	for (int i = 0; i < SIZEA; ++i)
	{
		cin >> arrayA[i];
	}

	cout << " Please enter values for the second set: ";
	for (int i = 0; i < SIZEB; ++i)
	{
		cin >> arrayB[i];
	}
	validateArray();

	if (validateArray() == true)
	{

		cout << " Enter the element to compare against sets: ";
		cin >> element;

		for (int i = 0; i < SIZEA; ++i)
		{

			if (arrayA[i] == element) {
				matchA = true;
				//cout << "Element: " << element << " is part of set A.\n";
			}
			/*else if(arrayA[i] != element) {
			matchA = false;
			//cout << "Element: " << element << " is NOT part of set A.\n";
			}*/

		}

		for (int k = 0; k < SIZEB; k++)
		{
			if (arrayB[k] == element) {
				matchB = true;
				//cout << "Element: " << element << " is part of set B.\n";
			}
			/*else if (arrayB[k] != element) {
			matchB = false;
			//cout << "Element: " << element << " is NOT part of set B.\n";
			}*/

		}

		if (matchA == true && matchB == true) {
			cout << " The difference between both sets is all values entered except element: " << element << ".\n";

			cout << " the result of set A is: ";
			for (int i = 0; i < SIZEA; ++i) {
				if (arrayA[i] != element) {
					cout << arrayA[i] << " ";
				}
			}

			cout << endl;

				cout << "the result of set B is: ";
				for (int k = 0; k < SIZEB; ++k) {
					if (arrayB[k] != element) {
						cout << arrayB[k] << " ";
					}
				}

				cout << endl;
			}
			/*else if (matchB == true) {
				cout << "Element: " << element << " belongs to set B.\n";
			}
			else if (matchA != true || matchB != true) {
				cout << "Element: " << element << " does NOT belong to any of the sets.\n";
			}*/


		}

		system("pause");
	}

void Compliment(){

	string element;
	bool matchA = false, matchB = false;

	cout << " Please enter values for the first set (8 VALUES ARE NEEDED): ";
	for (int i = 0; i < 8; ++i)
	{
		cin >> arrayA[i];
	}

	cout << " Please enter values for the second set (5 VALUES ARE NEEDED): ";
	for (int i = 0; i < 5; ++i)
	{
		cin >> arrayB[i];
	}
	validateArray();

	if (validateArray() == true)
	{

		/*cout << "Enter the element to compare against sets: ";
		cin >> element;*/

		for (int i = 0; i < 5; ++i)
		{

			if (arrayA[i] == element) {
				matchA = true;
				//cout << "Element: " << element << " is part of set A.\n";
			}
			/*else if(arrayA[i] != element) {
			matchA = false;
			//cout << "Element: " << element << " is NOT part of set A.\n";
			}*/

		}

		for (int k = 0; k < 8; k++)
		{
			if (arrayB[k] == element) {
				matchB = true;
				//cout << "Element: " << element << " is part of set B.\n";
			}
			/*else if (arrayB[k] != element) {
			matchB = false;
			//cout << "Element: " << element << " is NOT part of set B.\n";
			}*/

		}


		cout << " The compliment of set A is: ";
		for (int i = 0; i < 8; ++i)
		{
			for (int k = 0; k < 5; ++k)
			{
				if (arrayB[k] == arrayA[i]) {
					cout << arrayB[k] << " ";
				}
						

			}
			if(arrayA[i] != arrayB[i]) {
				cout << arrayB[i] << " ";
			}

		}

		/*if (matchA == true && matchB == true) {
			cout << "The difference between both sets is all values entered except element: " << element << ".\n";

			cout << "the result of set A is: ";
			for (int i = 0; i < 5; ++i) {
				if (arrayA[i] != element) {
					cout << arrayA[i] << " ";
				}
			}

			cout << endl;

			cout << "the result of set Universe is: ";
			for (int k = 0; k < 8; ++k) {
				if (arrayB[k] != element) {
					cout << arrayB[k] << " ";
				}
			}

			cout << endl;
		}
		/*else if (matchB == true) {
			cout << "Element: " << element << " belongs to set B.\n";
		}
		else if (matchA != true || matchB != true) {
			cout << "Element: " << element << " does NOT belong to any of the sets.\n";
		}*/


	}

	system("pause");
	
}

void symetricDifference() {

	string element;
	bool matchA = false, matchB = false;

	cout << " Please enter values for the first set: ";
	for (int i = 0; i < SIZEA; ++i)
	{
		cin >> arrayA[i];
	}

	cout << " Please enter values for the second set: ";
	for (int i = 0; i < SIZEB; ++i)
	{
		cin >> arrayB[i];
	}
	validateArray();

	if (validateArray() == true)
	{

		//cout << "Enter the element to compare against sets: ";
		//cin >> element;

		for (int i = 0; i < SIZEA; ++i)
		{

			if (arrayA[i] == element) {
				matchA = true;
				//cout << "Element: " << element << " is part of set A.\n";
			}
			/*else if(arrayA[i] != element) {
			matchA = false;
			//cout << "Element: " << element << " is NOT part of set A.\n";
			}*/

		}

		for (int k = 0; k < SIZEB; k++)
		{
			if (arrayB[k] == element) {
				matchB = true;
				//cout << "Element: " << element << " is part of set B.\n";
			}
			/*else if (arrayB[k] != element) {
			matchB = false;
			//cout << "Element: " << element << " is NOT part of set B.\n";
			}*/

		}

		
			//cout << "The difference between both sets is all values entered except element: " << element << ".\n";

			cout << "\n The result of symetric difference is: ";
			for (int i = 0; i <= SIZEB; i++) {
				for (int k = 0; k <= SIZEA; k++) {
					if (arrayB[k] == arrayA[i]) {
						cout << arrayA[i] << " " << arrayB[k] << " ";
					}
				}
			}

				/*cout << "\nThe result of set B is: ";
				for (int i = 0; i < SIZEB; ++i) {
					if (arrayB[i] != arrayA[i]) {
						cout << arrayB[i] << " ";
					}
				}*/
			

				cout << endl;

				/*cout << "the result of set B is: ";
				for (int k = 0; k < SIZEB; ++k) {
					if (arrayB[k] != element) {
						cout << arrayB[k] << " ";
					}
				}*/

				cout << endl;
			
			/*else if (matchB == true) {
			cout << "Element: " << element << " belongs to set B.\n";
			}
			else if (matchA != true || matchB != true) {
			cout << "Element: " << element << " does NOT belong to any of the sets.\n";
			}*/


		

		system("pause");
	}

}


void complexFunction() {

	bool matchA = false;
	int element;
	int array1[SIZEA], array2[SIZEB];


	cout << " Please enter the values for the first array: ";	
	for (int i = 0; i < SIZEA; i++)
	{
		cin >> array1[i];
	}

	cout << " Please enter the values for the second array: ";
	for (int i = 0; i < SIZEB; i++)
	{
		cin >> array2[i];
	}



	cout << " Please enter the element to be searched: ";
	
		cin >> element;

	validateArray();

	if (validateArray() == true) {

		for (int i = 0; i < SIZEA; ++i)
		{
			if (element == array1[i])
			{
				matchA = true;
				//cout << "\n True\n";

			}
			if(element == array2[i]){
				matchA = true;
				//cout << "\n True\n";
			}
			
		}

		if (matchA == true)
		{
			cout << "\n True\n";
			return;
		}

		for (int i = 0; i < SIZEB; i++)
		{
			if (element != array1[i]) {
				matchA = false;
				//cout << "\n False\n";
			}
			if (element != array2[i]) {
				matchA = false;
				//cout << "\n False\n";
			}
		}

		
		if(matchA != true)  {
			cout << "\n False\n";
			return;
		}

		cout << endl << endl;
	}

	system("pause");
}




int main(){
	int option;

	cout << "Welcome to the Set Calculator.\nHere you can calculate Unions, Intersections, Belonging to operations, Difference, Compliment and Symetric Difference.\n";


	while (1) {

		cout << " 1. Unions\n";
		cout << " 2. Intersections\n";
		cout << " 3. Belonging\n";
		cout << " 4. Difference\n";
		cout << " 5. Compliment\n";
		cout << " 6. Symetric Difference\n";
		cout << " 7. Complex Function\n";
		cout << " 8. CLEAR SCREEN\n";
		cout << " 9. EXIT\n";

		cout << " Please select one of the following operations listed in the menu: ";
		cin >> option;

		switch (option) {
		case 1:
			Union();
			cout << endl << endl;
			break;
		case 2:
			Intersection();
			cout << endl << endl;
			break;
		case 3:
			Belonging();
			cout << endl << endl;
			break;
		case 4:
			Difference();
			cout << endl << endl;
			break;
		case 5:
			Compliment();
			cout << endl << endl;
			break;
		case 6:
			symetricDifference();
			cout << endl << endl;
			break;
		case 7:
			complexFunction();
			cout << endl << endl;
			break;
		case 8:
			system("cls");
			cout << endl << endl;
			break;
		case 9:
			return 0;
			
		}

	}

	return 0;
}