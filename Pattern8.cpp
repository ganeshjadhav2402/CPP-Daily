#include<iostream>
using namespace std;

int main()
{

    //Print Pattern "Alphabate Columns:a b c d e"
    int row, col;

    for(row=1; row<=5; row=row+1)
    {
        
        for (char col='a'; col<='e'; col=col+1)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }
} 