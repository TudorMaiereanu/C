/*
    JTSK-320111
    a5_p4.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_consonants(char str[])
{
    int i,c=0,v=0;
        {
            for(i=0;i<=strlen(str);i++)
            {
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]==' ')
                {
                    /*we count the vocals with v so that we eliminate those cases*/
                    v++;
                }
                else
                {
                    if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
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
