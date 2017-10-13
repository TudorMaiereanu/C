/*JSTK-320111
a3_p4_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=-1;
    /*we take a negative so that the loop starts*/
    /*a must be positive so that the code can be computed*/
    while(0>=a)
    {
    printf("Enter a positive value: ");
    scanf (" %d", &a);
    }
    /*for a=1 we must print "minute" not "minutes"*/
    if(a>=1)
    printf("1 minute = 60 seconds\n");
    /*we start from i=2 because we have already printed for i=1*/
    int i=2;
    if(a>1)
    {
    /*we print x minutes = x seconds until i is equal to a*/
        while (i<=a)
        {
        printf("%d minutes = %d seconds\n", i, i*60);
        i++;
        }
    }
    return 0;
}
