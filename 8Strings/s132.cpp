#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char s[] = "WELCOME";
    int i;
    for (i = 0; s[i] != '\0'; i++){}
    cout<<i;
    return 0;
}
