#include<iostream>
using namespace std;

int main()
{
    // Decresing Order
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n-1; i++)
    {
        int index = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }

        swap(arr[index],arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}