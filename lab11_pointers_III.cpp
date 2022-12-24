#include<iostream>                                  //Header file to take input with cin and give output with cout
#include<iomanip>                                   //including input output manipulation file
using namespace std;                                //using namespace to get names of functions and objects
int count = 5;                                      //initialising int count

int main(int argc, char const *argv[])              //function wherer the main code is written
{
    float a[count];                                 //floating values array
    for (int i = 0; i < count; i++)                 //for loop to take in inputs
    {
        cout<<"Type the "<<i+1<<" value: ";
        cin>>a[i];                                  //assigning values
    }
    cout<<endl;                                     //newline
    float*p = a;                                    //initialising floating pointer
    p = p + (count - 1);                            //adding adresses to pointers
    //cout<<*p;
    cout<<"Adress"<<setw(15)<<"Value"<<endl;        //Aesthetics
    for (int j = 0; j < count; j++)                 //for loop to print values and adresse in reverse
    {
        cout<<(p - j)<<setw(5)<<*(p - j)<<endl;     //printing 
    }
    
    
    return 0;                                       //returning 0 to tell compiler that everything is ok
}