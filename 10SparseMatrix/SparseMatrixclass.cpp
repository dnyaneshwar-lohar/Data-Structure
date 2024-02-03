#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

class SparseMatrixclass
{
public:
    struct Element
    {
        int i, j, x;
    };

    struct SparseMatrix
    {
        int m, n, num;
        struct Element *elements;
    };

    SparseMatrix Matrix;

    void Create()
    {
        cout << "Enter Dimensions" << endl;
        cin >> Matrix.m >> Matrix.n;
        cout << "Number of non-zero elements" << endl;
        cin >> Matrix.num;

        Matrix.elements = new struct Element[Matrix.num];

        cout << "Enter non--zero elements" << endl;

        for (int i = 0; i < Matrix.num; i++)
        {
            cin >> Matrix.elements[i].i >> Matrix.elements[i].j >> Matrix.elements[i].x;
        }
    }

    void display()
    {
        int i, j, k = 0;

        for (int i = 0; i < Matrix.m; i++)
        {
            for (int j = 0; j < Matrix.n; j++)
            {
                if (Matrix.elements[k].i == i && Matrix.elements[k].j == j)
                {
                    cout << Matrix.elements[k].x << " ";
                    k++;
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }

    void add(struct SparseMatrix *Matrix1, struct SparseMatrix *Matrix2, struct SparseMatrix *Matrix3)
    {
        if (Matrix1->m == Matrix2->m && Matrix1->n == Matrix2->n)
        {
            Matrix3->m = Matrix1->m;                    // i
            Matrix3->n = Matrix2->n;                    // j
            Matrix3->num = Matrix1->num + Matrix2->num; // k
            Matrix3->elements = new struct Element[Matrix3->num];

            int i = 0, j = 0, k = 0;
            while (i < Matrix1->num || j < Matrix2->num)
            {
                if (Matrix1->elements[i].i < Matrix2->elements[j].i)
                {
                    Matrix3->elements[k].i = Matrix1->elements[i].i;
                    Matrix3->elements[k].j = Matrix1->elements[i].j;
                    Matrix3->elements[k].x = Matrix1->elements[i].x;
                    i++;
                    k++;
                }
                else if (Matrix1->elements[i].i > Matrix2->elements[j].i)
                {
                    Matrix3->elements[k].i = Matrix2->elements[j].i;
                    Matrix3->elements[k].j = Matrix2->elements[j].j;
                    Matrix3->elements[k].x = Matrix2 ->elements[j].x;
                    j++;
                    k++;
                }
                else if (Matrix1->elements[i].i == Matrix2->elements[j].i)
                {

                    if (Matrix1->elements[i].j < Matrix2->elements[j].j)
                    {
                        Matrix3->elements[k].i = Matrix1->elements[i].i;
                        Matrix3->elements[k].j = Matrix1->elements[i].j;
                        Matrix3->elements[k].x = Matrix1->elements[i].x;
                        i++;
                        k++;
                    }
                    else if (Matrix1->elements[i].j > Matrix2->elements[j].j)
                    {
                        Matrix3->elements[k].i = Matrix2->elements[j].i;
                        Matrix3->elements[k].j = Matrix2->elements[j].j;
                        Matrix3->elements[k].x = Matrix2->elements[j].x;
                        j++;
                        k++;
                    }
                    else
                    {
                        Matrix3->elements[k].i = Matrix1->elements[i].i;
                        Matrix3->elements[k].j = Matrix1->elements[i].j;
                        Matrix3->elements[k].x = Matrix1->elements[i].x + Matrix2->elements[j].x;
                        i++;
                        j++;
                        k++;
                    }
                }
            }
        }
    }
};
