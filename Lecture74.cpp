#include<iostream>
using namespace std;

int fact(int n)
{
    //base case
    if(n == 1)
    return 1;

    return n * fact(n-1);
}

int sum(int n) 
{
    //base case
    if(n==1)
    return 1;

    return n + sum(n-1);
}

int pow(int num, int n)
{
    //base case
    if(n==1)
    return num;

    return num * pow(num, n-1);
}

int sqSum(int n)
{
    if(n==1)
    return 1;

    return n * n + sqSum(n-1);
}

int main() 
{
    int n;
    cout<<"Enter any Number: ";
    cin>>n;

    // cout<<"Factorial number of "<<n<<": ";
    // cout<<fact(n);

    //Sum of N numbers
    // cout<<"Sum of "<<n<<" numer: ";
    // cout<<sum(n)<<endl;

    int num;
    cout<<"Enter Power: ";
    cin>>num;
    //Power of 2, N number
    cout<<"Power of "<<num<<" for "<<n<<" times: ";
    cout<<pow(num,n);

    //Sum of Squre of N numbers
    // cout<<"Sum of Squre of first"<<n<<" natural number: ";
    // cout<<sqSum(n);
}