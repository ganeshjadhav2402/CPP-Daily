#include<iostream>
using namespace std;

int main()
{
    // IP Address Store in String
    string address;
    cout<<"IP Address: ";
    cin>>address;

    string ans;
    int index = 0;

    while(index<address.size())
    {
        if(address[index]=='.')
        ans += "[.]";
        else
        ans += address[index];

        index++;
    }

    cout<<"output: ";
    cout<<ans;
    
}