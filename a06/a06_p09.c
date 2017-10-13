/*
    JTSK-320111
    a6_p9.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *f1ptr, *f2ptr, *gptr;
    f1ptr = fopen("file1.txt", "r");
    f2ptr = fopen("file2.txt", "r");
    gptr = fopen("sum.txt", "w");

    if (f1ptr == NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }
    if (f2ptr == NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }

    int a,b;
    if (f1ptr != NULL && f2ptr!= NULL)
    {
        fscanf(f1ptr, "%d", &a);

        fscanf(f2ptr, "%d", &b);

        fprintf(gptr, "%d", (a+b));

        fclose(f1ptr);
        fclose(f2ptr);
    }
    return 0;
}
