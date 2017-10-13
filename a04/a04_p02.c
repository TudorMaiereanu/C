/*JSTK-320111
a4_p2_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

double convert(int mm)
{
    /*as we declare m as a float, we have to cast mm also as a double*/
    double m;
    m=(double)mm/1000;
    return m;
}
int main()
{
    int a;
    double meters;
    printf("Enter the number of millimeters you want to convert: ");
    scanf("%d", &a);
    meters=convert(a);
    printf("%d millimeters are equal to %lf meters", a, meters);

    return 0;
}
