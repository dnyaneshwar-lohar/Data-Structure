#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
**    int A[3][4]={{1,2,3,4},{0,0,0,0},{2,4,6,8}};
    
    int *B[3];
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=new int[4];
    B[2]=new int[4];

    int **c;
    c=(int **)malloc(3*sizeof(int)); // c=new int*[3]
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=new int[4];
    c[2]=new int[4];

    return 0;
}