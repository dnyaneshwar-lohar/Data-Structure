#include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;
    public:
        void setid()
        {
            salary = 122;
            cout<<"enter id of emplyee"<<endl;
            cin>>id;
        }
        void getid()
        {
            cout<<"The id of this emplyee is="<<id<<endl;

        }
};
int main()
{
    // employee h,l,s;
    // h.setid();
    // h.getid();
    employee l[3];
    for (int i = 0; i < 3; i++)
    {
        l[i].setid();
    }
    
    cout<<endl;

    for (int i = 0; i < 3; i++)
    {
        l[i].getid();
    }
    
    
    return 0;
}