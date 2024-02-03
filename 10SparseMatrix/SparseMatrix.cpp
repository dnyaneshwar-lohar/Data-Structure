#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct Element
{
    int i, j, x;
};

struct SparseMatrix
{
    int m, n, num;
    struct Element *elements;
};

void Create(struct SparseMatrix *s)
{
    cout << "Enter Dimensions" << endl;
    cin >> s->m >> s->n;
    cout << "Number of non-zero elements" << endl;
    cin >> s->num;

    s->elements = new struct Element[s->num];

    cout << "Enter non--zero elements" << endl;

    for (int i = 0; i < s->num; i++)
    {
        cin >> s->elements[i].i >> s->elements[i].j >> s->elements[i].x;
    }
}

void display(struct SparseMatrix s)
{
    int i, j, k = 0;

    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (s.elements[k].i == i && s.elements[k].j == j)
            {
                cout << s.elements[k].x << " ";
                k++;
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    SparseMatrix s;
    Create(&s);
    display(s);
    return 0;
}
