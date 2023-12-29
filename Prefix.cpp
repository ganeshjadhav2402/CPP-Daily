#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool devide(vector<int>v)
{
    int prefix=0, total_sum=0, n=v.size();

    //Total Sum

    for(int i=0; i<n; i++)
    total_sum+=v[i];

    for(int i=0; i<n; i++)
    {
        prefix+=v[i];
        if(total_sum==2*prefix)
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of Arrray: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element in Array: ";
    for(int i=0; i<n; i++)
    cin>>v[i];

    cout<<devide(v);
}