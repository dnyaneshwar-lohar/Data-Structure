#include<iostream>

using namespace std;

// struct employee
// {
//     int eid;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    int eid;
    char favChar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float pouds;
};


int main(){
    // struct employee harry;
    // harry.eid = 1;
    // harry.favChar ='c';
    // harry.salary = 12000;

    // ep harry;
    // harry.eid = 1;
    // harry.favChar ='c';
    // harry.salary = 12000;

    // cout<<"The value of eid is "<<harry.favChar<<endl;
    // cout<<"The value of favchar is "<<harry.eid<<endl;
    // cout<<"The value of salary is "<<harry.salary<<endl;

    // union money m1;
    // m1.rice = 78;
    // cout<<"The value of rice="<<m1.rice<<endl;

    enum meal {Breakfast, lunch, Diner};
    // meal m1 = Breakfast;
    cout<<Breakfast<<endl;

    return 0;
}