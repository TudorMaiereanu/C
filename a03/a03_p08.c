/*JSTK-320111
a3_p8_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int i;
    int n=-1;
    /*we take n negative so that the loop starts*/
    /*n must be positive so that the code can be computed*/
    printf ("Enter the char: ");
    scanf (" %c", &ch);
    if(ch>=65 && ch<=90)
        {
        printf("Enter an integer: n=");
        scanf (" %d", &n);
            for(i=0;i<=n;i++)
            {
                /*we check if the character and n meet the "expectations"*/
                if(n>0 && n<32)
                    {
                    printf("%c\n", ch);
                    ch=ch+1;
                    }
                else
                    {printf("The program cannot execute for this value"); return 1;}
            }
        }
    else
        printf("The program cannot execute for this value");
    return 0;
}
