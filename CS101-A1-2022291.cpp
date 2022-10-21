#include <iostream>                                 // Header file is used to take input with cin and give output with cout
using namespace std;                                // It gives you names for objects and variables from the standard library


float a{0}, b{0}, largest{0};                       // Initialising variables
int main()                                          // Main function where the code is to be written
{
    cout<<"Enter two numbers: ";                    // Statement to enter two numbers
    cin>>a>>b;                                      // Assigning variables values

    if (a == b)                                     // If statement to check if the numbers are equal
    {
        cout<<"These numbers are equal."<<endl;
    }
    else if (a > b)                                 // else if to check if a > b
    {
        largest = a;                                // Assigning larger the value of a
        cout<<largest<<" is larger."<<endl;
    }
    else                                            // Else statement
    {
        largest = b;                                // Assigning larger the value of b if b as greater than a if the else statement runs
        cout<<largest<<" is larger."<<endl;
    }
    return 0;                                       // Returns the main function the exit code 0 so everything is ok
}
