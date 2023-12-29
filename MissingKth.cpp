#include<iostream>
using namespace std;


// Search Kth Missing Number
int findKthPositive(int arr[], int n, int k)
{
    int start = 0, end = n-1, ans = n, mid;

    while(start<=end)
    {
        mid = (start + end) / 2;

        if(arr[mid]-mid-1>=k)
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }   
    }    

    cout<<"Missing Number is: ";
    return ans+k;  
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

    int k;
    cout<<"Enter the kth number: ";
    cin>>k;

    cout<<findKthPositive(arr,n,k)<<endl;
    return 0;
}