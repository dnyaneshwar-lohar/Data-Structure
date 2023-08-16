#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {23,45,56,89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    marks[2]=34534;
    cout<<endl;
    cout<<marks[2]<<endl;

    cout<<endl;

    for (int i = 0; i <= 4; i++)
    {
        /* code */
        cout<<"byforloop"<<i<<"is="<<marks[i]<<endl;
    }

    cout<<endl;

    //pointer and arrays

    int *p=marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *p+1 is "<<*(p+1)<<endl;
    cout<<"The value of *p+2 is "<<*(p+2)<<endl;
    cout<<"The value of *p+3 is "<<*(p+3)<<endl;
    

    return 0;
}