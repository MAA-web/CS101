#include <iostream>                          // Header file to take input with cin and output with cout
using namespace std;                         // Gives the names of the objects and variables from standard library

int main()                                   // Main function where the whole code is written
{
    for (int i = 0; i < 5; i++)              // for loop to print the rows
    {
        for (int j = 0; j <= i; j++)         // for loop to print the *
        {
            cout<<"*";
        }
        cout<<""<<endl;                      // To print a new line
    }

    for (int i = 0; i < 5; i++)              // for loop to print rows
    {
        cout<<""<<endl;                      // To print new line
        for (int j = 5; j > i; j-=1)         // For loop to print *
        {
            cout<<"*";
        }
        
    }
    return 0;                                // Return the main function
}