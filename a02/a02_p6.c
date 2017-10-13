/*JSTK-320111
a2_p6_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    float *ptr1, *ptr2, *ptr3;
    printf("Enter the first float a= ");
    scanf("%f", &a);
    printf("The first float is %f\n", a);
    printf("Enter the second float b= ");
    scanf("%f", &b);
    printf("The second float is %f\n", b);
    ptr1= &a;
    ptr2= &a;
    ptr3= &b;
    printf (" \n");
    printf (" Address of ptr1 -> a is : %p\n", ptr1 );
    printf (" \n");
    printf (" Address of ptr2 -> a is : %p\n", ptr2 );
    printf (" \n");
    printf (" Address of ptr3 -> b is : %p\n", ptr3 );
    printf (" \n");
    return 0;
}
