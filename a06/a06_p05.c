/*
    JTSK-320111
    a6_p5.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fun(double a[], int n)
{
    int i;
    double min=a[0],max=a[0];
    double norm, square_sum=0;
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
    for(i=0;i<n;i++)
    {
        square_sum+=a[i]*a[i];
    }
    norm=sqrt(square_sum);
    printf("The highest value is: %lf\n", max);
    printf("The lowest value is: %lf\n", min);
    printf("The norm of the function is: %lf\n", norm);
    return;
}

int main()
{
    int n,i;
    double *a;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    a = ( double *) malloc(sizeof(double )*n) ;

    printf("Enter the values of the array:\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d]=", i);
        scanf("%lf", &a[i]);
    }
    printf("\n");
    fun(a,n);
    free(a);
    return 0;
}
