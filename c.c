#include <stdio.h>

int ptrsearch(int *array,int element,int n)
{
    int i;

    int b = 1;
    for (i=0;*(array+i)==element&&i < n;++i)
        b = 0;
    if (b)
        return -1;
    for(i=0;*(array+i)!=element;++i);
    return i;
}

int ptrlarge(int *array,int startpoint,int n)
{
    int largest;
    int i;

    largest=*(array+startpoint);

    for(i=1+startpoint;i!=n;++i)
    {
        if (*(array+i)>largest)
            largest = *(array+i);
    }
    return largest;
}

int ptrsmall(int *array,int startpoint, int n)
{
    int smallest;
    int i;

    smallest=*(array+startpoint);

    for(i=1+startpoint;i!=n;++i)
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

void csort(int *arr,int n)
{
    int i=0;
    int spoint=0;
    int smallest;
    int found;

    while(i!=n)
    {   
        smallest=ptrsmall(arr,spoint,n);
        found=ptrsearch(arr,smallest,n);
        cswap((arr+spoint),(arr+found));
        ++spoint;
        ++i;
    }
}

int sizet(int arr[])
{
    return sizeof(arr)/sizeof(int);
}

int main()
{
    int arr[100];
    int size;

    printf("size:");
    scanf("%d",&size);
    printf("input:\n");

    for(int i=0;i<size;++i)
        scanf("%d",&arr[i]);
        
    csort(arr,size);
    printf("output:\n");
    for (int p=0;p<size;++p)
        printf("%d\n",arr[p]);
    int array[] = {1, 2, 34, 5};
    printf("\n%d",sizet(array));
}
