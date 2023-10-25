#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "finding";
    int H[26];
    for (int i = 0; i < 26; i++)
    {
        H[i] = 0;
    }
    
    for (int i = 0; A[i] != '\0'; i++)
    {
        H[A[i]-97] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            printf("%C",i+97);
            printf("%d",H[i]);
        }
        
    }
    return 0;
}
