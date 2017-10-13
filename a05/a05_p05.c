/*
    JTSK-320111
    a5_p5.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_consonants(char str[100])
{
    char *i;
    int c=0,v=0;
    {
        for(i=str;*i!='\0';i++)
        {
            if(*i=='a' || *i=='e' || *i=='i' || *i=='o' || *i=='u')
            {
                /*we count the vocals with v so that we eliminate those cases*/
                v++;
            }
            else
            {
                if( ((*i>='a') && (*i<='z')) || ((*i>='A') && (*i<='Z')) )
                {
                    c++;
                    /*now we only have to check if the character is a letter because we eliminated all the vocals cases*/
                }
            }
        }
    }
    return c;
}
int main()
{
    char s[100],ok=0;
    /*ok checks if the string is empty or not*/
    while(ok==0)
    {
        printf("Enter the string: ");
        fgets(s, sizeof(s), stdin);
        if(strcmp(s, "\n")==0)
        {
            ok=1;
        }
        else
        {
            printf("The number of the consonants from the above string is: %d\n", count_consonants(s));
            printf("\n");
        }
    }
    return 0;
}

