#include <iostream>
using namespace std;

// 10 to N number be grater than 10
// void printNumber(int num, int n)
// {
//     if(num > n)
//     {
//         return;
//     }

//     cout<<num<<" ";
//     printNumber(num + 1, n);
// }

// All Odd Numbers from 1 to N 
// void printodd(int num, int N)
// {
//     if (num > N)
//     {
//         return;
//     }
//     if(num % 2 != 0)
//     {
//         cout<<num<<" ";
//     }

//     printodd(num+1, N);
// }

void printTable(int num, int mul)
{
    if(mul > 10)
    {
        return;
    }

    cout<<num<<" x "<<mul<<" = "<<num * mul<<endl;
    printTable(num, mul + 1);
}

int main()
{
    int N;
    cout << "Enter Number: ";
    cin >> N;

    // cout << "Odd numbers: ";
    // printodd(1, N);

    // printNumber(10, N);
    // return 0;

    //print table of any input number
    printTable(N, 1);
    return 0;
}
