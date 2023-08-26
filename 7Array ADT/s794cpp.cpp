#include<iostream>
#include<stdio.h>
#include<stdlib.h>

class Array
{
private:
    int *A;
    int size;
    int length;
public:
    Array()
    {
        size = 10;
        length=0;
        A=new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A=new int[size];
    }

void Display()
{
    printf("\nElement are\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d  ", A[i]);
    }
}

void Append(int x)
{
    if(length<size)
        A[length++]=x; 
}

void Insert(int index,int x)
{
    int i;
    if(index>=0 && index <= length)
    {
        for(i=length;i>index;i--)
        {
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    }
}

int Delete(int index)
{
    int x = 0;
    if(index>=0 && index<=length)
    {
        x=A[index];
        for(int i=index; i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        length--;
        return x;
    }

    return 0; 
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(int key)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if(key == A[i])
            return i;
    }
    return -1;
    
}

int LinearSearch2(int key)
{
    int i;
    for ( i = 0; i < length; i++)
    {
        if(key == A[i])
        {
            swap(&A[i],&A[i-1]);
            return i-1;
        }
    }
    return -1;
}

int LinearSearch3(int key)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if(key == A[i])
        {
            swap(&A[i],&A[0]);
            return 0;
        }
    }
    return -1;
}

int BinarySearch(int key)
{
    int l,h,mid;
    l=0;
    h=length-1;
    while (l<=h)
    {
        mid=int((l+h)/2);
        if (key==A[mid])
        {
            return mid;
        }
        else if (key<A[mid])
        {
            h=mid-1;
        }
        else if (key>A[mid])
        {
            l=mid+1;
        }
    }
    return -1;  
}

int RBinSearch(int a[],int l, int h, int key)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if (key<a[mid])
        {
           return(RBinSearch(a,l,mid-1,key));
        }
        else
        {
           return(RBinSearch(a,mid+1,h,key));
        }
        
    }
    return -1;
} 

int Get(int index)
{
    if(index>=0 && index<length)
    {
        return(A[index]);
    }
    return -1;
}

void Set(int index,int x)
{
    if(index >= 0 && index < length)
    {
        A[index]=x;
    }
}

int Max()
{
    int max=A[0];
    for (int i = 1; i < length; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}

int Min()
{
    int min=A[0];
    for (int i = 1; i < length; i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    return min;
}

int Sum()
{
    int Total=0;
    for (int i = 0; i < length; i++)
    {
        Total+=A[i];
    }
    return Total;
}

int RSum(int n)
{
    if(n<0)
        return 0;
    else
        return RSum(n-1) + A[n];
}

void Reverse()
{
    int B[length];
    for (int i = length-1,j = 0; i >= 0; i--,j++)
    {
        B[j]=A[i];
    }
    for (int i = 0; i < length; i++)
    {
        A[i]=B[i];
    }
    
}

void Reverse2()
{
    int temp;
    for (int i = 0,j=length-1; j>i; j--,i++)
    {
        // temp = A[i];
        // A[i]=A[j];
        // A[j]=temp;

        swap(&A[i],&A[j]);
    }
}

void Leftshift()
{
    for (int i = 0; i < length; i++)
    {
        if(i==length-1)
            A[i]=0;
        else
            A[i]=A[i+1];
    }
    
}

void Leftrotate()
{
    int f=A[0];
    for (int i = 0; i < length; i++)
    {
        if(i==length-1)
            A[i]=f;
        else
            A[i]=A[i+1];
    }
    
}

void InsertSort(int x)
{
    int i=length-1;

    if(length == size)
        return;
    while(i>0 && A[i]>x)
    {
        A[i+1] = A[i];
        i--;
    }
    A[i+1]=x;
    length++;
}

int isSorted()
{
    int i;
    for(i=0;i<length-1;i++)
    {
        if (A[i]>A[i+1]) return -1;
    }
    return 1;
}

void Rearrange()
{
    int i,j;
    i=0;
    j=length-1;

    while (i<j)
    {
        while (A[i]<0){i++;}
        while (A[j]>=0){j--;}
        if(i<j)swap(&A[i],&A[j]);
    }
    
}

};

int main()
{
    int ch, sz;
    int x,index,key;

    printf("Enter Size of Array");

    scanf("%d",&sz);

    Array arr1(sz);

    do
    {
        printf("\n\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                printf("Enter an element to be added ");
                scanf("%d",&x);

                printf("Enter at which index to to be added ");
                scanf("%d",&index);

                arr1.Insert(index,x);

                break;
            
            case 2:
                printf("Enter index to be deleter ");
                scanf("%d",&index);

                arr1.Delete(index);

                break;

            case 3:
                printf("Enter Elemnt to be searched");
                scanf("%d",&key);

                printf("Found at index=%d",arr1.LinearSearch(key));

                break;
            case 4:
                printf("Sum= %d",arr1.Sum());
                break;
            case 5:
                arr1.Display();
                break;
        default:
            break;
        }

    } while (ch<6);
    
    return 0;
}
