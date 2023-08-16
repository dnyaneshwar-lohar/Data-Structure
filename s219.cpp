#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r1)//call by value || int area(struct Reactangle &r1)-->call by reafrence || int area (struct Rectangle *r1)-->call by pointer
{
    r1.length=20; // r1->lenght=20;
    return r1.length*r1.breadth; //   return r1->length*r1->breadth;

}
int main()
{
    struct Rectangle r={10,5};

    int a=area(r);

    printf("%d",a);
    printf("\n%d",r.length);
    return 0;
}