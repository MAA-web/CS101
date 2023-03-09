#include <iostream>                     //Header file to give output with cout and input with cin
using namespace std;                    //This gives the name of the common objects and variables

float a[10],ntf,c{0};                   //initialising variables
int main(int argc, char const *argv[])  //main function where the whole code is to be written
{
    for(int i = 0; i<10;i++)            //for loop to give the array values
    {
        cout<<"Enter the number into "<<i+1<<"'th place: ";//prompt
        cin>>a[i];                      //inout
    }                                   //end bracket
    cout<<"Enter the number to be found: ";//prompt the number to be found
    cin>>ntf;                           //assign the key value
    //cout<<"index number"<<endl;
    for (int j = 0; j < 10; j++)        //for loop to check the key against all numbers
    {
        if(a[j]==ntf){cout<<" index: "<<j<<"  number: ";cout<<a[j]<<",";c++;}//if key is in the array give index and number
    }                                   //end bracket
    if (c==0){cout<<"NOT FOUND";}       //if statement for NOT FOUND
    
    return 0;                           //return 0 to tell compiler everything is ok
}                                       //end bracket
