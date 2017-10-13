/*JSTK-320111
a4_p5_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

/*this is the function for the sum*/
int sum (int a[8], int c)
{
    int i;
    float sum=0;
    for (i=1;i<=c;i++)
        sum+=a[i];
    return sum;

}

/*this is the function for the average*/
int average (int a[8], int c)
{
    int i;
    float sum=0;
    float average=0;
    for (i=1;i<=c;i++)
        sum+=a[i];
    average=(float)sum/(float)c;
    return average;

}

int main()
{
    int a[8],i=1,n,c=0,s=0;
    float av=0;
    /*we are going to assign the 8 (or less) integers to an array*/
    printf("Enter the size of the array");
    scanf("%d", &n);
    while (i<=8)
        {
        if(i>n)
            break;
        else
            {
            printf("a[%d]=", i);
            scanf("%d", &a[i]);
            c++;
            if(a[i]==-99)
                /*we check for the values of the array not to be -99*/
                break;
            else
                i++;
            }
        }
    for(i=1;i<=c;i++)
        if(a[i]==-99)
            /*we check for the values of the array not to be -99*/
            c=c-1;
    s=sum(a,c);
    av=average(a,c);
printf("The sum is %d\n", s);
printf("The average is %f", av);
    return 0;
}

