#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void trensep(int arr[][4], int row, int col, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        swap(arr[i][j],arr[j][i]);
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    trensep(arr,4,4,n);
}