#include<iostream>
using namespace std;
//This will not work
void swap(int a,int b){
    int temp =a;
    a = b;
    b = temp;
}
//call by refrence using pointers
void swappointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//call by refrence using c++ refrence variable
void swapref(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4,b = 5;
    cout<<"The value of a ="<<a<<endl;
    //swap(x,y); //this will not swap a and b
    //swapponiter(&a,&b); //this will swap a and b using pointer
    swapref(a,b); //this will swap a and b using refrence variables
    cout<<"The value of a ="<<a<<endl;
    return 0;
}