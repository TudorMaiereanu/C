/*
    JTSK-320111
    a5_p3.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/*this is the function which finds the minimum value of the array*/
int minvalue(int a[], int n)
{
    int min=a[0],i;
    for(i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}

/*this is the function which finds the maximum value of the array*/
int maxvalue(int a[], int n)
{
    int max=a[0],i;
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

/*this is the function which finds the sum of all values of the array*/
int sum(int a[], int n)
{
    int s=0,i;
    for(i=0; i<n; i++)
    {
        s+=a[i];
    }
    return s;
}

/*this is the function which prints the length of the array*/
int length(int a[], int n)
{
    return n;
}

/*this is the function which finds the harmonic mean of all values of the array*/
double harmonic_mean(int a[], int n)
{
    int i;
    double hm, si=0;
    for(i=0; i<n; i++)
    {
        /*si is the sum of all the inverses of the values, like 1/a[i]*/
        si+=1/(double)a[i];
    }
    hm=(double)n/(double)si;
    return hm;
}
int main()
{
    int a[10],n_new,i=0,ok=0;
    /*ok checks if the value should stop or not*/
    char c;
    printf("Enter the values of the array \n");
    while(i<10 && ok==0)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
        if (a[i]<0)
        {
            ok=1;
            /*ok=1 because the program found a negative value*/
        }
        else
        {
            /*n_new is the length of the array*/
            n_new=i+1;
            i++;
        }
        if(i==10)
        {
            ok=1;
            /*ok=1 because there are already 10 values introduced*/
        }
    }
    printf("Enter a letter: ");
    scanf(" %c", &c);
    switch((int)c)
    {
        case 109:
          printf("harmonic mean is %fl\n", harmonic_mean(a,n_new));
          break;
        case 104:
          printf("max is %d\n", maxvalue(a,n_new));
          break;
        case 108:
            printf("min is %d\n", minvalue(a,n_new));
            break;
        case 115:
            printf("sum is %d\n", sum(a,n_new));
            break;
        case 110:
             printf("length is %d\n", length(a,n_new));
            break;
        default:
            printf("the letter you typed is not valid");
    }

    return 0;
}
