#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Search Rotated Sort Array
int BinarySearch(int arr[], int n, int target)
{
    vector<int>ans;
    int start = 0, end = n-1;
    
    while(start<end)
    {
                    
        if(arr[start]+arr[end]==target)
        {
            ans.push_back(start+1);
            ans.push_back(end+1);
            return ans;
        
        }
        else if(arr[start]+arr[end]<target)
        start++;
        else
        end--;
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