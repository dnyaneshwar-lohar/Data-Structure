#include<iostream>
using namespace std;

int main()
{
    //pointer is data type which hold the address of other vairiable
    int a=3;
    int *b=&a;
    int **c=&b;
    cout<<"The value of a="<<a<<endl;
    cout<<"The address of a="<<b<<endl;
    cout<<"The value of a(*b)="<<*b<<endl;
    cout<<"The address of a(&a)="<<&a<<endl;

    //pointer to pointer

    cout<<"The value of a(**C)="<<**c<<endl;
    cout<<"The address of a(&a)"<<&a<<endl;
    cout<<"The address of a(b)"<<b<<endl;
    cout<<"The address of b(c)"<<c<<endl;
    return 0;
}