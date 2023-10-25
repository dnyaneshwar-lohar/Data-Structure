#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "How are you";
    int cCount = 0;
    int vCount = 0;
    int others = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        if ((A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z'))
        {
            if (A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
            {
                vCount++;
            }
            else
            {
                cCount++;
            }
        }
        else
        {
            others++;
        }
        
    }
    cout<<"Vowels="<<vCount<<endl;
    cout<<"Consonents="<<cCount<<endl;
    cout<<"Other Character="<<others<<endl;
    return 0;
}
