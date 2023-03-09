#include<iostream>
using namespace std;

string str;
char a, b, c;
int j{0}, k{0};
int main()
{
    cout<<"Type three digits: ";
    getline(cin, str);
    for (int i = 0;str[i]!='\0'; i++)
    {
        a = str[i];
        for (int j = 0; str[j]!='\0'; j++)
        {
            b = str[j];
            for (int k = 0; str[k]!='\0'; k++)
            {
                c = str[k];
                if (a == b || b == c || c == a)
                {
                    /* code */
                }
                else
                {
                    cout<<a<<b<<c<<endl;
                }
                
                //i--;
            }
            //i--;
            //cout<<str[j];
        }
        //cout<<str[i];
        
    }
    

        //cout<<endl;
    
    
}