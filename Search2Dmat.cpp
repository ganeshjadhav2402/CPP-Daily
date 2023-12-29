#include<iostream>
#include<vector>
using namespace std;


bool search(const vector<vector<int> > matrix, int n, int m, int x)
{
    int row = 0, col = m-1;

    while(row<n && col>=0)
    {
        if(matrix[row][col]==x)
        return 1;
        else if(matrix[row][col]<x)
        row++;
        else
        col--;
    }

    return 0;
}


int main()
{   
    // Search in sorted row(i) col(j) wise Matrix
    // int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // int N = 4,M = 4 ;
    // // cout<<"Enter the Rows and Col: ";
    // // cin>>N>>M;

    // int x;
    // cout<<"Get a Number: ";
    // cin>>x;

    // int i=0, j=M-1;

    // while(i<N && j>=0)
    // {
    //     if(matrix[i][j]==x)
    //     return true;
    //     else if(matrix[i][j]<x)
    //     i++;
    //     else
    //     j--;
    // }

    // return false;

    
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

    int x;
    cout<<"Get a Target: ";
    cin>>x;

    search(matrix,n,m,x);
}