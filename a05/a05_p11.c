/*
    JTSK-320111
    a5_p11.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/*the function checks for the occurrences*/
int count_char(char *str, char c)
{
    char *i;
    int t = 0;
    for(i=str; *i != '\0'; i++)
    {
        if(*i == c)
        {
            t++;
            /*t counts the occurrences*/
        }
    }
    return t;
}
int main()
{
    char *str;
    int x;
    printf("Input maximum length of string:");
    scanf(" %d", &x);
    /*dynamic allocation*/
    str = (char*) malloc(sizeof(char)* x);
    if(str == NULL)
    {
        exit(1);
    }
    getchar();

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("The character 'B' occurs %d times\n", count_char(str, 'B'));
    printf("The character 'p' occurs %d times\n", count_char(str, 'p'));
    printf("The character 'i' occurs %d times\n", count_char(str, 'i'));
    printf("The character 'D' occurs %d times\n", count_char(str, 'D'));
    printf("The character 'z' occurs %d times\n", count_char(str, 'z'));
    /*dynamic deallocation*/
    free(str);
    return 0;
}
