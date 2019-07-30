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

int main()
{
    printf("This is a program for testing purpose\n");
    int arr[] = {2, 3, 4, 1, 5};
    int found = ptrsearch(arr, 10, 5);
    printf("%d", found);
    int ok=-1;
    printf("%d",ok);
}