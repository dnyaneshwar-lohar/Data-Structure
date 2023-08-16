#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"no"<<endl;
    }
    else if (age==18)
    {
        cout<<"critical";
    }
    else
    {
        cout<<"aaja bhai"<<endl;
    }    
    return 0;
}