#include <iostream>                            //Header file to take input with cin and output with cout
using namespace std;                           // Gives the names of the objects and variables from standard library

float n{0}, total_numbers{0}, counter{0}, checkm{0}, check{0}, average{0}; //initialising variables
int main()                                     //The main function where the code is written
{
    while (n >= 0)                             //While loop
    {
        cout<<"Enter a number: ";              //Display statement of first number
        cin>>n;

        if(n >= 0)total_numbers+=n;            // If statement of addition
        if(counter == 0 && n >= 0)             // If statement to assign variable values
        {
            check = n;
            checkm = n;
        }
        if (n < check && n >= 0) check = n;    // If statement for minimum
        if (n > checkm && n >= 0) checkm = n;  // If statement for maximum
        counter++;                             // itteretor
    }
    average = total_numbers/counter;           // calculation for average
    cout<<"Average is: "<<average<<endl;       // Displaying all the relevant answers
    cout<<"Maximum is: "<<checkm<<endl;
    cout<<"Minimum is: "<<check<<endl;
    return 0;                                  // Returning the main function
}
