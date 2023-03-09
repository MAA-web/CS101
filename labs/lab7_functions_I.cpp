#include <iostream>						//headerfile to take input with cin and output with cout
using namespace std;					//to use names of objects and variables from standard library

int a;									//initialising vaiable a

int even_odd(int);						//prototyping function with retur type int

int main()								// main function where the code is to be written for execution
{																			//start bracket
	cout<<"Enter an integer and I will tell you if it is even or odd: ";	//prompt for variable
	cin>>a;																	//assigning variable value
	even_odd(a);															//calling function
	return 0;																//returning main function 0
}																			//end bracket

int even_odd(int b){														//code for function
	if (b%2 == 0){cout<<b<<" is even\n";}									//If statement for even numbers
	else{cout<<b<<" is odd\n";}											//else for odd
	return 1;																//returning 1 so the compiler doesn't complain
}																			//end bracket
