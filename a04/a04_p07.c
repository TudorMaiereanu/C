/*JSTK-320111
a4_p7_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

/*this function returns the address of the sum and also the value of the sum */
double sum(double a, double b)
{
    double s=0;
    double *S;
    s=a+b;
    printf("The sum is %lf\n", s);
    S=&s;
    printf("The first address is %p\n", S);
    return s;
}

/*this function returns the address of the second sum*/
void sumbyref(double a, double b, double *s)
{
    double sum;
    sum=a+b;
    s=&sum;
    printf("The second address is %p\n", s);
    return;
}

/*this function returns the changed address of the sum*/
void swapbyref(double *a, double *b)
{
    int *p;
    p=&a;
    a=&b;
    b=&p;
    printf("The address is %p\n", p);
    return;
}


int main()
{
    double a,b,x;
    double *s,*A,*B;
    printf("Enter the value of a: ");
    scanf(" %lf", &a);
    printf("Enter the value of b: ");
    scanf(" %lf", &b);
    x=sum(a,b);
    s=&x;
    sumbyref(a,b,s);
    A=&a; B=&b;
    swapbyref(A,B);
    return 0;

}
