#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findTwoElement(vector<int>& arr, int n)
{
    
    // Decreas value
    for(int i=0;i<n;i++)
    arr[i]--;

    // occurance
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]+=n;
    }

   vector<int>ans(2);

    for(int i=0;i<n;i++)
    {
        if(arr[i]/n==2)
        ans[0]=i+1;
        else if(arr[i]/n==0) // missing number
        ans[1]=i+1;
    }

    
    return ans;
}

int main()
{   
    // Find these two numbers Reapeted and Missing
    
    int n;
    cout<<"Enter the size of Arrray: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Element in Array: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    findTwoElement(arr,n);
}