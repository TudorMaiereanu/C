#include <stdio.h>
#include <stdlib.h>

void f(char ch, int r, int c)
{
    int i,j;
    for(i=1;i<=r;i++)
        {
        for(j=1;j<=c;j++)
            printf("%c", ch);
        printf("\n");
        }
}
int main()
{
    int r,c;
    char ch;
    printf("enter the char: ");
    scanf(" %c", &ch);
    printf("enter the number of rows: ");
    scanf(" %d", &r);
    printf("enter the number of columns: ");
    scanf(" %d", &c);
    f(ch,r,c);
    return 0;
}
