#include<iostream>
using namespace std;


// KOKO Eating Bananas
int findKthPositive(int arr[], int n, int h)
{

    int start=0, end=0, mid, ans;

    for(int i=0; i<n; i++)
    {
        start+=arr[i];
        end = max(end,arr[i]);
    }
    start/=h;

    while(start<=end)
    {
        mid = (start+end) / 2;

        int total_time = 0;
        for(int i=0; i<n; i++)
        {
            total_time+=arr[i]/mid;
            if(arr[i]%mid)
            total_time++;
        }

        if(total_time>h)
        {
            start=mid+1;
        }
        else
        {
            ans = mid;
            end = mid-1;
        }
    }
    
    cout<<"Minimum Eating Bananas: ";
    return ans;
   
    

}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of Piles: ";
    cin>>n;
    cout<<"Enter the Piles Bananas: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int h;
    cout<<"Finish Hours: ";
    cin>>h;

    cout<<findKthPositive(arr,n,h)<<endl;
    return 0;
}