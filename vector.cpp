#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // create vector, declare
    // vector<int>v;
    // size and capacity
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // v.push_back(24);
    // v.push_back(42);
    // v.pop_back(); // Delete the element
    // v.erase(v.begin()+2); // Erase the element
    // v.insert(v.begin()+2,9); // Insert the element
    // v[2]=10;   // Update the element
    // v.clear();
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;

    // for(int i=0; i<v.size(); i++) // Print array element
    //     cout<<v[i]<<" ";
    
    
    // vector<int>arr;
    // arr.push_back(23);
    // arr.push_back(21);
    // arr.push_back(24);
    // arr.push_back(22);
    // cout<<arr[2]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // // Copy value of 1 vector to another
    // vector<int>a;
    // a = arr;
    // cout<<a.size()<<endl;
    // for(auto it = arr.begin();it!=arr.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto a: arr)
    // cout<<a<<" ";
    
    
    vector<int>ans;
    ans.push_back(1);
    ans.push_back(42);
    ans.push_back(124);
    ans.push_back(99);
    ans.push_back(24);

    // sort in incresing  order
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    // sort in decresing  order
    sort(ans.rbegin(),ans.rend());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";

    // search with binary search
    cout<<binary_search(ans.begin(),ans.end(),124)<<endl;

    // find index of element using itriter
    cout<<find(ans.begin(),ans.end(),99)-ans.begin()<<endl;

}