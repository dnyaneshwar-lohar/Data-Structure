#include<iostream> 
#include<iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // char c='c';
    // cout<<"The value of a was :"<<a;

    const int a = 34;
    int b=34,c=4545;
    cout<<"The value of a was :"<<a<<endl;
    cout<<"The value of b with setw is"<<setw(4)<<b<<endl;
    cout<<"The value of b is"<<b<<endl;
    cout<<"The value of c with sertw is "<<setw(4)<<c<<endl;
    cout<<"The value of c is"<<c<<endl;
    
    return 0;
}