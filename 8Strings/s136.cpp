#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "PYTHON";
    int i;

    for (i = 0; A[i] != '\0'; i++){}
    char B[i];
    i = i-1;
    int j;
    for (j = 0; i >=0; i--,j++)
    {
        B[j] = A[i];
    } 
    B[j] = '\0';
    cout<<B;
    
    return 0;
}
