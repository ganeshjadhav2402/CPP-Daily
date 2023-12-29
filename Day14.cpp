#include<iostream>
using namespace std;

int main()
{
    // Decimal to Binary Conversion
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    // int rem, ans=0, mul=1;
    // while(num>0)
    // {
    //     // reminder
    //     rem = num%2;
    //     // num ko divide kar do
    //     num = num/2 ;
    //     // ans
    //     ans = mul*rem+ans;
    //     // mul
    //     mul*=10;
    // }
    // cout<<"The Binary number is: "<<ans;
    

    // Decimal to Octal Conversion
    // int octa=0, count=1, rem, temp;
    // temp=num;
    // while (temp!=0)
    // {
    //     rem = temp%8;
    //     octa = octa+rem*count;
    //     count = count*10;
    //     temp = temp/8;
    // }
    // cout<<"The Octal Equivalent: "<<octa<<endl;

    // Octal  to Decimal Conversion
    int deci=0, i=0, n, rem;
    n = num;
    while(n!=0)
    {
        rem = n%10;
        deci += rem*pow(8, i);
        n /= 10;
        i++;
    }
    cout<<"The Decimal Equivalent: "<<deci<<endl;
    

}



