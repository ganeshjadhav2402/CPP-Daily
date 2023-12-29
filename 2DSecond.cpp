#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wave(int arr1[][4], int row, int col)
{
    for(int j=0; j<col; j++)
    {
        // Print Even Number
        if(j%2==0)
        {
            for(int i=0; i<row; i++)
            cout<<arr1[i][j]<<" ";
        }

        else
        {
            for(int i=row-1; i>=0; i--)
            cout<<arr1[i][j]<<" ";
        }
    }
}

int main()
{
    // create 2D vector
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int n,m;
    // cout<<"Enter the Rows and Col: ";
    // cin>>n>>m;
    // vector<vector<int> >matrix(n, vector<int>(m,1));

    // for(int i=0; i<3; i++)
    // for(int j=0; j<4; j++)
    // cout<<matrix[i][j]<<" ";
    // cout<<endl;

    // cout<<"Rows: "<<matrix.size();
    // cout<<endl;
    // cout<<"Cols: "<<matrix[0].size();

    // Manage in Matrix form Element
    // for(int i=0; i<n; i++)
    // for(int j=0; j<m; j++)
    // cin>>matrix[i][j];

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     cout<<matrix[i][j]<<" ";
    //     cout<<endl;
    // }

    // print in wave 
    wave(arr1,3,4);


}
