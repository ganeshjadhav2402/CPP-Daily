#include<iostream>
#include<climits>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    // column wise
    for(int j=0; j<col; j++)
    for(int i=0; i<row; i++)
    cout<<arr[i][j]<<" ";
}

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;

    for(int i=0; i<row; i++)
    {
        int total = 0;
        for(int j=0; j<col; j++)
        total += arr[i][j];

        if(total>sum)
        {
            sum = total;
            index = i;
        }
    }

    cout<<index<<" ";
}

void printsumdig(int matrix[][3], int row, int col)
{
    int first = 0;
    int sec = 0;

    // first diagnoal sum
    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }

    // second diagnoal sum
    i=0;
    int j = col-1;
    while(j>=0)
    {
        sec+=matrix[i][j];
        i++,j--;
    }    

    cout<<first<<" "<<sec<<" ";
}

void printrevercmat(int revers, int row, int col)
{

    for(int i=0; i<row; i++)
    {
        int start=0, end=col-1;
        
        while(start<end)
        {
            swap(revers[i][start], revers[i][end]);
            start++, end--;
        }
    }

    cout<<"Yes"<<" ";
}

int main()
{
    // create 2D Array
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {1,3,4,2,5,7,6,8,9,11,12,10};
    int ans[3][4];

    // Print all value in row wise
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // cout<<arr[row][col]<<" ";

    // Print all value in col wise function call
    // printcol(arr,3,4);

    // Find an Element in our array
    // int x = 7;

    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // {
    //     if(arr[row][col]==x)
    //     {
    //         cout<<"Yes ";
    //         return 0;
    //     }
    // }

    // cout<<"No ";

    // Add 2 Matrix
    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // {
    //     ans[row][col] = arr1[row][col] + arr2[row][col];
    // }

    // for(int row=0; row<3; row++)
    // for(int col=0; col<4; col++)
    // cout<<ans[row][col]<<" ";

    // Print row index maximum sum
    // printrowmax(arr2,3,4);

    // Print Diagnoal Sum
    // int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    // printsumdig(matrix,3,3);

    // Print Reverse rowof matrix
    int revers[3][4] = {1,2,3,4,5,6,7,8,9,3,6,5};
    printrevercmat(revers,3,4);

}
