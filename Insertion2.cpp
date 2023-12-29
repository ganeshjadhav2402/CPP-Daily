#include<iostream>
using namespace std;

int main()
{
    // Insertion in Decresing order
    int arr[1000];
    int n;
    cout<<"Entter the size of array: ";
    cin>>n;
    cout<<"Enter the array element: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int i, j, key;
    for(i=1; i<n; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] < key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}