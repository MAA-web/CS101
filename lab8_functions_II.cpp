#include<iostream>                                      // Header file is used to take input with cin and give output with cout
using namespace std;                                    // It gives you names for objects and variables from the standard library

int a{0},b{0};                                          // initialising the values to 0

int power(int x, int y);                                // function prototyping
int main()                                              // main function where the whole code is to be written
{                                                       // start bracket
    while(true)
    {cout<<"Type the first number: ";                   // staement for first number
    cin>>a;                                             // assigning first number value
    cout<<"Type the power: ";                           // statement for second number
    cin>>b;                                             // assigning second number value
    if (b < 0 || a == 0)continue;                       // if staement to check for -ve power or 0 number
    break;}                                             // break
    cout<<a<<" raised to the power of "<<b<<" is "<<power(a,b)<<endl;// printing out the result

}                                                       //end bracket

int power(int x, int y)                                 // Function code
{                                                       // start bracket
    if (y != 0)                                         // if statement to check if y is equal to zero if not then continue
    {                                                   // start bracket
        return(x*power(x,y-1));                         // return x multiplied by recursion
    }                                                   // end bracket
    else                                                // else
    {                                                   // start bracket
        return 1;                                       //return 1
    }                                                   // end bracket
}                                                       // end bracket