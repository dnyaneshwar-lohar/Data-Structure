#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int fact(int n)
{
    int m=1;
    for (int i = 1; i <= n; i++)
    {
        m=m*i;
    }
    return m;    
}
int c(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}
int c2(int n,int r)
{
    if(r==0 || n==r)
        return 1;
    return c2(n-1,r-1)+c2(n-1,r);
}
int main()
{
    printf("%d\n",c(5,3));
    printf("%d\n",c2(5,3));      
    return 0;
}