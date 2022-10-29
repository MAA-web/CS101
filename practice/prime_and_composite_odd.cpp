#include<iostream>
using namespace std;

int a{0}, b{0};
int main(int argc, char const *argv[])
{
    cout<<"type first number: ";
    cin>>a;
    cout<<"type second number: ";
    cin>>b;
    cout<<"§§§§§§§ Odds §§§§§§§"<<endl;
    for (int i = a;i <= b; i++)
    {
        if (i%2 != 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n§§§§§§§ Primes §§§§§§§"<<endl;
    for (int j = a; j <= b; j++)
    {
        /* code */
    
        if (j == 2)
        {
            cout<<j<<" ";
        }
        if (j%2 != 0 && j%3 != 0 && j%5 != 0 && j%7 != 0)
        {
            
            cout<<j<<" ";
        }
    }    
    cout<<endl;
    
    return 0;
}
