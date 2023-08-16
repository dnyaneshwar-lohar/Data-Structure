#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the Price of item with id=" << itemID[i] << "is" << itemPrice[i] << endl;
    }
}

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item=" << endl;
    cin >> itemPrice[counter];
    counter++;
}

int main()
{
    Shop Dukan;
    Dukan.initCounter();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.displayPrice();
    return 0;
}