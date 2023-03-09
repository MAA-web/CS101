#include<iostream>                                                              // Header file is used to take input with cin and give output with cout
using namespace std;                                                            // It gives you names for objects and variables from the standard library

int a{0};                                                                       // initialising integer a to 0
long double b{0};                                                               // initialising long double b to 0

int absolute(int a);                                                            // prototyping absolute funcion with return type int
long double absolute(long double b);                                            // prototyping absolute function with return type lond double b

int main()                                                                      // main unction where the whole code is to be written
{                                                                               // start bracket
    cout<<"Type -ve integer: ";                                                 // statement for -ve integer
    cin>>a;                                                                     // assigning "a" a negative value
    cout<<"Type -ve floating number: ";                                         // statement for -ve floating number
    cin>>b;                                                                     // assigning "b" a negative foat value
    while (true)                                                                // while loop
    {                                                                           // start bracket
    if(a >= 0 || b >= 0)continue;                                               // if a or b is not zero the ask for -ve number
    cout<<"The absolute value of integer "<<a<<" is "<<absolute(a)<<endl;       // result for integer
    cout<<"The absolute value of floating number "<<b<<" is "<<absolute(b)<<endl;// result for floating number
    break;                                                                      // otherwise break
    }                                                                           // end bracket
}                                                                               // end bracket

int absolute(int x)                                                             // code for integer absolute function
{                                                                               // start bracket
    return -1 * x;                                                              // return negative number multiplied by -1 i.e +ve
}                                                                               // end bracket

long double absolute(long double y)                                             // code for double absolute function
{                                                                               // start bracket
    return -1 * y;                                                              // return negative number multiplied by -1 i.e +ve
}                                                                               // end bracket