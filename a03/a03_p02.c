/*JSTK-320111
a3_p2_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer;
    printf("Enter the value of the integer: ");
    scanf("%d", &integer);
    printf("The value you entered is %d\n", integer);
    if(integer%7==0 && integer%2==0)
        printf("The number you entered is divisible by 4 and 7");
    else
        printf("The number you entered is not divisible by both 4 and 7");

    return 0;
}
