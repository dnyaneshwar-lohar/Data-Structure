#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swapp(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void swapr(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    printf("a=%d,b=%d\n",a,b);

    swapp(&a,&b);
    printf("a=%d,b=%d\n",a,b);

    swapr(a,b);
    printf("a=%d,b=%d\n",a,b);    
    return 0;
}