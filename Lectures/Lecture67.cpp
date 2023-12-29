#include<iostream>
using namespace std;

int main()
{
    int * ptr = new int;
    * ptr = 5;
    cout<<*ptr<<endl;

    float * ptr2 = new float;
    * ptr2 = 5.7;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter n number: ";
    cin>>n;
    int * ptr3 = new int[n];

    // value dalo
    for(int i=0; i<n; i++)
    ptr3[i] = i+1;

    // print karo
    for(int i=0; i<n; i++)
    cout<<ptr3[i]<<endl;

    // delete keywords
    delete ptr;
    delete ptr2;
    delete ptr3;

}
