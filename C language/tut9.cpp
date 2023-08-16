#include<iostream>

using namespace std;

int main(){
    int age;
    // cout<<"Tell me your age"<<endl;
    // cin>>age;
    // if(age<18){
    //     cout<<"You can not come to the party"<<endl; 
    // }
    // else if(age==18){
    //     cout<<"you will get kid pass"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
    case 2:
        cout<<"You are two"<<endl;
    default:
        cout<<"kya likhu"<<endl;
        break;
    }

    cout<<"Done with switch case"<<endl;

}