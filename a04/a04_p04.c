/*JSTK-320111
a4_p4_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

void print_frame(int n, int m, char c)
{
    int i,j;
    /* we print a line full of characters - top of the rectangle*/
    for(j=1;j<=m;j++)
            printf("%c", c);
        printf("\n");
    /*we print the lateral sides of the rectangle*/
    for(i=1;i<=n;i++)
    {
        if(i>1 && i<n)
            {
            printf("%c", c);
            for(j=2;j<=m-1;j++)
                printf(" ");
            printf("%c",c);
            printf("\n");
            }
    }
    /* we print a line full of characters - bottom of the rectangle*/
    for(j=1;j<=m;j++)
            printf("%c", c);

}
int main()
{
    int n,m;
    char c;
    printf("n=");
    scanf(" %d", &n);
    printf("m=");
    scanf(" %d", &m);
    printf("c=");
    scanf(" %c", &c);
    print_frame(n,m,c);
    return 0;
}
