#include<iostream>
using namespace std;

void fun(int **p1)
{
    *p1 = *p1 + 1;
}

int main()
{
    int n = 10;
    int * p = &n;
    int ** p2 = &p;
    cout<<p<<endl;
    fun(p2);
    cout<<p<<endl;
}