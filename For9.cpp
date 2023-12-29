#include<iostream>
using namespace std;

int main()
{
    //Prime Number
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;

    if(n<2)
    {
      cout<<"Not a Prime Number";
      return 0;
    }
    else
    {
        for(i=2; i<n; i=i+1)
        {
            if(n%i==0)
            {
             cout<<"Not a prime number";
             return 0;
            }
        }

        cout<<"Prime Number";
        return 0;
    }
}
