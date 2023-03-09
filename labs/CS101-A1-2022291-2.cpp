#include <iostream>                                 // Header file is used to take input with cin and give output with cout
using namespace std;                                // It gives you names for objects and variables from the standard library


float a{0}, b{0}, c{0}, sum{0}, average{0}, product{0}, smallest{0}, largest{0};// Initialising variables

int main() {                                        // Main function where the code is to be written
    while (true)
    {
        cout<<"Input three different integers: ";   // Statement to enter three different integer numbers
        cin>>a>>b>>c;                               // Assigning variables inputted values

        if (a == b || a == c || b == c)             // If statemtent to check if the values entered are equal
        {
            cout<<"Type different numbers."<<endl;  // Tells the user to type different numbers
            continue;                               // Continue to the start of the while loop
        }

        sum = a+b+c;                                // calculation for summation
        cout<<"Sum is "<<sum<<endl;                 // Printing summation
        average = sum/3;                            // calculation for average
        cout<<"Average is "<<average<<endl;         // printing average
        product = a*b*c;                            // calculation for product
        cout<<"Product is "<<product<<endl;         // printing product


        if (a < b)                                  // check if a is less than b
        {
            if (a < c)                              // check if a is also less than c
            {
                smallest = a;                       // assign smallest he value of a
            }
            else if (c < a)                         // check is c is also less than a
            {
                smallest = c;                       // Assign smallest the value of c
            }
        }

        else if (b < c)                             // check if b is less than c
        {
            smallest = b;                           // Assign smallest the value of b
        }
        else                                        // If none works then run else statement
        {
            smallest = c;                           // Assign smallest the value of c as if none else is true than c is the smallest
        }
    
        cout<<"Smallest is "<<smallest<<endl;       // Print the smallest number

        if (a > b)                                  // check if a > b
        {
            if (a > c)                              // check if a is also greater than c
            {
                largest = a;                        // Assign largest the value of a
            }
            else if (c > a)                         // check if c is grater than a 
            {
                largest = c;                        // assign largest the value of c as if a is greater than b and c is greater than a then c is greater than both the numbers
            }
        }
        else if (b > c)                             // check if b is greater than c
        {
            largest = b;                            // assign largest the value of b
        }
        else                                        // Else statement if all else is false
        {
            largest = c;                            // Assign largest the value of c as it the only logical solution lest
        }

        cout<<"Largest is "<<largest<<endl;         // print the largest value
        break;                                      // Break out of the while loop
    }
    return 0;                                       // returns the main function 0 exit code so all is well
}