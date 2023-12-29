#include<iostream>
#include<climits>
using namespace std;


// Trapping Rain Water
int BinarySearch(int arr[], int n)
{
    int leftmax=0, rightmax=0, maxheight=arr[0], index=0, water=0;

    // Max Height Building
    for(int i=1; i<n; i++)
    {
        if(maxheight<arr[i])
        {
            maxheight=arr[i];
            index=i;
        }
    }

    // Left Part
    for(int i=0; i<index; i++)
    {
        if(leftmax>arr[i])
        water+=leftmax-arr[i];
        else
        leftmax = arr[i];
    }

    // Right Part
    for(int i=n-1; i>index; i--)
    {
        if(rightmax>arr[i])
        water+=rightmax-arr[i];
        else
        rightmax = arr[i];
    }

    cout<<"Total Unit Store of Water: ";
    return water;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of Building: ";
    cin>>n;
    cout<<"Enter the Building Height: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<BinarySearch(arr,n)<<endl;
    return 0;
}