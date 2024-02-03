#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "SparseMatrixclass.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    SparseMatrixclass Matrix1;
    SparseMatrixclass Matrix2;
    SparseMatrixclass Matrix3;
    
    Matrix1.Create();
    Matrix2.Create();
    
    Matrix3.add(&Matrix1.Matrix, &Matrix2.Matrix,&Matrix3.Matrix);

    Matrix3.display();

    return 0;
}
