#include<iostream>
using namespace std;

//call by refrence
void swappointer(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
    cout<<"value of a="<<*a<<endl;
    cout<<"Value of b="<<*b;
}

//call by refrence using c++ reference variables
void swaprefrencevar(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
    cout<<"value of a="<<a<<endl;
    cout<<"Value of b="<<b;
}

void sum(int a,int b)
{
    cout<<"sum="<<a+b;
}
int main()
{
    int a,b;
    cout<<"value of a=";
    cin>>a;
    cout<<"Value of b=";
    cin>>b;
    sum(a,b);
    
    cout<<endl;
    
    swappointer(&a,&b);

    cout<<endl;

    swaprefrencevar(a,b);

    return 0;
}