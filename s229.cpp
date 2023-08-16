#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
template<class T>
class Arthametic
{
private:
    T a;
    T b;
public:
    Arthametic(T a, T b);
    T add();
    T sub();
};
template<class T>
Arthametic<T>:: Arthametic(T a,T b)
{
    this->a=a;
    this->b=b;

}
template<class T>
T Arthametic<T> :: add()
{
    T c;
    c=a+b;
    return c;

}
template<class T>
T Arthametic<T> :: sub()
{
    T c;
    c=a-b;
    return c;

}

int main()
{
    Arthametic<float> a(1.2,20);
    cout<<"Add="<<a.add()<<endl;
    cout<<"sub="<<a.sub()<<endl;

}
