/*
    JTSK-320111
    a5_p6.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

double maxdiff(double a[], int n)
{
    int i;
    double min=a[0],max=a[0];
    double d;
    /*in the first loop we search the max value*/
    for (i=0; i<n; i++)
    {
        if(max <a[i])
        {
            max=a[i];
        }
    }
    /*in the second loop we search for the min value*/
    for (i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    d=max-min;
    return d;
}

int main()
{
    int i,n;
    double *a;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    /*we use dynamic memory allocation*/
    a = (double*) malloc(sizeof(double)*n);
    if (a == NULL)
    {
       exit(1);
    }
    /*here we scan every element of the array*/
    for(i=0;i<n;i++)
    {
        printf("Enter element a[%d]=", i);
        scanf("%lf", &a[i]);
    }
    printf("The difference between max and min value is %lf", maxdiff(a,n));
    /*we use dynamic memory deallocation*/
    free(a);
    return 0;

}

