/*
    JTSK-320111
    a5_p1.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[12][12];
    int lower, upper, n, j;
    printf("Enter the lower input: ");
    scanf("%d", &lower);
    printf("Enter the upper input: ");
    scanf("%d", &upper);
    /*n is the difference between the inputs*/
    n=upper-lower;
    for(j=0; j<=n; j++)
    {
        /*we use 3 columns to print the number, its square and ist cube*/
        a[j][1]=lower;
        a[j][2]=lower*lower;
        a[j][3]=lower*lower*lower;
        lower++;
    }
    printf("       Number        Square          Cube\n");
    for(j=0;j<=n;j++)
    {
        printf(" %12.3f ", (float)a[j][1]);
        printf(" %12.3f ", (float)a[j][2]);
        printf(" %12.3f ", (float)a[j][3]);
        printf("\n");
    }
    return 0;
}
