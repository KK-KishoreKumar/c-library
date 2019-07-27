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
    return i;
}

void csort(int *arr)
{
    int spoint=0;
    int smallest;
    while(arr[spoint+1]!='\0')
        smallest=ptrsmall(arr,spoint);

}
int main()
{
    int arr[]={13,71,213,2};
    int s=ptrsmall(arr,0);
    int found=ptrsearch(arr,s);
    printf("%d %d",found,s);
}
