#include<iostream>
using namespace std;

int main()
{
    // Insertion sort start from last element
    int arr[1000];
    int n;
    cout<<"Entter the size of array: ";
    cin>>n;
    cout<<"Enter the array element: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=n-1; i>=0; i--)
    {
        int key, j;
        key = arr[i];
        j = i+1;
        while(j<n && arr[j]<key)
        {
            arr[j-1] = arr[j];
            j++;
        }
        arr[j-1] = key;
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}