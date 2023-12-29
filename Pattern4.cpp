#include<iostream>
using namespace std;

int main()
{

    //Print Pattern "Number Column:1 2 3 4 5"
    int row, col;

    for(row=1; row<=5; row=row+1)
    {
        for (col=1; col<=5; col=col+1)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }
} 