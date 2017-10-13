/*JSTK-320111
a2_p5_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_val;
    int va1;
    printf(" Enter the value of va1: ");
    scanf("%d", &va1);
    ptr_val= &va1;
    printf (" The value of the va1 entered is : %d\n", va1 );
    printf (" Address of va1 is : %p\n", ptr_val );
    printf (" \n");
    *ptr_val= *ptr_val + 1;
    printf ("After the addition: \n");
    printf (" The new value of the va1 is : %d\n", va1 );
    printf (" New address of va1 is : %p\n", ptr_val );
    return 0;
}
