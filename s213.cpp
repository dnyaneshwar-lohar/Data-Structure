#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int add(int a, int b)
{
    int c=a+b;
    return(c);
}
int main()
{
    int x=10, y=5,z;
    z=add(10,5);
    printf("sum=%d",z);
    return 0;
}