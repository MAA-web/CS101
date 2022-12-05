#include <iostream>                         //
#include <string.h>
using namespace std;

struct Information {
    string name = "john doe";
    string age = "10";
    string salary = "1000";
};

int main(int argc, char const *argv[])
{
    Information person1,person2,person3;

    cout<<"Name of the first person: ";
    getline(cin, person1.name);
    cout<<"Age of the first person: ";
    cin>>person1.age;
    cout<<"Salary of the first person: ";
    cin>>person1.salary;
    cout<<""<<endl;
    cout<<"Name of the second person: ";
    cin>>person2.name;
    cout<<"Age of the second person: ";
    cin>>person2.age;
    cout<<"Salary of the second person: ";
    cin>>person2.salary;
    cout<<""<<endl;
    cout<<"Name of the third person: ";
    cin>>person3.name;
    cout<<"Age of the third person: ";
    cin>>person3.age;
    cout<<"Salary of the third person: ";
    cin>>person3.salary;
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"Name of the first person is "<<person1.name<<" their age is "<<person1.age<<" and they earn "<<person1.salary<<endl;
    cout<<"Name of the second person is "<<person2.name<<" their age is "<<person2.age<<" and they earn "<<person2.salary<<endl;
    cout<<"Name of the third person is "<<person3.name<<" their age is "<<person3.age<<" and they earn "<<person3.salary<<endl;
    return 0;
}
