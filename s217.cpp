#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void fun(int A[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",A[i]);
    }
    
}

int *fun2(int n){
    int *p,m;
    p=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        // scanf("%d",&m);
        // p[i]=m;

        scanf("%d",&p[i]);


    }
    return p;
}

int *fun3(int size)
{
    int *p;
    p=new int[size]; //p=(int *)malloc(sze*sizeof(int));

    for(int i = 0; i < size; i++)
    {
        p[i]=i++;
    }

    return p;
}
int main()
{
    int A[5]={1,2,3,4,5};

    fun(A,5);

    int *B;
    B=fun2(5);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",B[i]);
    // }

    int *ptr,sz=5;

    ptr=fun3(sz);

    for (int i = 0; i < sz; i++)
    {
        printf("%d",ptr[i]);
    }
    
    return 0;
}