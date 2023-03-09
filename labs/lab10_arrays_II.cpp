#include <iostream>                                         //Header file to give output with cout and take input with cin
using namespace std;                                        //std library gives names for objects and variables
float a[10],c{0},b[10][3];                                  //initialising floating type variables
int main(int argc, char const *argv[])                      //main function where the whole code is to be written
{                                                           //start bracket
    for(int i = 0; i<10;i++){                               //for loop to give the array values
        cout<<"Enter the number into "<<i+1<<"'th place: "; //prompt
        cin>>a[i];                                          //assigning values to the array elements
    }
    for(int l = 0; l<10;l++)                                //giving checking array values = 0
    {
        b[l][0]=0;                                          //index 0
        b[l][1]=0;                                          //index 1
        b[l][2]=0;                                          //index 2
    }
    for (int j = 0; j < 10; j++)                            //for loop to iterate over all and check values
    {
        c = 0;                                              //make c 0
        for (int k = 0; k < 10; k++)                        //for loop to iterate over all and check values
        {
            if (a[j] == a[k])                               //if the first number is equal to the second
            {
                c++;                                        //incriment
                b[j][0]=a[j];                               //give first index number
                b[j][1]=c;                                  //second index frequency
                b[j][2]=1;                                  //third index value other than
            }
        }
    }
    //cout<<c;
    for (int m = 0; m < 10; m++)                            //for loop to iterate over all the numbers
    {
        if (b[m][2]!=0)cout<<b[m][0]<<" comes "<<b[m][1]<<" times"<<", the sum is "<<b[m][0]*b[m][1]<<endl;     //print answer
        
    }
    return 0;                                               //return zero to tell the compiler everything is ok
    }