#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"Input the number: ";
    cin>>n;

    for(row=1; row<=n; row=row+1)
    {
        for(col=1; col<=1+row-1; col=col+1)
        {
          cout<<col<<" ";  
        }

        cout<<endl;
    }
}