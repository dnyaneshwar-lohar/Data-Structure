#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct test
{
    int A[5];
    int n;
};

int fun(struct test t1)
{
    int c;

    for (int i = 0; i < t1.n; i++)
    {
        c=c+t1.A[i];    
    }
    return c;
}
int main()
{
    struct test t={{1,2,3,4,5},5};

    int p=fun(t);

    printf("%d",p);
    return 0;
}