#include<iostream>
using namespace std;

// Find Minimum in Rotated Sorted
int BinarySearch(int arr[], int n)
{
    int start = 0, end = n-1, ans = n;

    while(start<=end)
    {
        int mid = (start+end)/2;

        // Left side Sorted array
        if(arr[mid]>=arr[0])
        start = mid+1;
        // Right side Sorted array
        else
        {
            ans = arr[mid];
            end = mid-1;
        }
    }

    cout<<"Minimum sort number is: ";
    return ans;
    
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number element array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<BinarySearch(arr,n)<<endl;
    return 0;
}