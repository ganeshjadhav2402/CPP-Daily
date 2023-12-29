#include<iostream>
using namespace std;


void print(int n)
{
    if(n==0)
    {
        cout<<"Chamak Gya Bhai.";
        return;
    }

    cout<<"Coder Army Recursion"<<endl;
    print(n-1);
}

int main()
{
    int n = 1;
    // for(int i=n; i<0; i--)
    // {
    //     cout<<"Coder Army\n";
    // }
    // cout<<"Chamak Gya Sabkuchh.";

    print(1);
}