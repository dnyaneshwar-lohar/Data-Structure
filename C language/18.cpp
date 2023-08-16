#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==1)
    {
        /* code */
        return 1;
    }
    
    return(n*fact(n-1));
}
//fact(6)=6*fact(5)
//fact(6)=6*5*fact(4)
//fact(6)=6*5*4*fact(3)
//fact(6)=6*5*4*3*fact(2)
//fact(6)=6*5*4*3*2*fact(1) fact(1)=1
//fact(6)=6*5*4*3*2*1=720

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return (fib(n-2)+fib(n-1));
}
//fib(6)
//fib(4)+fib(5)
//fib(2)+fib(3)+fib(3)+fib(4)
//fib(0)+fib(1)+fib(1)+fib(2)+fib(1)+fib(2)+fib(2)+fib(3)
//.
//.
//.
int main()
{
    //Recursion (factorial of a number)
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"factorial of number is="<<fact(n);
    
    cout<<endl;

    cout<<"Fibonacci of number is="<<fib(n);


    return 0;
}