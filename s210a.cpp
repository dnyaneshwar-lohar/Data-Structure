#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main()
{
    struct Rectangle *p;

    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); 

    p = new Rectangle;

    p->length=10;

    cout<<p->length<<endl;
    
    return 0;
}