#include<iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout<<"Input the number: ";
    cin>>n;

    for(row=1; row<=n; row=row+1)
    {
        // space print
        for(col=1; col<=n-row; col=col+1)
        cout<<" ";

        // star print
        for(col=1; col<=row; col=col+1)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(row=n; row>=1; row=row-1)
    {
        // space print
        for(col=1; col<=n-row; col=col+1)
        cout<<" ";

        // star print
        for(col=1; col<=row; col=col+1)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}