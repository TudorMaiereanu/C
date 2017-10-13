/*
    JTSK-320111
    a5_p13.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void mixcase (char *str)
{
    char* i;
    /*we print the initial string*/
    printf("The initial string is %s\n", str);
    /*we replace the lower case letters with the upper case letters*/
    for(i = str; *i != '\0' ; i++)
    {
        if (isupper(*i))
        {
          *i = tolower(*i);
        }
        else
        {
          *i = toupper(*i);
        }
    }
    /*we print the mixed string*/
    printf("The new string is: %s\n", str);
    return ;
}
int main()
{
    char str[80];
    while(1)
    {
        printf("Enter the string: ");
        fgets(str, sizeof(str), stdin);
        if (strcmp(str, "exit\n") == 0)
        {
            return 1;
        }
        else
        {
            mixcase(str);
        }
    }
    return 0;
}
