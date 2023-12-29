#include<iostream>
using namespace std;

int main()
{
    // Second Largest Element
    int arr[6] = {1,2,4,5,8,6}, n;

    int ans = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }

    int second = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=ans)
        second = max(second,arr[i]);
    }   
   
    cout<<second<<" ";
}