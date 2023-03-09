#include <iostream>
using namespace std;
static int count = 15;
float a[15],r{0};
int main(int argc, char const *argv[])
{
    for (int i = 0; i < count; i++)
    {
        cout<<"Add the age of person "<<i+1<<": ";
        cin>>a[i];
    }
    //r = a[0];
    for (int j = 0; j < count; j++)
    {
        if (a[j]>=50 && a[j]<=60)
        {
            r++;
        }
        
    }
    cout<<"people in age group 50 to 60: "<<r<<endl;

    return 0;
}
