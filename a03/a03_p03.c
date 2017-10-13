/*JSTK-320111
a3_p3_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf (" Enter the char: ");
    scanf (" %c", &ch);
    printf ("The char you entered is %c\n", ch);
    /*a memorises  the decimal value of character ch*/
    int a=(int)ch;
    printf("The decimal value of %c is %d\n", ch, a);
    printf(" \n");
    /*now I will check if a is a lowercase alphabetic character*/
        if(a>=97 && a<=122)
        printf("The character %c you entered is a lowercase alphabetic character", ch);
        /*the decimal values of the lowercase alphabetic characters are between 97 and 122*/
        else
        printf ("The character %c you entered is not a lowercase alphabetic character", ch);
    printf(" \n");
    return 0;
}
