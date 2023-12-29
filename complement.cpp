#include<iostream>
using namespace std;

int main()
{
    // Pelindrome Number
    int n;
    cout<<"Enter the input: ";
    cin>>n;

    int ans = 0, mul=1, rem;
    while(n)
    {
        
        rem = n%2;
        rem = rem^1;
        n/=2;
        ans  = ans + rem * mul;
        mul*=2;
    }

    cout<<ans<<endl;
    
}