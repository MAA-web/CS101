#include <iostream>					// Header file is used to take input with cin and give output with cout
#include <string>					// Header file is used to take input in form of string and be stored as a string
using namespace std;				// It gives you names for objects and variables from the standard library

int main()							// main function in which everything should be written
{									// start brackets
	cout<<"This application is a simple calculator with two inputs.\n";	// Describes what this code does
	int num1, num2, add, multiply, subtract, modulus = 0;		// Initialize the variables
	string _operator;											// Initiaze the _operator to store the user input in string form
	
	cout<<"type the first number: ";							// Display the statement of the first variable 
	cin>>num1;													// Assigns the num1 variable a value
	cout<<"type the second number: ";							// Display the statement of the second variable
	cin>>num2;													// Assigns the num2 variable a value

	bool t = true;												// initiates a boolean value to be used in the while loop
	while (t)													// While loop to run until the desired inputs are met
	{															// Start Bracket
		cout<<"choose the operator: ";							// Displays the statement of the operator variable
		cin>>_operator;											// Assigns the operator variable a value
		if (_operator == "+")									// If statement to check if the operator is +
		{														// Start Bracket
			add = num1 + num2;									// Calculates the value on addition of the two variables
			cout<<"\nAddition of the numbers gives: "<<add;		// Displays the statement of addition
			t = false;											// Sets t to False to break out of the while loop
		}														// End bracket
		else if (_operator == "-")								// If else statement to check if the operator is +
		{														// Start Bracket
			subtract = num1 - num2;								// Calculates the value on subtraction of the two variables
			cout<<"Subtraction of the first number by the second number gives: "<<subtract;	// Displays the statement of subtraction
			t = false;											// Sets t to False to break out of the while loop
		}														// End Bracket
		else if (_operator == "*")								// If Else statement to to check if the operator is -
		{														// Start bracket
			multiply = num1 * num2;								// Calculates the value on multipication of the two variables
			cout<<"Multiplication of the two number gives: "<<multiply;	// Displays the statement of multiplication
			t = false;											// Sets t to False to break the while loop
		}														// End Bracket
		else if (_operator == "%")								// If Else statement to check is the operator is %
		{														// Start Bracket
			cout<<"Modulus of the first number by the second number gives: "<<modulus;	// Display the statement of Modulus
			t = false;											// Sets t to False to break out of the while loop
		}														// End Bracket
		else													// Else statement to handle everything else
		{														// Start Bracket
			cout<<"type one of + - * %";						// Displays if the user prints in something wrong
		}														// End Bracket
	}															// End Bracket
	return 0;													// Returns the main function
}																// End Bracket