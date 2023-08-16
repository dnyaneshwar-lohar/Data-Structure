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
int main()
{
    struct Array arr = {{4, 8, 9, 3, 5},20,5};
    int p[5]={1,2,3,4,5};
    // Append(&arr,10);
    // Insert(&arr,4,9);
    // printf("%d",Delete(&arr,3));
    // printf("%d\n",LinearSearch(arr,9));
    // printf("%d\n",LinearSearch2(&arr,9));
    // printf("%d\n",LinearSearch3(&arr,9));
    printf("%d\n",BinarySearch(arr,4));
    printf("%d\n",RBinSearch(arr.A,0,arr.length,4));

    printf("%d\n",Get(&arr, 4));
    Set(&arr,4,12);

    printf("%d\n",Max(&arr));
    printf("%d\n",Min(&arr));

    printf("%d\n",Sum(&arr));
    printf("%d\n",RSum(&arr,arr.length-1));

    Display(arr);


    printf("%d\n", arr.length);

    return 0;
}