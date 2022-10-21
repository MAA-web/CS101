#include<iostream>                          // Header file to take input with cin and give output with cout
using namespace std;                        // Provide the names for the objects and variables form the standard library

int main()                                  // The main function where the code id to be written for execution
{                                           // Start Bracket
    char grade;                             // Initialise a character variable
    cout<<"type the grade: ";               // Statement for the input
    cin>>grade;                             // Assigns the variable the inputed value
    switch (grade)                          // Switch statement start
    {                                       // Start Bracket
    case 'A':                               // Case 1
        cout<<"Outstanding student";        // Print if case 1 is true
        break;                              // Breaks the switch statement
    case 'B':                               // Case 2
        cout<<"excellent student";          // Print if case 2 is true
        break;                              // Breaks the switch statement
    case 'C':                               // Case 3
        cout<<"good student";               // Print is case 3 is true
        break;                              // Break the switch statement
    default:                                // Default case
        cout<<"need improvement";           // Prints if the Default case is true
        break;                              // Breaks the switch statement
    }                                       // End Bracket
    return 0;                               // Returns the main function
}                                           // End Bracket