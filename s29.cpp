#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &r=a;

    int b=80;
    r=b;
    cout<<r<<endl<<a<<endl;
    cout<<&a<<endl<<&b<<endl<<&r<<endl;
    return 0;
}