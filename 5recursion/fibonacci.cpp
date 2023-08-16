#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int fib(int n)
{
    int t0=0,t1=1,s=0,i;
    if(n<=1) return n;
    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int rfib(int n)
{
    if(n<=1) return n;
    return fib(n-2)+fib(n-1);
}
int *F= new int(7);
int mfib(int n)
{


    if (n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
        {
            F[n-2]=mfib(n-2);
        }
        if (F[n-1]==-1)
        {
            F[n-1]=mfib(n-1);
        }
        return F[n-2]+F[n-1];
    }
}
int main()
{
    for (int i = 0; i < 7; i++)
    {
        F[i]=-1;
    }
    printf("%d\n",fib(7));
    printf("%d\n",rfib(7));
    printf("%d\n",mfib(7));
 
    return 0;
}