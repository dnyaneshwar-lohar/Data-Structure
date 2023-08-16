#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int pow(int m,int n)
{
    if (n==0)
        return 1;
    return pow(m,n-1)*m;
}

int pow2(int m,int n)
{
    if(n==0)
        return 1;
    if (n%2==0)
        return pow2(m*m,n/2);
    return m*pow2(m*m,n/2);
}
int main()
{
    printf("%d\n",pow(5,2));
    printf("%d\n",pow2(2,7));

    return 0;
}