#include<iostream>
using namespace std;


// Find First and Last Position Sorted Array
int BinarySearch(int arr[], int n, int target)
{
    // start, end, mid;
    int start = 0, end = n-1, first=-1, last=-1, mid;

    // Find First
    while(start<=end)
    {
        // Mid ko find karo
        mid = (start + end) / 2;
        // arr[mid]==target
        if(arr[mid]==target)
        {
            first=mid;
            end=mid-1;
        }
        // arr[mid]<target
        else if(arr[mid]<target)
        start = mid + 1;
        // arr[mid]>key
        else
        end = mid - 1;
    }

    // Find Last
    start = 0, end = n-1;
    while(start<=end)
    {
        // Mid ko find karo
        mid = (start + end) / 2;
        // arr[mid]==target
        if(arr[mid]==target)
        {
            last=mid;
            start=mid+1;
        }
        // arr[mid]<target
        else if(arr[mid]<target)
        start = mid + 1;
        // arr[mid]>key
        else
        end = mid - 1;
    }

    return arr[];
}


int  main()
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