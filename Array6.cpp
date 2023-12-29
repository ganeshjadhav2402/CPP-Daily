#include<iostream>
using namespace std;

void fun(int a[], int n)
{
    cout<<sizeof(a)<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}

int main()
{
    // Rotate Array
    // int arr[6] = {2,7,4,11,5,8}, n;
    
    // int temp = arr[n-1];
    
    // for(int i=n-2; i>=0; i--)
    // {
    //     arr[i+1] = arr[i];
    //     arr[0] = temp;
    // }

    // Function with Array
    int arr[5] = {3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
}