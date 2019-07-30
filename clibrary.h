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