/*
    JTSK-320111
    a5_p8.c
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
    /*we enter each value of the matrix*/
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
        {
            printf("%d ", a[i][j]);
        }
        printf(" \n");
    }
    printf("\n");

    printf("The main diagonal is: \n");
    /*we are going to prin a[1][1], a[2][2] ... a[n][n] */
    for(i=1;i<=n;i++)
    {
        printf("%d ", a[i][i]);
    }
    printf("\n");
    return 0;

}
