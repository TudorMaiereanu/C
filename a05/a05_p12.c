/*
    JTSK-320111
    a5_p12.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myreplace(char str[70], char c, char e)
{
    char *i;
    printf("The initial string is: %s", str);
    /*we check all the characters of the string*/
    for(i=str;*i!='\0';i++)
    {
        /*when we find one, we switch it with the new one*/
        if(*i==c)
        {
            *i=e;
        }
    }
    printf("The changed string is: %s", str);
    return ;
}
int main()
{
    char str[70], c, e;
    /*we enter the loop*/
    while(1)
    {
        printf("Enter the string: ");
        fgets(str, sizeof(str), stdin);
        /*we check for the string to be equal to 'quit' in order to stop compiling if that happens*/
        if (strcmp(str, "quit\n") == 0)
        {
            return 1;
        }
        printf("Enter the character you want to change: ");
        scanf(" %c", &c);
        printf("Enter the new character: ");
        scanf(" %c", &e);
        myreplace(str, c, e);
        getchar();
    }

    return 0;
}
