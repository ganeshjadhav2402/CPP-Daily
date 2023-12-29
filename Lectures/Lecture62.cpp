#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;

    // print array addreses
    // cout<<ptr<<endl;
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;

    // print the value of array
    // cout<<arr[0]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*ptr<<endl;

    // print all address
    // for(int i=0; i<5; i++)
    // cout<<arr+i<<endl;

    // print all value
    // for(int i=0; i<5; i++)
    // cout<<*(arr+i)<<" "<<endl;

    // print value using pointer
    // for(int i=0; i<5; i++)
    // cout<<ptr[i]<<" ";
    // cout<<endl;
    // // print address using poointer
    // for(int i=0; i<5; i++)
    // cout<<ptr + i<<endl;

    // print using arithmetic operator
    // for(int i=0; i<5; i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }

    // Adition
    ptr = ptr + 2;
    cout<<*ptr<<endl;
    ptr = ptr - 1;
    cout<<*ptr;
}
