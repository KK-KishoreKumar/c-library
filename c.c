#include <stdio.h>

int csearch(int array[],int element)
{
    int i;
    for(i=0;array[i]!=element;++i)
        ;
    return i;
}

int ptrsearch(int *array,int element)
{
    int i;
    for(i=0;*(array+i)!=element;++i)
        ;
    return i;
}

int clarge(int array[],int startpoint)
{
    int largest;
    int i;
    largest=array[0+startpoint];
    for(i=1+startpoint;array[i]!='\0';++i)
    {
        if (array[i]>largest)
            largest = array[i];
    }
    return largest;
}

int ptrlarge(int *array,int startpoint)
{
    int largest;
    int i;
    largest=*(array+startpoint);
    for(i=1+startpoint;*(array+i)!='\0';++i)
    {
        if (*(array+i)>largest
    )
            largest = *(array+i);
    }
    return largest;
}

int csmall(int array[],int startpoint)
{
    int smallest;
    int i;
    smallest=array[0+startpoint];
    for(i=1+startpoint;array[i]!='\0';++i)
    {
        if (array[i]<smallest)
            smallest = array[i];
    }
    return smallest;
}

int ptrsmall(int *array,int startpoint)
{
    int smallest;
    int i;
    smallest=*(array+startpoint);
    for(i=1+startpoint;*(array+i)!='\0';++i)
    {
        if (*(array+i)<smallest)
            smallest = *(array+i);
    }
    return smallest;
}

void cswap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int arrsize(int array[])
{
    int i;
    for(i=0;array[i]!='\0';++i)
        ;
    return i-1;
}

void csort(int *arr)
{
    int spoint=0;
    int smallest;
    int found;
    while(*(arr+(spoint))!='\0')
        smallest=ptrsmall(arr,spoint);
        found=ptrsearch(arr,smallest);
        cswap((arr+spoint),(arr+found));
        ++spoint;
}
int main()
{
}
