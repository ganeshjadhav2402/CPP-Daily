#include<iostream>
using namespace std;


// Search Rotated Sort Array
int BinarySearch(int arr[], int n, int target)
{
    int start = 0, end = n-1, ans = -1, mid;

    while(start<=end)
    {
        mid = (start + end) / 2;

        // I find my element
        if(arr[mid]==target)
        return mid;
        // Left side sorted
        else if(arr[mid]>=arr[0])
        {
            if(arr[start]<=target && arr[mid]>target)
            end = mid-1;
            else
            start = mid+1;
        }
        // Right side sorted
        else
        {
            if(arr[mid]<target && arr[end]>=target)
            start = mid+1;
            else
            end = mid-1;
        }
    }     

    cout<<"Search Sort number is: ";
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

    int target;
    cout<<"Enter the target: ";
    cin>>target;

    cout<<BinarySearch(arr,n,target)<<endl;
    return 0;
}