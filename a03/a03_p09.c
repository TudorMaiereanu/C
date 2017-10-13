/*JSTK-320111
a3_p9_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int a[50],i,n,sum=0,product=1,am=0;
    /*a[50] is the array*/
    /*i choose 50 because the problem says i can assume that not more than 50 grades will be enterd*/
    printf("Enter the character: c=");
    scanf("%c", &c);
    printf("Enter the integer: n=");
    scanf("%d", &n);
    /*now we enter the grades*/
    for(i=1;i<=n;i++)
    {
    printf("Enter grade number %d: ", i);
    scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++)
    {
    sum=sum+a[i];
    product=product*a[i];
    }
    /*am is the arithmetic mean*/
    am=sum/n;
    switch ((int)c)
    {
    /*the decimal value of p is 112*/
    case 112:
        printf ("The product of the grades is %d",product);
    break ;
    /* the decimal value of s if 115*/
    case 115:
        printf ("The sum of the grades is %d",sum);
    break ;
    default:
        printf ("The arithmetic mean of the grades is %d", am);
    }
    return 0;

}
