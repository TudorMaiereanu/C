/*
    JTSK-320111
    a5_p10.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/*in this function we find the sum, the difference, the product, the division of two numbers*/
void sumdiffproddiv(double a, double b, double *sum, double *diff, double *prod, double *div)
{
    /* using * we are returning the values by address*/
    printf (" Value of sum: %lf + %lf =  %lf\n", a, b, *sum=a+b );
    printf (" Value of difference: %lf - %lf =  %lf\n", a, b, *diff=a-b );
    printf (" Value of product: %lf x %lf =  %lf\n", a, b, *prod=a*b );
    printf (" Value of division: %lf / %lf =  %lf\n", a, b, *div=a/b );
    return ;

}
int main()
{
    double a,b,sum,diff,prod,div;
    printf("Enter a=");
    scanf("%lf", &a);
    printf("Enter b=");
    scanf("%lf", &b);
    sumdiffproddiv(a,b, &sum, &diff, &prod, &div);
    return 0;
}
