#include<iostream>              // Header file is used to take input with cin and give output with cout
using namespace std;            // It gives you names for objects and variables from the standard library

int main()                      // main function in which everything should be written
{                               // start bracket
    /* initialise variables to zero*/
    float height, base, area = 0;           

    cout<<"type the height: ";  // displays statement for typing in height
    cin>>height;                // inputs height

    cout<<"type the base: ";    // displays statement for typing in base
    cin>>base;                  // inputs base

    area = (height * base)/2;   // does the calculation for the area of the triangle
    cout<<"The area of the triangle is "<<area;     // prints out the are of the triangle

    return 0;                   // return main function
}                               // end bracket