#include <iostream>
using namespace std;

float account{0}, balance{0}, credit_limit{0}, credits{0}, charges{0}, sum{0};
int main(int argc, char const *argv[])
{
    while (true)
    {
    cout<<"Enter account number (-1 to end): ";
    cin>>account;
    if (account == -1)
    {
        break;
    }
    
    cout<<"Enter beginning balance: ";
    cin>>balance;
    cout<<"Enter total charges: ";
    cin>>charges;
    cout<<"Enter total credits: ";
    cin>>credits;
    cout<<"Enter credit limit: ";
    cin>>credit_limit;

    
    sum = balance -  credits + charges;
    cout<<"New balance is "<<sum<<endl;
    if (sum > credit_limit)
    {
        cout<<"Account: "<<account<<endl;
        cout<<"Credit limit: "<<credit_limit<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
    }
    }
    return 0;
}
