#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void perms(char s[],int l,int h){
    if (l==h)
    {
        printf("%s\n",s);
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            char k = s[l];
            s[l] = s[i];
            s[i] = k;
            perms(s,l+1,h);
            k = s[l];
            s[l] = s[i];
            s[i] = k;
        }   
    }
}

int main(int argc, char const *argv[])
{
    char s[]={'A','B','C'};
    perms(s,0,3);

    return 0;
}
