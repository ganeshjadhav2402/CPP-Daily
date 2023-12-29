#include <iostream>
using namespace std;

void printeven(int N)
{
    if (N == 2)
    {
        cout<<N<<endl;
        return;
    }

    printeven(N - 2);
    cout<<N<<endl;
}

// void printeven(int num, int N)
// {
//     if(num>N)
//     return;

//     cout<<num<<endl;
//     printeven(num+2,N);
// }

// void print(int n)
// {
//     if(n==1)
//     {
//         cout<<1<<endl;
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }

// void print(int num, int N)
// {
//     if(num==N)
//     {
//         cout<<num;
//         return;
//     }
//     cout<<num<<" ";
//     print(num+1,N);
// }

int main()
{
    int N;
    cout<<"Enter a number: ";
    cin >> N;
    if (N % 2 == 1)
        N--;

    // print(1,N);
    // printeven(2,N);
    printeven(N);
}