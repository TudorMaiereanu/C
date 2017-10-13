/*JSTK-320111
a2_p4_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    printf("Enter the centigrades: ");
    scanf ("%f",&celsius);
    float fahrenheit= 9/5 * celsius + 32;
    printf("%f centigrades equal to %f fahrenheit", celsius, fahrenheit);
    return 0;
}
