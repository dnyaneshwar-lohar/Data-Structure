#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    /*int n,n1;
    scanf("%d",&n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&n1);
        b[i]=n1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",b[i]);
    }*/

    int* p,n1;
    p=new int[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n1);
        p[i]=n1;
    }
    return 0;
}