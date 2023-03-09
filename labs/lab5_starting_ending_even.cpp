#include <iostream>                                 // Header file to take input with cin and output with cout
using namespace std;                                // Gives the names of the objects and variables from standard library

int start{0}, ending{0}, i{0};                      // Initialise the variables
int main()                                          // Main function where the code is written
{
    /*Displaying statements for and assigning the user defined values to variables*/
    cout<<"Enter starting number: ";
    cin>>start;
    cout<<"Enter ending number: ";
    cin>>ending;
    if(start > ending)cout<<"\nType the right numbers\n"<<endl;  // prompts the user to type the right numbers
    while (start <= ending)                                      // While statement to print the even numbers
    {
        if (start%2 == 0)                                        // If statement to check for and print the even numbers
        {
            cout<<"Even number is: "<<start<<endl;
        }
        start++;                                                 // Incriment
    }
    return 0;                                                    // Return the main function
}