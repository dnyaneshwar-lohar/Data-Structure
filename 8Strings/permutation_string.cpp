#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void perm(char s[],int k){
    static int A[10] = {0};
    static char res[10] ;
    int i;

    if (s[k] == '\0')
    {
        cout<<res<<endl;
        res[k] = '\0';
    }
    else
    {
        for ( i = 0; s[i] != '\0'; i++)
        {
            if(A[i] == 0)
            {
                res[k] = s[i];
                A[i] = 1;
                perm(s,k+1);
                A[i]=0;
            }
        }
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    char s[] = "ABC";
    perm(s,0);
    return 0;
}
