#include<iostream>                          //Header file to take input with cin and give output with cout
#include<iomanip>                           //including input output manipulation file
using namespace std;                        //using namespace to get names of functions and objects
#define count 5                             //pre processing code
int a[count];                               //initialising an array of integeers
int main(int argc, char const *argv[])
{
    for (int i = 0; i < count; i++)         //for loop to add values in the array
    {
        cout<<"Type the "<<i+1<<" value: "; //prompt
        cin>>a[i];                          //assigning values
    }
    cout<<endl;                             //new line
    cout<<"Adress"<<setw(15)<<"Value"<<endl;//Aesthetics
    for (int j = 0; j < count; j++)         //for loop to print value and adress
    {
        cout<<(a + j)<<setw(5)<<*(a + j)<<endl;//printing
    }
    
    
    return 0;                               //returning 0 so everything ok
}
