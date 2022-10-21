#include <iostream>								// Header file is used to take input with cin and give output with cout
using namespace std;							// It gives you names for objects and variables from the standard library

int main()										// main function in which everything should be written
{												// Start Bracket
	cout<<"This application gives the 20% discounted value of a product to the user.\n"; // Describes what this piece of code does
	float number, discount, sale_price= 0;		// Initiazes the float variables to zero
	cout<<"Type the price of the product: ";	// Prints the statement to ask the user for number
	cin>>number;								// Assigns the number a value
	discount = number * 20/100;					// Calculates the Discount
	//cout<<discount;
	sale_price = number - discount;				// Calculates the sale price
	cout<<"The sale price of the product after 20% discount is: "<<sale_price;	// Displays the sale price of the product
	return 0;									// Returns the main function
}												// End Bracket