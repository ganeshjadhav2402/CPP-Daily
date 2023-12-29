#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    // Transpose
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        swap(matrix[i][j],matrix[j][i]);
    }

    // Reverse each Row
    for(int i=0; i<n; i++)
    {
        int start = 0, end = n-1;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++, end--;
        }
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<vector<int> >matrix(n, vector<int>(n,0));

    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin>>matrix[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    } 

    rotate(matrix);
}