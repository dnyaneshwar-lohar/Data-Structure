#include<iostream>
using namespace std;

//Function prototype
//type function-name(argument)
//int sum(int a,int b);--acceptable
//int sum(int,int);--acceptable

int sum(int a,int b)//a,b are formal parameters
{
    int c=a+b;
    return c;
}
void g()
{
    cout<<"\nhello";
}
int main()
{
    int num1,num2;
    //num1,num2 are actual parameters 
    cout<<"Enter 1st number="<<endl;
    cin>>num1;
    cout<<"Enter 2nd number="<<endl;
    cin>>num2;
    cout<<"Sum="<<sum(num1,num2);
    g();
    
    return 0;
}