#include <stdio.h>

void arrswap(int *array,int n1,int n2)
{
    int temp=*(array+n1);
    *(array+n1)=*(array+n2);
    *(array+n2)=temp;
}

void cswap(int *a, int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[2]={20,2};
    // cswap(arr,arr+1);
    arrswap(arr,0, 1);
    printf("%d %d",arr[0],arr[1]);
}