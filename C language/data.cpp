#include<iostream>
using namespace std;

int glo=6;
void sum()
{
     int a;
     cout<<"glo="<<glo;
}
int main()
{
    int glo=9; 
    glo=78;
    sum(); 
    int a=4; 
    cout<<"\nmai yeda hu"; 
    cout<<"\n mai yeda hu";
    cout<<"\nglo="<<glo; 
    return(0);
}