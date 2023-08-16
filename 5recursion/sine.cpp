#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int pow(int m,int n)
{
    int c=1;
    for (int i = 0; i <n ; i++)
    {
        c*=m;
    }
    return c;
}
int fact(int n)
{
    int c=1;
    for(;n>0;n--)
    {
        c=c*n;
    }
    return c;
}
double sine(int x,int n)
{
    static double s,p,f;
   if (n==0)
    {
        return x;
    }
    
    if (n%2==0)
    {
        s=sine(x,n-1);
        p=pow(x,2*n+1);
        f=fact(2*n+1);
 
        s=s+p/f;
    }
    else
    {
        s=sine(x,n-1);
        p=pow(x,2*n+1);
        f=fact(2*n+1);
 
        s=s-p/f;
    }
    return s;
}
int main()
{
    // printf("%d\n",pow(2,3));
    // printf("%d\n",fact(3));
    printf("%lf",sine(2,6));

    return 0;
}