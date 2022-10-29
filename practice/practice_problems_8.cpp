#include<iostream>
#include<math.h>
using namespace std;

long int num{0}, power{0}, sum{0};
int main()
{
    cout<<"type a number and the power you want its sum to be with: ";
    cin >> num >> power;
    long int array[num];
    for (int i = 1, j = 0; i <= num, j < 50; i++, j++) {
      array[j]=i;
    }
    for (int k = 0; k < num; k++) {
      //cout << array[k] << '\n';
      sum = sum + (pow(array[k], power));
      //cout<<"Sum of the series of a number and its cubes is: "<<sum<<endl;
    }
    cout<<"Sum of the series of a number and its power is: "<<sum<<endl;
    return 0;
}
