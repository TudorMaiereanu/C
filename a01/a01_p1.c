/*JSTK-320111
a1_p1_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float answer; /*The result of our calculation*/
    float a=1, b=8;
    answer=a/b;
    printf("The value of 1/8 is %f\n",answer);
    /*The result was 0,000 because the answer was rounded to the closest integer, because both 1 and 8 are integers*/
    /*I declared a,b float to be 1 and 8, so that the answer would be also a float*/
    return 0;
}
