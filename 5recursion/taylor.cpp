#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
double e2(int x,int n)
{
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e2(x,n-1);
}
int main()
{
    printf("%lf",e(4,15));
    printf("%lf",e2(4,15));

    return 0;
}