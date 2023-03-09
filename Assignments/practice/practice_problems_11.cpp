#include<iostream>
using namespace std;

float matrix[4][4], sum{0}, a{0};
int main(int argc, char const *argv[])
{

    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            cout<<"Type a number";
            cin>>a;
            matrix[j][k] = a;
        }
        
    }
    

    for (int i = 0; i < 4; i++)
    {
        sum = sum + matrix[i][i];
    }
    cout<<sum;
    return 0;
}
