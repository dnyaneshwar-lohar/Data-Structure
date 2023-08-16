#include<iostream>
using namespace std;
int main()
{

float d=34.4F;
long double e=34.4L;
cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"The size of 34.4f is "<<sizeof(34.4L)<<endl;
cout<<"The size of 34.4l is "<<sizeof(34.4F)<<endl;

//refrence variables 

float x=232;
float &y=x;
cout<<x<<endl;
cout<<y<<endl;

//type casting

int a=45;
cout<<"The value of a is "<<(float)a;
cout<<"The value of a is "<<float(a);
cout<<"The value of a is "<<int(a);
cout<<"The value of a is "<<(float)a;


return 0;
}