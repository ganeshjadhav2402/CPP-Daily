#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    int ans = 0, rem;
     
    while(x!=0)
    {
        // Reminder
        rem = x % 10;
        // Divide with 10
        x/=10;
        // ans
        ans = ans * 10 + rem;
    }

    cout<<ans<<endl;

    // integer is overflow error solution
    // while(x!=0)
    // {
    //     rem = x % 10;
    //     x/=10;
    //     if(ans>INT_MAX/10 || ans<INT_MIN/10)
    //     return 0;
    //     ans = ans * 10 + rem;
    // }


} 