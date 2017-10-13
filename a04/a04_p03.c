/*JSTK-320111
a4_p3_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

double to_kilogram(int pound, int ounce)
{
    /*as we declare m as a float, we have to cast mm also as a double*/
    double kg;
    kg=((double)pound*453.6+(double)ounce*28.350)/1000;
    return kg;
}
int main()
{
    int pound, ounce;
    double kg;
    printf("Enter the pounds: ");
    scanf("%d", &pound);
    printf("Enter the ounces: ");
    scanf("%d", &ounce);
    kg=to_kilogram(pound,ounce);
    printf("%d pounds and %d ounces = %lf", pound, ounce, kg);
    return 0;


}
