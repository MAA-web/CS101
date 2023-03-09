#include<iostream>
using namespace std;

int b = 1;
int a = 9;
int counter = 0;

int main(){
    cout<<"Type a positive inetger: ";
    cin>>a;
    while (b < 1000000){
        if (a % b == 0)
	counter++;
	b++;
    }

    if (counter > 2)cout<<a<<" is not a prime number"<<endl;
    else cout<<a<<" is a prime number"<<endl;

    return 0;
}

//<3 from Tori Magmour
