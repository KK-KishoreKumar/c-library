#include"clibrary.h"
#include <stdio.h>

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
}