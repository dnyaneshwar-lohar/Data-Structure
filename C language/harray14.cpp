#include<iostream>
using namespace std;

struct person
    {
        char Name;
        int number;
        char gender;
    };
    // typedef struct person
    // {
    //     char Name;
    //     int number;
    //     char gender;
    // }ep;
int main()
{
    struct person l; //ep l
    l.Name='l';
    l.number=1947;
    l.gender='A';

    cout<<l.Name<<endl;
    cout<<l.number<<endl;
    cout<<l.gender<<endl;

    return 0;
}