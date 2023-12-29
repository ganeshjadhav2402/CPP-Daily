#include<iostream>
using namespace std;

int main()
{
    //Sum of n Number
    int n, i, sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1; i<=n; i=i+1)
    {
      sum = sum+i;  
    }

    cout<<sum;
    
    // cout<<(n*(n+1))/2;
}
