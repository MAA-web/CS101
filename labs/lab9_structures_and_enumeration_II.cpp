#include <iostream>                                                 //Header file to take input with cin and give output with cout
#include <string.h>                                                 //including strings library to use libraries
using namespace std;                                                //Gives the names of the objects and variables from standard library
struct books {                                                      //Making a structure of books
    string BookID = "ISBN";                                         //Defining the BookID as string and giving a default value
    float price = 100;                                              //Defining the price as a float and giving it a default value
    string pages = "200";                                           //Defining the pages as string and giving it a value
};                                                                  //end bracket

int a{2};                                                           //initialising a variable that represents the total number of books
float result;                                                       //initialising a float variable the will store the highest price yet
int r;                                                              //initialising variable which store the current index of the most costly book
int main()                                                          //Main function where the code is to be written to be executed
{
    cout<<"Number of books you want to enter: ";                    //prompt for number of books to be added
    cin>>a;                                                         //assigning the variable the number of books we want to have
    books dob[a];
    for(int i = 0 ; i < a ; i++){                                   //for loop to iterate over all the elements of the structure and assigning them values
        cout<<"Enter the ISBN BookID of book "<<i+1<<": ";          //assigning value for BookID
	    cin>>dob[i].BookID;
	    cout<<"Enter the price of book "<<i+1<<": ";                //assigning value for price
	    cin>>dob[i].price;
	    cout<<"Enter the pages of book "<<i+1<<": ";                //assigning value for pages
	    cin>>dob[i].pages;
	    cout<<endl;                                                 //printing a new line
    }
    for (int j = 0; j < a; j++)                                     //for loop to iterate over the prices of all the books to find the most costly
    {
        if (j == 0){result = dob[j].price;r=j;}                     //giving control variables value
        if (dob[j].price > result){result = dob[j].price;r=j;}      //giving highest price value to the result and storing the index of the book in the index variable
    }
    cout<<"-----------------------------------------------------------"<<endl; //ASTHETICS
    cout<<"The most costly book is "<<"BookID: "<<dob[r].BookID<<" pages: "<<dob[r].pages<<" price: "<<dob[r].price<<endl;//printing result of the program
    
    return 0;                                                       //returning the main fuction zero to tell everythig is ok
}                                                                   //end bracket