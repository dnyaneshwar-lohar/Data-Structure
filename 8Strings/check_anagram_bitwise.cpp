#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[] = "decimial";
    char B[] = "medicial";

    long HA = 0, HB = 0, Aa = 0, Ba = 0;
    int LA = 0;
    int LB = 0;

    for (; A[LA] != '\0' && B[LB] != '\0'; LA++, LB++)
    {
        Aa=1;
        Ba=1;
        Aa = Aa<<(A[LA]-97);
        Ba = Ba<<(B[LB]-97);
        HA = HA|Aa;
        HB = HB|Ba;
    }

    if (HA == HB && LA == LB && A[LA] == '\0' && B[LB] == '\0')
    {
        cout<<"Anagram"<<endl;
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }
    return 0;
}
