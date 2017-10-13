/*
    JTSK-320111
    a6_p3.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_upper(char s[100])
{
    char *i;
    int u=0;
    {
        for(i=s; i!='\0'; i++)
        {
            if(*i>='A' && *i<='Z')
                {u++;}
        }
    }
    return u;
}
int main()
{
    char s[100];
    /*ok checks if the string is empty or not*/
    while(1)
    {
        printf("Enter the string: ");
        fgets(s, sizeof(s), stdin);
        if(strcmp(s, "\n")==0)
        {
            return 1;
        }
        else
        {
            printf("The number of the upper case letters from the above string is: %d\n", count_upper(s));
            printf("\n");
        }
    }
    return 0;
}
