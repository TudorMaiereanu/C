/*JSTK-320111
a4_p1_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>

/*We have to add {} inside the FOR because the iteration FOR must do nothing*/
/*When there are no {} the iteration does contain also "return idx" so that is why the program prints 0 everytime*/
int length(char str[])
{
    int idx;
    /*Loop until end of string */
    for (idx=0; str[idx]!='\0';++idx)
        {}
        /*do nothing*/
    return idx;
}

int main ()
{
    char line[100];
    while(1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("Length (including newline) is: %d\n", length(line));
    }
    return 0;
}
