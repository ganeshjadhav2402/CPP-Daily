#include<iostream>
using namespace std;

int sumOfCube(int n)
{
    if(n==1)
    return 1;

    return n*n*n + sumOfCube(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;

    cout<<"Sum of cube of first "<<n<<" natural number: ";
    cout<<sumOfCube(n);
}