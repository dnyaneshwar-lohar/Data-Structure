#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;
            cout<<"Enter the id of Emplyee= "<<endl;
            cin>>id;
        }

        void getId(void){
            cout<<"The id of this Employee is "<<id<<endl;
        }
};
int main()
{
    // Employee e1,e1,e3,e4;
    // e1.setId();
    // e1.getId();

    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    

    return 0;
}