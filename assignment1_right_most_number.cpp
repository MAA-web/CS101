#include <iostream>									// Header file is used to take input with cin and give output with cout
using namespace std;								// It gives you names for objects and variables from the standard library

int main()											// main function in which everything should be written
{													// start bracket
	cout<<"This application finds the rightmost digit of the users inputed number.\n"; // Describes what this code does
	long long int number, last_digit = 0;			// Initialise variables to long int so that operations can take place on them
	cout<<"Type the number: ";						// Displays the statement of inputting the number
	cin>>number;									// Assigns the number a value
	last_digit = number % 10;						// Calculates the last digit
	cout<<"The right most digit is: "<<last_digit;	// Displays the right most digit
	return 0;										// Returns the main function
}													// End Bracket