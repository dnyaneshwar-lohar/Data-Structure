#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int* b = &a;

    cout<<"Address of a ="<<&a<<endl;
    cout<<"Address of a ="<<b<<endl;

    cout<<"Value of a="<<a<<endl;
    cout<<"Value of a="<<*b<<endl;

    int** c = &b;
    cout<<"Address of b"<<&b<<endl;
    cout<<"Address of b"<<c<<endl;

    cout<<"Value of a="<<a<<endl;
    cout<<"Value of a="<<*b<<endl;
    cout<<"Value of a="<<**c<<endl;

    cout<<"Address of a="<<*c<<endl;



    return 0;
}