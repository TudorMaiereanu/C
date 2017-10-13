/*
    JTSK-320111
    a6_p7.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if(a>=b)
    {
        if(a%b==0)
            {return b;}
        else
            {return gcd(b,a%b);}
    }
    else
    {
        if(b%a==0)
            {return a;}
        else
            {return gcd(a,b%a);}
    }
    return 0;
}

int main()
{
    int a,b;
    printf("Enter the first number a=");
    scanf("%d", &a);
    printf("Enter the first number b=");
    scanf("%d", &b);
    printf("The greatest common divisor of %d and %d is %d", a, b, gcd(a,b));

    return 0;
}
