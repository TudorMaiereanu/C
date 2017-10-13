/*JSTK-320111
a2_p2_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float float1, float2, sumfloat, differenceinteger, square1;
    printf("Enter the first float: ");
    scanf("%f", &float1);
    printf("The first float is %f\n", float1);
    printf("Enter the second float: ");
    scanf("%f", &float2);
    printf("The second float is %f\n", float2);
    sumfloat= float1+float2;
    printf("The sum of the two floats is %f\n", sumfloat);
    differenceinteger=float2-float1;
    printf("The difference (second float - first float) of the two floats is %f\n", differenceinteger);
    square1=float1*float1;
    printf("The square of the first float is %f\n", square1);

    int integer1, integer2, suminteger, productinteger;
    printf("Enter the first integer: ");
    scanf("%d", &integer1);
    printf("The first integer is %d\n", integer1);
    printf("Enter the second integer: ");
    scanf("%d", &integer2);
    printf("The second integer is %d\n", integer2);
    suminteger=integer1+integer2;
    productinteger=integer1*integer2;
    printf("The sum of the integers is %d and the product of the integers is %d\n", suminteger, productinteger);

    char x,y;
    int sumchar, productchar;
    printf (" Enter first char : ");
    scanf (" %c", &x);
    printf ("The decimal_value of the first char : %d\n", x );
    printf (" Enter second char : ");
    scanf (" %c", &y);
    printf ("The decimal_value of the second char : %d\n", y );
    sumchar=x+y;
    productchar=x*y;
    printf("The decimal_sum of the chars is %d and the decimal_product of the char is %d\n", sumchar, productchar);
    printf("The char_sum of the chars is %c and the char_product of the char is %c\n", sumchar, productchar);

    return 0;
}
