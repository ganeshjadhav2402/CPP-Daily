#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"Enter the input: ";
    cin>>n;

    for(row=n; row>=1; row=row-1)
    {
        // space print
        for(col=1; col<=n-row; col=col+1)
        cout<<"  ";

        // star print
        for(col=1; col<=2*row-1; col=col+1)
        cout<<"* ";

        cout<<endl;
    }
}