#include<iostream>
using namespace std;


// Triplet Sum in Array
bool find3Numbers(int arr[], int n, int x)
{
    // Sort the Array
    for(int i=n-2; i>=0; i--)
    {
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    } // Bubble Sort
    
    // Find 3 Number
    for(int i=0; i<n-2; i++)
    {
        int ans = x-arr[i];
        int start= i+1, end = n-1;
        while(start<end)
        {
            if(arr[start]+arr[end]==ans)
            return 1;
            else if(arr[start]+arr[end]>ans)
            end--;
            else
            start++;
        }
    }

    return 0;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the element Array: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int x;
    cout<<"Get a Number: ";
    cin>>x;

    cout<<find3Numbers(arr,n,x)<<endl;
    return 0;
}