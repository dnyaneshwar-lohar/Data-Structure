#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

class lower_traingular_clas
{
private:
    int *A;
    int n;

public:
    lower_traingular_clas(int n);
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~lower_traingular_clas();
};

lower_traingular_clas::lower_traingular_clas(int n)
{
    this->n = n;
    this->A = new int[n * (n + 1) / 2];
}
void lower_traingular_clas::set(int i, int j, int x)
{
    if (i >= j)
    {
        A[i * (i - 1) + (j - 1)] = x;
    }
}

int lower_traingular_clas::get(int i, int j)
{
    if (i >= j)
    {
        return A[i * (i - 1) + (j - 1)];
    }
    else
    {
        return 0;
    }
}

void lower_traingular_clas ::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[i * (i - 1) + (j - 1)] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

lower_traingular_clas::~lower_traingular_clas()
{
    delete[] A;
}

int main(int argc, char const *argv[])
{
    lower_traingular_clas ltc(5);
    int x = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            ltc.set(i, j, x);
        }
    }
    ltc.display();
    return 0;
}
