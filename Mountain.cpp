#include<iostream>
using namespace std;


// Peak index in a Mountain Array
int BinarySearch(int arr[], int n)
{
    
    int start = 0, end = n-1, mid;
    

    while(start<=end)
    {
        
        mid = (start + end) / 2;
        // Peak element
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
        // Right side move
        else if(arr[mid]>arr[mid-1])
        start = mid + 1;
        // Left side move
        else
        end = mid - 1;  
    }

    return -1;
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