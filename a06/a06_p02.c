/*
    JTSK-320111
    a6_p2.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void triple(int arr[6], int size)
{
    int i;
    printf("The array's elements multiplied by 3 are the following:");
    for(i=0;i<size;i++)
        arr[i]=arr[i]*3;
    for(i=0;i<size;i++)
    printf(" %d ", arr[i]);
    return ;
}
int main()
{
    int a[6]={3,2,9,3,7,12},size,i;
    size=6;
    printf("These are the initial values:");
    for(i=0;i<size;i++)
        printf(" %d ", a[i]);
    printf("\n");
    triple(a,size);
    return 0;
}
