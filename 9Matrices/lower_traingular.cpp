#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct lower_traingular
{
    int *A;
    int n;
};

void set(struct lower_traingular *m,int i,int j,int x){
    if (i>=j)
    {
        m->A[i*(i-1)+(j-1)] = x;
    }
    
}

int get(struct lower_traingular *m,int i,int j)
{
    if (i>=j)
    {
    return m->A[i*(i-1)+(j-1)];
    }
    else{
        return 0;
    }
}

void display(struct lower_traingular m){
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i>=j)
            {
                cout<<m.A[i*(i-1)+(j-1)]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;   
    }
}
int main(int argc, char const *argv[])
{
    struct lower_traingular m;
    int n = 5;
    m.A=new int[(n*(n+1))/2];
    m.n=n;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            set(&m,i,j,x++);
        }
    }
    display(m);
    return 0;
}

