#include<iostream>
using namespace std;

int main()
{
    // Reverse Element
    int arr[6] = {1,2,4,5,8,6};

    int start=0, end=5;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";
    
}