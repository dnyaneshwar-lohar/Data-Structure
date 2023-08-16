#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    // void initialize(int l,int b) //Rectangle(int l,int b)-->constructor
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return(length*breadth);
    }
    void changelngth(int l)
    {
        length=l;
    }
};

int main()
{
    Rectangle r(10,20);
    // r.initialize(10,20);
    cout<<r.area()<<endl;
    r.changelngth(50);
    cout<<r.area()<<endl;


    return 0;
}