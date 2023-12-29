#include<iostream>
using namespace std;


// Sqrt(x)
int BinarySearch(int n)
{
    // start, end, mid;
    int ans, start = 1, end = n, mid;
    

    while(start<=end)
    {
        
        mid = (start + end) / 2;
        
        if(mid*mid==n)
        {
            ans = mid;
            break;
        }
        
        else if(mid*mid<n)
        {
            ans = mid;
            start = mid + 1;   
        }
        
        else
        end = mid - 1;
        
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

    cout<<BinarySearch(n)<<endl;
    return 0;
}