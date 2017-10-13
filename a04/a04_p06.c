/*JSTK-320111
a4_p6_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int posmin(int v[50], int n)
{
    int i,min,position;
    min=v[1];
    /*we assign the first value to the minimum value*/
    for(i=1;i<=n;i++)
        if(v[i]<min)
            /*we verify which is the smaller value*/
            min=v[i];
     for(i=1;i<=n;i++)
        if(v[i]==min)
            position=i;
    return position;
}
int main()
{
    int v[50],n,i;
    printf("Enter the value of n:");
    scanf(" %d", &n);
    for(i=1;i<=n;i++)
    {
        /*we enter the values of the array*/
        printf("v[%d]=", i);
        scanf(" %d", &v[i]);
    }
    /*we print the value*/
     for(i=1;i<=n;i++)
        printf("%d ",v[i]);
    printf(" \n");
    printf("The minimum value is on position %d of the array", posmin(v,n));
    return 0;
}
