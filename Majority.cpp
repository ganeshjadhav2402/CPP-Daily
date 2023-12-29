#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int candidate, count=0, n = nums.size();

    for(int i=0; i<n; i++)
    {
        if(count==0)
        {
            count = 1;
            candidate = nums[i];
        }
        else 
        {
            if(candidate == nums[i])
            count++;
            else
            count--;
        }
    }

    return candidate;
}

int main()
{   
    // Given Array size of Majority Element.
    
    int n;
    cout<<"Enter the size of Arrray: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the element in Array: ";
    for(int i=0; i<n; i++)
    cin>>nums[i];

    cout<<majorityElement(nums);
}