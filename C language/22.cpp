#include<iostream>
#include<string>
using namespace std;


    // OOP - Classess nad objects
    // class --> extrntion of structure (in c)
    // structure had limitation --> members are public
    //      -->members are public
    //      -->no methods
    // classes = structure + more
    // classes --> can have mehods and properties
    // classes --> can make few members as private & few as public
    // structure in c++ are typedef
    //you cane diclare objects along with the class declaration
    /* class Employee
    {
        classdefination
    } laka,sahil,kala; */
    
    
    //nesting of member function
class binary
{
    string s;
    public:
        void read();
        void chk_bin();
        void compliment();
        void display();
};    

void binary :: read()
{
    cout<<"Enter a binary number=";
    cin>>s;

}

void binary :: chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"invalid"<<endl;
            exit(0);
        }        
    }
    
}

void binary :: compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
        
        
    }
    
}

void binary :: display()
{
    cout<<"display="<<s;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.compliment();
    cout<<endl;
    b.display();
    
    return 0;
}