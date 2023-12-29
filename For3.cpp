#include<iostream>
using namespace std;

int main()
{
    //Reverse Order Number
    int n,i;
    cout<<"Enter the Number: ";
    cin>>n;

    for(i=n; i>=1; i=i-1)
    {
        cout<<i<<" ";
    }
}