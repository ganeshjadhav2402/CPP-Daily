#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5] = {9,2,3,5,8};
    int ans = INT_MAX;

    // // Min Value
    // for(int i=0; i<5; i++)
    // {
    //     if(arr[i]<ans)
    //     ans =arr[i];
    // }
    // cout<<ans<<endl;

    // // Max Value
    ans = INT_MIN;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>ans)
        ans =arr[i];
    }
    cout<<ans<<endl;
    
    return 0;
}

