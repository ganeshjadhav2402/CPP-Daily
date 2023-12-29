#include<iostream>
using namespace std;

int main()
{
    //Print Dimaond
    int row, col, n;
    cout<<"Enter the input: ";
    cin>>n;

    for(row=1; row<=n; row=row+1)
    {
        // * Print
        for(col=1; col<=row; col=col+1)
        cout<<"* ";

        // space Print
        for(col=1; col<=2*n-2*row; col=col+1)
        cout<<"  ";

        // * Print
        for(col=1; col<=row; col=col+1)
        cout<<"* "; 

        cout<<endl;
    }

    for(row=n-1; row>=1; row=row-1)
    {
        // * Print
        for(col=1; col<=row; col=col+1)
        cout<<"* ";

        // space Print
        for(col=1; col<=2*n-2*row; col=col+1)
        cout<<"  ";

        // * Print
        for(col=1; col<=row; col=col+1)
        cout<<"* "; 

        cout<<endl;
    }
}