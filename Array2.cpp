#include<iostream>
using namespace std;

int main()
{
    // Search Element
    int arr[5] = {2,5,6,1,3}, index, X;
    cout<<"Enter Number: ";
    cin>>X;

    for(int i=0; i<5; i++)
    {
        if(arr[i]==X)
        {
            index = i;
            break;
        }
    }

    cout<<index;
}