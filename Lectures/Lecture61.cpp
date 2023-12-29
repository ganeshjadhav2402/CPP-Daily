#include<iostream>
using namespace std;

int main()
{
    // Get Memory Size Data type and size of bytes 
    cout<<"Data Type      "<<"Memory Type"<<endl;
    bool organ = true;
    bool * ptr = &organ;
    cout<<"bool           ";
    cout<<sizeof(organ)<<"  byte"<<endl;

    char c = 'g';
    char * ptr1 = &c;
    cout<<"char           ";
    cout<<sizeof(c)<<"  byte"<<endl;

    int a = 1;
    int * ptr2 = &a;
    cout<<"int            ";
    cout<<sizeof(a)<<"  bytes"<<endl;

    float m = 1.2;
    float * ptr3 = &m;
    cout<<"float          ";
    cout<<sizeof(m)<<"  bytes"<<endl;

    double d = 2;
    double * ptr4 = &d;
    cout<<"double         ";
    cout<<sizeof(d)<<"  bytes"<<endl;

    string s = "ganesh";
    string * ptr5 = &s;
    cout<<"string         ";
    cout<<sizeof(s)<<" bytes"<<endl;
}
