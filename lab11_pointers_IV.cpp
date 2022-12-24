#include<iostream>                                              //Header file to take input with cin and give output with cout
using namespace std;                                            //using namespace to get names of functions and objects
int count{0};                                                   //initialising count to 0
int main(int argc, char const *argv[])                          //main function where the whole code is written
{
    char a = 'e';                                               //initialising character to e
    cout<<"Enter a character to check for: ";                   //prompt to enter the character from user
    cin>>a;                                                     //assigning value
    char *b = &a;                                               //giving character pointer a reference value
    char stra[] = {"welcome to giki"};                          //initialising a characters array
    for (int i = 0; stra[i] != '\0' ; i++)                      //for loop from start to when the stra[i] equals null characte / null byte
    {
        if(*b == stra[i]){                                      //check if the entered character exists
        count++;                                                //incrimenting how many times a character exists
        }
    }
    if (count > 0)                                              //if count is greater than 0 then print found
    {
        cout<<"Character "<<*b<<" found in string : "<<stra<<", "<<count<<" times"<<endl;//printing the character and the number of times it is found
    }
    else                                                        //else to catch if not found
    {
        cout<<"character "<<*b<<" NOT FOUND"<<endl;             //printnig if not found
    }
    return 0;                                                   //returning 0 to tell compiler everything is ok
}