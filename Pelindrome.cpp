#include<iostream>
using namespace std;

int main()
{
    // Pelindrome Number
    int x;
    cout<<"Enter the input: ";
    cin>>x;

    int num = x, rem, ans = 0;

    while(num)
    {
        rem = num%10;
        num/=10;
        ans = ans * 10 + rem;
    }

    if(ans==x)
    cout<<"Pelidrom";
    else
    cout<<"Not Pelindrome";
}