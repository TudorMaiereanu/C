/*JSTK-320111
a3_p6_m1.c
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
    /*we print the character until i equals to n*/
    int i;
    for(i=1;i<=n;i++)
        printf("%c ", ch);
    return 0;
}
