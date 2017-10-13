/*JSTK-320111
a1_p3_m1.c
Tudor Cristian Maiereanu
tumaierean@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double result; /*The result of our division */
    int divisor=22.0;
    result=7/(float)divisor;
    printf("The answer is %lf\n", result);
    /*I had to change from %d to %lf, because %lf is for double precision variables and %d is for signed decimal integers
    Also I changed the divisor from int to float so that the result should be double*/
    return 0;
}
