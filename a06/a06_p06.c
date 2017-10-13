/*
    JTSK-320111
    a6_p6.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int n, int m)
{
    if(m != n)
        return m + sum(n,m-1);
    else
        return m;
}

int main()
{
    int n,m;
    printf("Enter the first number of the sum: ");
    scanf("%d", &n);
    printf("Enter the last number of the sum: ");
    scanf("%d", &m);
    printf("\n");
    printf("Sum = %d",sum(n,m));
    return 0;
}


