#include<iostream>
using namespace std;


// Segregate 0 and  1
int BinarySearch(int arr[], int n)
{

    int start = 0, end = n-1, ans;

    while(start<end)
    {
        if(arr[start]==0)
        start++;
        else
        {
            if(arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++, end--;
            }
            else
            end--;
        }
    }
    
    return 0;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of Array: ";
    cin>>n;
    cout<<"Enter the Array: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<BinarySearch(arr,n)<<endl;
    return 0;
}