#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // this variable is shared amongst all object
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id of employee= " << id << " count= " << count << endl;
    }

    static void getCount(void){
        cout<<"the value of count is="<<count<<endl;
    }
};

int Employee :: count = 100; // default value is 0

int main()
{
    Employee e, e2, e3;

    e.setData();
    e.getData();
    //e.getCount();
    Employee :: getCount();

    e2.setData();
    e2.getData();
    //e2.getCount();
    Employee :: getCount();

    e3.setData();
    e3.getData();
    //e3.getCount();
    Employee :: getCount();

    return 0;
}