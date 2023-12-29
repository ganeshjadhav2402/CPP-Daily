#include<iostream>
using namespace std;

int main()
{
    // Febonaci Searies
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int arr[1000];
    // frist = 0;
    // second = 1;

    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<=n-1; i++)
    arr[i] = arr[i-1]+arr[i-2];

    cout<<"Fenonaci Number: "<<arr[n-1]<<" ";
}