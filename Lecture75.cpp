#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<=1)
    return n;

    return fib(n-1) + fib(n-2);
}

int climbStair(int n)
{
    if(n<=1)
    return 1;

    return climbStair(n-1) + climbStair(n-2);
}

int gcd(int a, int b)
{
    if(b==0)
    return a;

    return gcd(b, a%b);
}

int main()
{   
    // //Fibonacci Series using Recursion
    // int n;
    // cout<<"Enter number of term Fibonacci Series: ";
    // cin>>n;

    // cout<<"Fibonacci Series: ";
    // cout<<fib(n);

    //Nth Stair(Climbing Stairs) Problem
    // int n;
    // cout<<"Enter Nth Stair: ";
    // cin>>n;

    // cout<<"Number of way to climb "<<n<<"th stairs: ";
    // cout<<climbStair(n);

    //GCD(Greatest Common Divisore) of 2 Number
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"GCD of "<<num1<<" & "<<num2<<" is: ";
    cout<<gcd(num1, num2);

}