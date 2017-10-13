/*JSTK-320111
a1_p4_m1.c
Tudor Cristian Maiereanu
tumaierean@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=37, b=14;
    int sum,dif,prod, rem;
    double div;
    sum=a+b;
    dif=a-b;
    prod=a*b;
    rem=a%b;
    div=(float)a/(float)b;
    printf("The sum is %d , the product is %d, the difference is %d\n", sum, prod, dif);
    printf("The division result is %lf\n", div);
    printf("The remainder is %d\n", rem);
    return 0;
}
