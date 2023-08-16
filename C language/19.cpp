#include<iostream>
//function oveloading
using namespace std;

int add(int a,int b)
{
    
    return (a+b);
}

int add(int a,int b,int c) 
{
    
    return (a+b+c);
}

//volume of cylinder

int volume(double r,int h)
{
    return(3.14*r*r*h);
}

//volume of cube

int volume(int a)
{
    return (a*a*a);
}

//volume of box

int volume(int a,int b,int c)
{
    return (a*b*c);
}

int main()
{
    cout<<"The sum of a,b="<<add(2,3)<<endl;
    cout<<"The sum of a,b,c="<<add(4,5,6)<<endl;
    cout<<"The volume of cylinder="<<volume(3.5,5)<<endl;
    cout<<"The volume of cube="<<volume(3.5)<<endl;
    cout<<"The volume of rectangular box="<<volume(3.5,5,4)<<endl;

    return 0;
}