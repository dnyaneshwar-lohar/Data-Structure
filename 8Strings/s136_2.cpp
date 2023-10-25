#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "PYTHON";
    int l;
    for ( l = 0; A[l] != '\0'; l++){}
    
    for (int i=0,j = l-1; i<=j ; i++,j--)
    {
        int temp = A[i]; 
        A[i] = A[j];
        A[j] = temp;
    }
    cout<<A;
    
    return 0;
}
