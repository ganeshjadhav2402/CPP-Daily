#include<iostream>
using namespace std;


// Stalls to Cows Minimum distance to Maximum Possible
int findKthPositive(int arr[], int n, int k)
{

    int start=1, end, mid, ans;
    
    end = arr[n-1]-arr[0];

    while(start<=end)
    {
        mid = (start+end) / 2;

        int count=1, pos=arr[0];
        for(int i=1; i<n; i++)
        {
            if(pos+mid<=arr[i])
            {
                count++;
                pos = arr[i];
            }
        }

        if(count<k)
        {
            end = mid-1;
        }
        else
        {
            ans = mid;
            start = mid+1;
        }
    }
    
    cout<<"Position of Stalls: ";
    return ans;

}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of Stalls: ";
    cin>>n;
    cout<<"Enter the Stalls Distance: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int k;
    cout<<"Aggressive Cows: ";
    cin>>k;

    cout<<findKthPositive(arr,n,k)<<endl;
    return 0;
}