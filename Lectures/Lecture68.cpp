#include<iostream>
using namespace std;

int main()
{
    // int n,m;
    // cin>>n>>m;

    // int **ptr = new int * [n];

    // for(int i=0; i<n; i++)
    // {
    //     ptr[i] = new int [m];
    // }

    // for(int i=0; i<n; i++)
    // for(int j=0; j<m; j++)
    // cin>>ptr[i][j];

    // // print the value 
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     cout<<ptr[i][j]<<" ";
    //     cout<<endl;
    // }

    // // Release the memory from heap
    // for(int i=0; i<n; i++)
    // delete[] ptr[i];

    // delete[] ptr;

    // 3D Array Create
    int L,B,H;
    cin>>L>>B>>H;

    int ***ptr = new int **[L];

    //2D Array and store address in ptr
    for(int i=0; i<L; i++)
    {
        ptr[i] = new int * [B];

        for(int j=0; j<B; j++)
        {
            ptr[i][j] = new int [H];
        }
    }

    for(int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    ptr[i][j][k] = i+j+k;

    // print the value
    for(int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    cout<<ptr[i][j][k]<<" ";
    cout<<endl;
}
