#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("\nElement are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x; 
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index <= arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index)
{
    int x = 0;
    if(index>=0 && index<=arr->length)
    {
        x=arr->A[index];
        for(int i=index; i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
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

int LinearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if(key == arr.A[i])
            return i;
    }
    return -1;
    
}

int LinearSearch2(struct Array *arr,int key)
{
    int i;
    for ( i = 0; i < arr->length; i++)
    {
        if(key == arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}

int LinearSearch3(struct Array *arr,int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if(key == arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            return 0;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while (l<=h)
    {
        mid=int((l+h)/2);
        if (key==arr.A[mid])
        {
            return mid;
        }
        else if (key<arr.A[mid])
        {
            h=mid-1;
        }
        else if (key>arr.A[mid])
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

int Get(struct Array *arr,int index)
{
    if(index>=0 && index<arr->length)
    {
        return(arr->A[index]);
    }
    return -1;
}

void Set(struct Array *arr,int index,int x)
{
    if(index >= 0 && index < arr->length)
    {
        arr->A[index]=x;
    }
}

int Max(struct Array *arr)
{
    int max=arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
        if(arr->A[i]>max)
        {
            max=arr->A[i];
        }
    }
    return max;
}

int Min(struct Array *arr)
{
    int min=arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
        if(arr->A[i]<min)
        {
            min=arr->A[i];
        }
    }
    return min;
}

int Sum(struct Array *arr)
{
    int Total=0;
    for (int i = 0; i < arr->length; i++)
    {
        Total+=arr->A[i];
    }
    return Total;
}

int RSum(struct Array *arr,int n)
{
    if(n<0)
        return 0;
    else
        return RSum(arr,n-1) + arr->A[n];
}

void Reverse(struct Array *arr)
{
    int B[arr->length];
    for (int i = arr->length-1,j = 0; i >= 0; i--,j++)
    {
        B[j]=arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i]=B[i];
    }
    
}

void Reverse2(struct Array *arr)
{
    int temp;
    for (int i = 0,j=arr->length-1; j>i; j--,i++)
    {
        // temp = arr->A[i];
        // arr->A[i]=arr->A[j];
        // arr->A[j]=temp;

        swap(arr->A[i],arr->A[j]);
    }
}

void Leftshift(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        if(i==arr->length-1)
            arr->A[i]=0;
        else
            arr->A[i]=arr->A[i+1];
    }
    
}

void Leftrotate(struct Array *arr)
{
    int f=arr->A[0];
    for (int i = 0; i < arr->length; i++)
    {
        if(i==arr->length-1)
            arr->A[i]=f;
        else
            arr->A[i]=arr->A[i+1];
    }
    
}

void InsertSort(struct Array *arr,int x)
{
    int i=arr->length-1;

    if(arr->length == arr->size)
        return;
    while(i>0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct Array *arr)
{
    int i;
    for(i=0;i<arr->length-1;i++)
    {
        if (arr->A[i]>arr->A[i+1]) return -1;
    }
    return 1;
}

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while (i<j)
    {
        while (arr->A[i]<0){i++;}
        while (arr->A[j]>=0){j--;}
        if(i<j)swap(arr->A[i],arr->A[ j]);
    }
    
}

int main()
{
    struct Array arr = {{2,-3,25,10,-15,-7},10,6};
    int p[5]={1,2,3,4,5};
    // Append(&arr,10);

    // Insert(&arr,4,9);

    // printf("%d",Delete(&arr,3));

    // printf("%d\n",LinearSearch(arr,9));
    // printf("%d\n",LinearSearch2(&arr,9));
    // printf("%d\n",LinearSearch3(&arr,9));
    
    // printf("%d\n",BinarySearch(arr,4));
    // printf("%d\n",RBinSearch(arr.A,0,arr.length,4));

    // printf("%d\n",Get(&arr, 4));
    // Set(&arr,4,12);

    // printf("%d\n",Max(&arr));
    // printf("%d\n",Min(&arr));

    // printf("%d\n",Sum(&arr));
    // printf("%d\n",RSum(&arr,arr.length-1));
    
    // Reverse(&arr);
    // Reverse2(&arr);

    // Leftshift(&arr);
    // Leftshift(&arr);
    // Leftrotate(&arr);
    // Leftrotate(&arr);

    // InsertSort(&arr,9);
    // isSorted(&arr);

    Rearrange(&arr);
    Display(arr);

    // printf("%d\n", arr.length);

    return 0;
}