#include<iostream>
using namespace std;

int main()
{
    int row, col;
    int n;
    cout<<"Input the character: ";
    cin>>n;

    for(row=1; row<=n; row=row+1)
    {
        // Space print
        for(col=1; col<=n-row; col=col+1)
        cout<<"  ";

        // Char print
        for(char name='A'; name<='A'+row-1; name=name+1)
        {
            cout<<name<<" ";
        }

        cout<<endl;
    }
}