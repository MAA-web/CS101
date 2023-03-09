#include<iostream>
using namespace std;
int a = 9;
int result = 0;
int b = 0;
int c = 1;
int d = 0;
int main(){
    cout<<"Type the number: ";
    cin>>a;
    a -= 2;
    cout<<result<<endl;
    cout<<c<<endl;
    do {
      result = c + d;
      d = c;
      c = result;
      cout<<result<<endl;
      b++;
    }
    while (b < a);

    return 0;
}

//0,1,1,2,3,5,8,13,21
//<3 from Tori Magmour
