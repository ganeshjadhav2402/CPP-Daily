#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    cout<<"Input S: ";
    cin>>s;

    vector<int>lower(26,0);
    vector<int>upper(26,0);

    // frequnce updated
    for(int i=0; i<s.size(); i++) 
    {
        if(s[i]>='a')
        lower[s[i]-'a']++;
        else
        upper[s[i]-'A']++;
    }
    
    int count = 0;
    bool odd = 0;

    for(int i=0; i<26; i++)
    {
        // lower
        if(lower[i]%2==0)
        count+=lower[i];
        else
        {
            count+=lower[i]-1;
            odd = 1;
        }
    }

    return count+odd;
}