#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int f (int &x, int c) 

{

c = c-1; 

if (c==0) return 1; 

x = x + 1; 

return f(x,c)*x;

}

int main()
{
    int c=5;
    int &x=c;
    printf("%d",f(c,c));
    return 0;
}