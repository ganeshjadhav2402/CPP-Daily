#include<iostream>
using namespace std;


// Painter Partition Walls
int findKthPositive(int arr[], int n, int k)
{
    // if(k>n)
    // return -1;

    int start=0, end=0, mid, ans;
    for(int i=0; i<n; i++)
    {
        start = max(start,arr[i]);
        end+=arr[i];
    }    

    while(start<=end)
    {
        mid = (start+end) / 2;

        int pages=0, count=1;
        for(int i=0; i<n; i++)
        {
            pages+=arr[i];
            if(pages>mid)
            {
                count++;
                pages=arr[i];
            }
        }

        if(count<=k)
        {
            ans= mid;
            end= mid-1;
        }
        else
        start = mid+1;
    }

    cout<<"Painting Time is: ";
    return ans;

}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of Walls: ";
    cin>>n;
    cout<<"Enter the Painting Walls: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int k;
    cout<<"Painter number: ";
    cin>>k;

    cout<<findKthPositive(arr,n,k)<<endl;
    return 0;
}