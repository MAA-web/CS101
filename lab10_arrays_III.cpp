#include <iostream>
using namespace std;

float a[10][2],c{0},d{0};

int main(int argc, char const *argv[])
{
    for(int i=0;i<10;i++)
    {
        while (true)
        {
        cout<<"Type the regno of student "<<i+1<<": ";
        cin>>a[i][0];
        cout<<"Type the marks of student "<<i+1<<": ";
        cin>>a[i][1];
        if (a[i][1] > 1100 || a[i][1] < 0)
        {
            cout<<"enter marks between 0 and 1100"<<endl;
            continue;
        }
        else break;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if ((a[j][1]/1100.0) >= 0.45)
        {
            cout<<a[j][0]<<",  ";c++;
        }
        
    }
    cout<<"passed students count: "<<c<<endl;
    for (int k = 0; k < 10; k++)
    {
        if ((a[k][1]/1100.0) < 0.45)
        {
            cout<<a[k][0]<<", ";d++;
        }
    }
    cout<<"failed students count: "<<d<<endl;
    return 0;
}
