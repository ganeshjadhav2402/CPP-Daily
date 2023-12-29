#include<iostream>
using namespace std;

void five(char *str1, char *str2)
{
    while((*str1 = *str2))
    {
        str1++, str2++;
    }
}

int main()
{
    char first[] = "Mohit";
    char second[] = "Rohan";
    five(first, second);
    cout<<"First: "<<first;
}
