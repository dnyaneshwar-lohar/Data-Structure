#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void fun(int n)
{
    if (n>0)
    {
        v bprintf("%d\n",n);
        fun(n-1);
    }
    
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}