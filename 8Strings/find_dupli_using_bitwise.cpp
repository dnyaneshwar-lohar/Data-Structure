#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char x[]="finding";
    long H = 0,a = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        a=1;
        a=a<<(x[i]-97);
        if((H&a)>0){
            cout<<x[i]<<" Duplicated"<<endl;
        }
        else
        {
            H=H|a;
        }
    }
    
    return 0;
}
