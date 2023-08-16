#include<iostream>
using namespace std;

struct Rectangle
{
    int l;
    int b;
};

int main()
{
    struct Rectangle r={10,20};
    struct Rectangle *p = &r; 
    cout<<r.l<<endl;

    r.l=25;
    cout<<r.l<<endl;

    (*p).l=80;
    cout<<r.l<<endl;

    p->l=45;
    cout<<p->l<<endl;

    return 0;
}