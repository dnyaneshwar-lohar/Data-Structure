#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "WELCOME";
    for (int i = 0; A[i]!='\0'; i++)
    {
        if (A[i]>='a' && A[i]<='z')
        {
            A[i] = A[i] - 32;
        }
        else if (A[i]>='A' && A[i]<='Z')
        {
            A[i] = A[i] + 32;
        }
    }
    cout<<A;
    
    return 0;
}
