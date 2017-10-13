/*JSTK-320111
a3_p7_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf ("Enter the char: c=");
    scanf (" %c", &ch);
    int n=-1;
    /*we take n negative so that the loop starts*/
    /*n must be positive so that the code can be computed*/
    while(0>=n)
    {
    printf("Enter a positive (non zero) integer: n=");
    scanf (" %d", &n);
    }
    int i;
    /*we print every character from ch to ch+n*/
    for(i=0;i<=n;i++)
    {
        printf("%c\n", ch);
        ch=ch+1;
    }
    return 0;
}
