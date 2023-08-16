#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int fun (int n)
{ 
    int x=1;
    int k; 
    static int z=1;

    if (n==1) return x; 

    for (k=1;k<n; ++k)
    {
        x=x + fun(k)*fun(n - k); 
    }
    z++;
    printf("%d\n",z);
return x; 

}

int main()
{
    printf("%d",fun(5));
    return 0;
}