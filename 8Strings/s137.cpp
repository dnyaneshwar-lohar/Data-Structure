#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void palidrome(char P[])
{
    int i,j,k;
    for ( i = 0; P[i] != '\0'; i++){}

    for (j = 0,k = i-1; j<=k; k--,j++)
    {
        if (P[k] != P[j])
        {
            break;
        }
        
    }
    if (P[k] == P[j])
    {
        cout<<"Palidrome";
    }
    else
    {
        cout<<"Not a Palidrome";
    }
} 

void compare(char A[],char B[])
{
    int i,j;
    for (i = 0,j = 0; A[i] != '\0' && B[j] != '\0' ; i++,j++)
    {
        if (A[i]!=B[j])
        {
            break;
        }
        
    }
    if (A[i] == B[j])
    {
        cout<<"Strings are equal";
    }
    else if (A[i]<B[j])
    {
        cout<<"1st String is smaller";
    }
    else
    {
        cout<<"1st string is greater";
    }
}

int main(int argc, char const *argv[])
{
    char A[] = "Painter";
    char B[] = "Painting";
    char P[] = "madam";
    compare(A,B);
    palidrome(P);
    return 0;
}
