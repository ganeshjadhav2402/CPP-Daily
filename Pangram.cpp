#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // Check if the Sentence is Pangram
    string sentence;
    cout<<"Sentence: ";
    cin>>sentence;

    vector<bool>alpha(26,0);

    for(int i=0; i<sentence.size(); i++)
    {
        alpha[sentence[i]-'a']=1;
    }

    for(int i=0; i<26; i++)
    {
        if(alpha[i]==0)
        return 0;
    }

    cout<<"Output: ";
    return 1;
}