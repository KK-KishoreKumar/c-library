#include"clibrary.h"
#include <stdio.h>

int main()
{
    int arr[5];
    int n=&(arr)[1]-arr;
    printf("%d",n)
}

