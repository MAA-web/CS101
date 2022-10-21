#include <iostream>                         //Header file to take input with cin and output with cout
using namespace std;                        // Gives the names of the objects and variables from standard library

int num{1}, add{0}, addition{0}, j{0};      // initialise the variables
int main()                                  // Main function where the code is written
{
    while (num <= 5 )                       // while statement to run for 5 times
    {
        addition+=num;                      // calculation
        cout<<"1";                          // printing 1
        for (int i = 2;i <= num ; i++)      // For loop to print the rest of the numbers and +
        {
            cout<<"+"<<i;
        }
        cout<<"="<<addition<<endl;          // Printing = and result of the summation
        num+=1;
    }
    return 0;                               // Return the main function
}