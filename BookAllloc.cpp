#include<iostream>
using namespace std;


// Allocate Minimum number of Pages
int findKthPositive(int arr[], int n, int m)
{
    if(m>n)
    return -1;

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

        if(count<=m)
        {
            ans= mid;
            end= mid-1;
        }
        else
        start = mid+1;
    }

    cout<<"Allocate is done: ";
    return ans;

}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;
    cout<<"Enter the books: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int m;
    cout<<"Enter the student number: ";
    cin>>m;

    cout<<findKthPositive(arr,n,m)<<endl;
    return 0;
}