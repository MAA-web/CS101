#include<iostream>                          //Header file to take input with cin and give output with cout
using namespace std;                        //using namespace to get names of functions and objects

int main(int argc, char const *argv[])      //function where the main code is to be executed
{
    int a = 0;                              //initialising integer
    cout<<"type an integer: ";              
    cin>>a;                                 //assigning a value
    int *p = &a;
    cout<<"Adress: "<<p<<" Value: "<<*p<<endl;//printing adress and value of variable
    return 0;                               //return 0 so everything is ok
}
