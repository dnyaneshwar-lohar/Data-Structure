#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    q=new int[10];
    for (int i = 0; i < 5; i++)
    {
        p[i]=i+1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }
    

    free(p);
    p=q;
    q=NULL;
        for (int i = 0; i < 10; i++)
    {
        printf("%d\n",p[i]);
    }
    
    return 0;
}