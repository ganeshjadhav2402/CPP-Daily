#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n, int i=2)
{   
    //base case
    if(n < 2) {
        return false;
    }
    if(i > sqrt(n)) {
        return true;
    }

    //recursive case
    if(n % i == 0) {
        return false;
    } else {
        return isPrime(n, i + 1);
    }
}


int main()
{
    int n;
    cout<<"Enter a number N: ";
    cin>>n;

    if(isPrime) {
        cout<<n<<" is a prime number.";
    } else {
        cout<<n<<" is not a prime number.";
    }
    return 0;
}
