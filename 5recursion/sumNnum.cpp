#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int sumN(int n) // time=o(n) space=o(n)
{
    if(n==1)
        return 1;
    return sumN(n-1)+n;
}

int sumN2(int n) // time=o(1) space=o(1)
{
    return (n*(n+1))/2;
}

int sumN3(int n) // time=o(n) space=o(3)
{
    int i,s=0;
    for ( i = 0; i <= n; i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    printf("%d\n",sumN(5));
    printf("%d\n",sumN2(5));
    printf("%d\n",sumN3(5));

    return 0;
}