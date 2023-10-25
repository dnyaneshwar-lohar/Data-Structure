#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char s[] = "lakalaka";
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    
    printf("%d",i);
    
    return 0;
}
