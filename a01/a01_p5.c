/*JSTK-320111
a1_p5_m1.c
Tudor Cristian Maiereanu
tumaierean@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 478;
    float b= -29.7949954;
    char c='j';
    double d=946.3969843;
    printf ("The value of a over 9 places is %9d\n", a ) ;
    printf ("The value of b over 11 places is %11.3f\n", b ) ;
    printf ("The value of character c is %c\n", c ) ;
    printf ("The value of d over 9 places is %.5lf\n", d ) ;

    return 0;
}
