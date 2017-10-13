/*JSTK-320111
a2_p1_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer;
    printf("Enter the integer: ");
    scanf("%d", &integer);
    printf("The decimal notation of the integer you entered is %d\n", integer);
    printf("The octal notation of the integer you entered is %o\n", integer);
    printf("The hexadecimal notation of the integer you entered is %x\n", integer);

    return 0;
}
