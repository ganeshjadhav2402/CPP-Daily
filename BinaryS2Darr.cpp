#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool searchMatrix(vector<vector<int> >matrix, int target)
{
    int N = matrix.size(), M = matrix[0].size();
    int row_index, col_index, start=0, end= N*M-1, mid;

    while(start<end)
    {
        mid = (start+end) /2;
        row_index = mid/M;
        col_index = mid%M;

        if(matrix[row_index][col_index]==target)
        return true;
        else if (matrix[row_index][col_index]<target)
        start = mid+1;
        else
        end = mid-1;
    }
    
    cout<<"Found: ";
    return false;
}

int main()
{
    
    int n,m;
    cout<<"Enter the Rows and Col: ";
    cin>>n>>m;
    vector<vector<int> >matrix(n, vector<int>(m,0));
    
    cout<<"Enter Element: ";
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cin>>matrix[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    } 

    int target;
    cout<<"Get a Target: ";
    cin>>target;

    searchMatrix(matrix,target);
    return 0;
}