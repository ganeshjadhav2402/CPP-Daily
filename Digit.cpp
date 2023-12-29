#include<iostream>
using namespace std;

int main()
{
    //One Digit return it.
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    while(num>9)
    {
        int ans=0, rem;
        while(num!=0)
        {
            rem = num%10;
            num /= 10;
            ans += rem;
        }
        num = ans;
    }

    cout<<num<<endl;
}