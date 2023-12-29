#include<iostream>
using namespace std;

int main()
{
    //Any Number of Table
    int n,i;
    cout<<"Enter the table: ";
    cin>>n;
    
    for(int i=1; i<=10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}