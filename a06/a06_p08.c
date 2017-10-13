/*
    JTSK-320111
    a6_p8.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr, *gptr;
    fptr = fopen("char.txt", "r");
    gptr = fopen("code.txt", "w");
    if (fptr == NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }
    char c;

    if(fptr != NULL)
    {
        c = getc(fptr);
        fprintf(gptr, "%d", c);
        fclose(fptr);
    }

    return 0;
}
