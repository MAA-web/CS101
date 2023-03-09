#include <iostream>                             //Header file to take input with cin and give output with cout
#include <string.h>                             //including the strings library to use strings
using namespace std;                            //names of objects and varaibles from the standard library

struct Information {                            //structure of information about people
    string name = "john doe";                   //defining the name and giving default value
    string age = "10";                          //defining the age
    string salary = "1000";                     //defining the salary
};

int main(int argc, char const *argv[])          //the main function where the code is to be written for execution
{
    Information person1,person2,person3;        //Initialising the objects of the stucture

    cout<<"Name of the first person: ";         //ask for name of first person
    getline(cin, person1.name);
    cout<<"Age of the first person: ";          //ask for age of first person
    cin>>person1.age;
    cout<<"Salary of the first person: ";       //ask for the salary of first person
    cin>>person1.salary;
    cout<<""<<endl;
    cout<<"Name of the second person: ";        //ask for name of second person
    cin>>person2.name;
    cout<<"Age of the second person: ";         //ask for age of second person
    cin>>person2.age;
    cout<<"Salary of the second person: ";      //ask for the salary of second person
    cin>>person2.salary;
    cout<<""<<endl;
    cout<<"Name of the third person: ";         //ask for name of third person
    cin>>person3.name;
    cout<<"Age of the third person: ";          //ask for age of third person
    cin>>person3.age;
    cout<<"Salary of the third person: ";       //ask for the salary of third person
    cin>>person3.salary;
    cout<<"--------------------------------------------------------------"<<endl;//AESTHETICS
    /*printing the names ages and salaries of all the people*/
    cout<<"Name of the first person is "<<person1.name<<" their age is "<<person1.age<<" and they earn "<<person1.salary<<endl;
    cout<<"Name of the second person is "<<person2.name<<" their age is "<<person2.age<<" and they earn "<<person2.salary<<endl;
    cout<<"Name of the third person is "<<person3.name<<" their age is "<<person3.age<<" and they earn "<<person3.salary<<endl;
    return 0;                                   //returning zero to tell the compiler everything is OK
}                                               //end bracket