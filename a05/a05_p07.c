/*
    JTSK-320111
    a5_p7.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/*the function for the two smallest values*/
void min_values(float a[], int n)
{
    /*we assign the first two values of the array to min1 and min2*/
    float min1=a[0], min2=a[1];
    int i;
    for(i=1;i<n;i++)
    {
        /*we check if min1 and min2 are greater than a[i] in order to switch values*/
        if(a[i]<min1 && a[i]<min2)
        {
            min2=min1;
            min1=a[i];
        }
        else
        {
            /*as min1 is lower than min2, we check for them to not have the same value*/
            if(min2!=min1 && min2>a[i])
            {
                min2=a[i];
            }
        }
    }
    printf("The two smallest values from the array are %f and %f.", min1, min2);
    return ;
}
int main()
{
    int i,n;
    float *a;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    /*memory allocation*/
    a = (float*) malloc(sizeof(float)* n);
    if (a == NULL)
    {
        exit(1);
    }
    /*we enter the values of the array*/
    for(i=0;i<n;i++)
    {
        printf("Enter element a[%d]=", i+1);
        scanf("%f", &a[i]);
    }
    min_values(a,n);
    /*memory deallocation*/
    free(a);
    return 0;
}
