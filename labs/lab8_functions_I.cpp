#include<iostream>                                      // Header file is used to take input with cin and give output with cout
using namespace std;                                    // It gives you names for objects and variables from the standard library

int row{1},column{1}, a{0},result{0};                   // initialising variables
int _MAX(int b);                                        // prototyping function
int main(){                                             // main function where the code is to be written
    /*Statements and assigning the variables their values*/
    while(true)
    {
    cout<<"Type the number of rows: ";                  // assigning the 
    cin>>row;
    cout<<"Type the number of columns: ";
    cin>>column;
    if (row <= 0 || column <= 0){continue;}
    break;
    }
    int array[row][column];                             // initialising array
    for(int i = 0;i < row;i++)                          // looping through the whole array    
    {
        for(int j = 0; j < column; j++)
        {
            cout<<"Type the value for row "<<i+1<<" and column "<<j+1<<": ";// statement for the assigning values to the array elements
            cin>>a;
            array[i][j] = a;
        }
    }
    /*Looping through the whole array and passing individual values to the maximum function*/
    for(int k = 0;k < row;k++)
    {
        for(int l = 0; l < column; l++)
        {
            if (k == 0 && l == 0)
            {
                result = array[k][l];
            }
            
            _MAX(array[k][l]);
        }
    }
    cout<<"Max: "<<result<<endl;                // printing the Maximum value
}
int _MAX(int b)                                 // Function to find the maximum value
{
    if (result < b)
    {
        result = b;
    }
    return result;                              // returning the result
}