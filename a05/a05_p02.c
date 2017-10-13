/*
    JTSK-320111
    a5_p1.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[80];
    int i,j,l;
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    /*i counts the letters*/
    l=strlen(s);
    for(i=0;i<=l;i++)
        {
        /*j counts the number of spaces*/
        for(j=0;j<=i;j++)
            printf(" ");
        printf("%c", s[i]);
        printf("\n");
        }
    return 0;
}
