#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
        void initcounter()
        {
            counter=0;
        }
        void getprice(void);
        void setprice(void);
        void displayprice();
};
void shop :: getprice()
{
    cout<<"enter id of your item \t"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id="<<itemid[i]<<"is="<<itemprice[i]<<endl;
    }
    
}
int main()
{
    shop l;
    l.initcounter();
    l.getprice();
    l.getprice();
    l.displayprice();

    return 0;
}