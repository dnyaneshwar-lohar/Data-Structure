#include<iostream>
using namespace std;

class employee
{
    private:
        int a,b,c;//these variables arae only assessed by members of emploee calss
    public://these variables can be assessed outside the class aswell
        int d,e;
    void setdata(int a,int b,int c);//fuction diclaration
    void getdata()// fuction diclaration and defination inside the class
    {
        cout<<"The value of a is ="<<a<<endl;
        cout<<"The value of b is ="<<b<<endl;
        cout<<"The value of c is ="<<c<<endl;
        cout<<"The value of d is ="<<d<<endl;
        cout<<"The value of e is ="<<e<<endl;
    }
    // void getdata();


};
            //scope resolution operator ::  
void employee :: setdata(int a1,int b1,int c1)//fuction defination ouside the call
{
    a=a1;
    b=b1;
    c=c1;
}
// void employee :: getdata()
// {
//         cout<<"The value of a is ="<<a<<endl;
//         cout<<"The value of b is ="<<b<<endl;
//         cout<<"The value of c is ="<<c<<endl;
//         cout<<"The value of d is ="<<d<<endl;
//         cout<<"The value of e is ="<<e<<endl;
//     }
int main()
{
    employee l;
    //l.a=12; -->this will show error because a is private variable
    l.d=21;
    l.e=23;
    l.setdata(1,2,3);//fuction all
    l.getdata();//function call
    
    return 0;
}