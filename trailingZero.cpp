#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter number: ";
    cin>>N;

    int count = 0;

    while(N>=5)
    {
        count+= N/5;
        N/=5;
    }

    return count;
    
}
