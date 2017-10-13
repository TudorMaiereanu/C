/*JSTK-320111
a2_p3_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second, total=0;
    printf("Enter the hours: ");
    scanf ("%d",&hour);
    printf("Enter the minutes: ");
    scanf ("%d",&minute);
    printf("Enter the seconds: ");
    scanf ("%d",&second);
    total= hour*3600 + minute*60 + second;
    printf("The total number of seconds is %d\n", total);
    return 0;
}
