#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
    int a[10]={1,2,4,5};
    int x;
    for(int x:a){
        cout<<x<<endl;
    }

    // for (int i = 0; i<5; i++ ){
    //     cout<<a[i]<<endl;
    // }

    // cout<<sizeof(a)<<endl;
    // cout<<a[5]<<endl;
    // printf("%d\n",a[6]);

    return 0;
}
