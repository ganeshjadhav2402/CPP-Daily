#include<iostream>
#include<climits>
using namespace std;


// Kadane's Algorithm
int BinarySearch(int arr[], int n)
{
    int prefix = 0;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++)
    {
        prefix+=arr[i];
        maxi = max(prefix,maxi);
        if(prefix<0)
        prefix = 0;
    }
    
    cout<<"Larget Sum of Subarray: ";
    return maxi;
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