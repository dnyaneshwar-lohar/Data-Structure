#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

class diagonal_class
{
private:
    int n;
    int *A;
public:
    diagonal_class(int n){
        this->n = n;
        A = new int[n];
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display(); 
    ~diagonal_class(){
        delete []A;
    };
};

void diagonal_class:: Set(int i,int j,int x){
    if (i == j)
    {
        A[i-1] = x;
    }
}

int diagonal_class :: Get(int i,int j){
    if (i==j)
    {
        return A[i-1];     
    }
    else
    {
        return 0;
    }
}

void diagonal_class :: Display(){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==j)
            {
                cout<<A[i-1]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    
}