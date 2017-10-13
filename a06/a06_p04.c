/*
    JTSK-320111
    a6_p4.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void triple(int arr[], int n)
{
    int i;
    printf("The array's elements multiplied by 3 are the following:");
    for(i=0;i<n;i++)
        arr[i]=arr[i]*3;
    for(i=0;i<n;i++)
    printf(" %d ", arr[i]);
    return ;
}
int main()
{
    int n,i;
    int *a;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    a = ( int *) malloc(sizeof(int )*n) ;
    printf("These are the initial values:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n");
    triple(a,n);
    printf("\n");
    free(a);
    return 0;
}

