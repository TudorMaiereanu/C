/*
    JTSK-320111
    a5_p9.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50][50],i,j,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    /*we scan the elements of the matrix*/
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The entered matrix is: \n");
    /*we print the matrix*/
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
            printf("%d ", a[i][j]);
        printf(" \n");
        }
    printf("\n");

    printf("The secondary diagonal is: \n");
    /*we are going to prin a[1][n], a[2][n-1] ... a[n][1]*/
    for(i=1;i<=n;i++)
    {
        for(j=n;0<j;j--)
        {
            printf("%d ", a[i][j]);
            i++;
        }
    }
    printf("\n");
    return 0;

}
