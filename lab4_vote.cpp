#include<iostream>                                  // Header file to take input with cin and give output with cout
using namespace std;                                // Names for objects and variables from standard library

int main()                                          // The main function where the code is to be written
{                                                   // Start Bracket
    int age;                                        // Initialise an integer age
    cout<<"What is your age?: ";                    // Display the statement for the input
    cin>>age;                                       // Assign the age the inputed value
    if(age <= 0 || age >= 100)                      // If statement to check if the age is less than or equal to 0 or greater than 100
    {                                               // Start Bracket
        cout<<"Type the correct age";               // If age is less than 0 then tells the user to type the correct age
    }                                               // End Bracket
    else if (age>=22 && age > 0 && age <= 100)      // Checks if the age is grater than 0 and greater than 22
    {                                               // Start Bracket
        cout<<"you are eligible to vote.";          // Displays if you are eligible to vote
    }                                               // End Bracket
    else                                            // else statement
    {                                               // Start Bracket
        cout<<"you are not elligible to vote.";     // Displays if you ate not eligible to vote
    }                                               // End Bracket
    return 0;                                       // Returns the main function
}                                                   // End Bracket