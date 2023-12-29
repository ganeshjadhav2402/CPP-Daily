#include<iostream>
#include<vector>
using namespace std;

// void incr(int * ptr)
// {
//     *ptr = *ptr + 1;
// }

// void dob(int *p)
// {
//     for(int i=0; i<5; i++)
//     p[i] = 2 * p[i];
// }

// void swapping (int &p1, int &p2)
// {
//     int temp = p1;
//      p1 = p2;
//      p2 = temp;
//     cout<<p1<<endl;
//     cout<<p2<<endl;
// }

void pass(vector<int>&temp)
{
    for(int i=0; i<5; i++)
    temp[i] = 20;
}

int main()
{
    // char arr[5] = "1234";
    // char * ptr = arr;
    
    // cout<<(void*)arr<<endl;
    // cout<<(void*)ptr<<endl;

    // char name = 'a';
    // char * ptr = &name;
    // cout<<name<<endl;
    // cout<<(void*)&name<<endl;
    // cout<<(void*)ptr;

    // int num = 10;
    // int temp = num;
    // incr (&num);
    // cout<<num;

    // int arr[5] = {1,2,3,4,5};
    // dob(arr);
    // for(int i=0; i<5; i++)
    // cout<<arr[i];

    // int first = 10;
    // int second = 20;
    // swapping(&first, &second);
    // // cout<<first<<" "<<second<<endl;
    // cout<<&first<<endl;
    // cout<<&second<<endl; 
    
    // int first = 10, second = 20;
    // swapping(first,second);
    // cout<<first<<" "<<second;

    vector<int>v(5,0);
    pass(v);
    for(int i=0; i<5; i++)
    cout<<v[i]<<" ";

}
