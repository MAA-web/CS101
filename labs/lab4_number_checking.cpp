#include<iostream>                                                    // Header file to take input with cin and output with cout
using namespace std;                                                  // Names for objects and variables from the standard library

int main()                                                            // The main function where the code is to be written
{                                                                     // Bracket start
    int number;                                                       // Initialise an integer number
    cout<<"Enter the number: ";                                       // Displays the statement for input
    cin>>number;                                                      // Assigns the number varable a value
    if(number >= 90 && number <= 100 && number >= 0)                  // checks for number between 90 and 100
    {                                                                 // Bracket start
        cout<<"Your grade is A.";                                     // Prints the statement for A grade
    }                                                                 // Bracket end
    else if(number >= 80 && number < 90 && number >= 0)               // checks for number between 80 and 90
    {                                                                 // Bracket start
        cout<<"Your grade is B.";                                     // Prints the statement for B grade
    }                                                                 // Bracket end
    else if(number >= 70 && number < 80 && number >= 0)               // checks for number between 70 and 80
    {                                                                 // Bracket start
        cout<<"Your grade is C.";                                     // Prints the statement for C grade
    }                                                                 // Bracket end
    else if(number >= 50 && number < 70 && number >= 0)               // checks for number between 50 and 70
    {                                                                 // Bracket start
        cout<<"Your grade is D.";                                     // Prints the statement for D grade
    }                                                                 // Bracket end
    else if(number < 50 && number >= 0)                               // checks for number less than 50
    {                                                                 // Bracket start
        cout<<"Appear for test again.";                               // Prints the statement for appearing again in test
    }                                                                 // Bracket end
    else                                                              // Else statement
    {                                                                 // Bracket start
        cout<<"Type the right number i.e between 0 and 100.";         // Prints the statement for else
    }                                                                 // Bracket end
    return 0;                                                         // returns the main function
}                                                                     // Bracket end