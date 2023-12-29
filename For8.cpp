#include<iostream>
using namespace std;

int main()
{
    //Factorial of Number
    int n, fact=1, i;
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1; i<=n; i=i+1)
    {
      fact = fact*i;  
    }

    cout<<fact;
}
