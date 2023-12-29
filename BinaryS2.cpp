#include<iostream>
using namespace std;


// Search Insert  Position
int BinarySearch(int arr[], int n, int target)
{
    // start, end, mid;
    int start = 0, end = n-1, ans = n, mid;
    

    while(start<=end)
    {
        // Mid ko find karo
        mid = (start + end) / 2;
        // arr[mid]==target
        if(arr[mid]==target)
        {
           ans = mid;
           break;
        }
        // arr[mid]<target
        else if(arr[mid]<target)
        start = mid + 1;
        // arr[mid]>target
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

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