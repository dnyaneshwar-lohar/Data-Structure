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
    Rectangle(int l,int b);
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    int getlength()
    {
     
        return length;
    }
        int getbreadth()
    {
     
        return breadth;
    }
    ~Rectangle();
};

Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

Rectangle::~Rectangle()
{
}


int main()
{
    Rectangle r(10,5);
    cout<<"Area="<<r.area()<<endl;
    cout<<"Perimeter="<<r.perimeter()<<endl;

    return 0;
}