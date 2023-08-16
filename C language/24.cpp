#include<iostream>
using namespace std;

class person
{
        char name[100];
        static int count;
    public:
        void getdata(void)
        {
            cout<<"Enter persons name=";
            cin>>name;
            cout<<endl;
            count++;
        }
        void printdata()
        {
            cout<<count<<"Persons name is";
            cout<<name;
            cout<<endl;
        }

};
int person :: count;
int main()
{
    person l,s,k;

    l.getdata(); 
    l.printdata();

    s.getdata();
    s.printdata();

    k.getdata();
    k.printdata();
    
    return 0;
}