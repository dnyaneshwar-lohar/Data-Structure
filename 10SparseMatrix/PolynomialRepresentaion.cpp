#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct Terms
{
    int Coefficent;
    int exponent;
};

struct Polynomial
{
    int n;
    struct Terms *t;
};

void create(struct Polynomial *p)
{

    cout << "Enter Number of terms" << endl;
    cin >> p->n;

    p->t = new struct Terms[p->n];

    for (int i = 0; i < p->n; i++)
    {
        cout << "Enter coefficent and Exponent of " << i + 1 << " term" << endl;
        cin >> p->t[i].Coefficent >> p->t[i].exponent;
    }
}

int pow(int x, int exponent)
{
    // if (exponent == 0)
    // {
    //     return x;
    // }
    // else
    // {
    //     return x * pow(x,exponent--);
    // }

    int value = 1;

    for (int i = 0; i < exponent; i++)
    {
        value *= x;
    }
    return value;
}

int evaluate(struct Polynomial *p, int x)
{
    int sum = 0;
    for (int i = 0; i < p->n; i++)
    {
        sum += p->t[i].Coefficent * pow(x, p->t[i].exponent);
    }
    return sum;
}

void display(struct Polynomial *p)
{
    cout << "p(x)=";
    for (int i = 0; i < p->n; i++)
    {
        cout << p->t[i].Coefficent << "x^" << p->t[i].exponent;
        if (i != p->n - 1)
            cout << " + ";
    }
    cout << endl;
}

void addTwoPolynomial(struct Polynomial *p1, struct Polynomial *p2, struct Polynomial *p3)
{
    p3->n = p1->n + p2->n;
    p3->t = new struct Terms[p3->n];
    int i = 0, j = 0, k = 0;
    while (i < p1->n || j < p2->n)
    {
        if (p1->t[i].exponent > p2->t[j].exponent)
        {
            p3->t[k].Coefficent = p1->t[i].Coefficent;
            p3->t[k].exponent = p1->t[i].exponent;
            i++;
            k++;
        }
        else if (p2->t[j].exponent > p1->t[i].exponent)
        {
            p3->t[k].Coefficent = p2->t[j].Coefficent;
            p3->t[k].exponent = p2->t[j].exponent;
            j++;
            k++;
        }
        else
        {
            p3->t[k].Coefficent = p1->t[i].Coefficent + p2->t[j].Coefficent;
            p3->t[k].exponent = p1->t[i].exponent;
            i++;
            j++;
            k++;
        }
    }
    for (k; k < p3->n; k++)
    {
        p3->t[k].Coefficent = 0;
        p3->t[k].exponent = 0;
    }
}

int main(int argc, char const *argv[])
{
    Polynomial p1;
    create(&p1);
   
    cout << evaluate(&p1, 2);

    Polynomial p2;
    create(&p2);
    
    cout << evaluate(&p2, 2);
    cout << endl;

    Polynomial p3;
    addTwoPolynomial(&p1, &p2, &p3);
    display(&p1);
    display(&p2);
    display(&p3);
    cout << evaluate(&p3, 2);
    cout << endl;

    cout << evaluate(&p1, 2) + evaluate(&p2, 2);

    return 0;
}
