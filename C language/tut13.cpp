#include<iostream>
using namespace std;

int main()
{
    int marks[] = {23,34,6,7};
    // int mathmarks[4];
    // mathmarks[0]=23;
    // mathmarks[1]=63;
    // mathmarks[2]=27;
    // mathmarks[3]=29;

    // for(int i = 0;i<4;i++){
    //     cout<<marks[i]<<endl;
    // }

    int* p = marks;

    // cout<<"marks[0]="<<*p<<endl;
    // cout<<"marks[1]="<<*(p+1)<<endl;
    // cout<<"marks[2]="<<*(p+2)<<endl;
    // cout<<"marks[3]="<<*(p+3)<<endl;

    for( int i = 0; i < 4; i++)
    {
        /* code */
        cout<<*(p)<<endl;
        p+=1;
    }
    

    return 0;
}