#include<iostream>									// Header file is used to take input with cin and give output with cout
using namespace std;								// It gives you names for objects and variables from the standard library

int main()											// main function in which everything should be written
{													// Start Bracket
	cout<<"This application finds the circumference of a circle with user defined radius.\n";
	double radius = 0, circumference = 0;			// Initiazes the double variavbles to 0
	cout<<"type the radius of the circle: ";		// Displays the ststement to ask the user for the radius
	cin>>radius;									// Assigns the value to the radius variable
	circumference = 2 * (22.0/7.0 * radius*radius);	// Calculates the circumference of the circle
	cout<<"\nThe circumference of the circle is: "<<circumference; // Displays the circumference of the circle
	return 0;										// Returns the main function
}													// End Bracket
