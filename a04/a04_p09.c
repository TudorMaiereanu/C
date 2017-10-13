/*JSTK-320111
a4_p9_m1.c
Tudor Cristian Maiereanu
t.maiereanu@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],c,l1,l2;
    int i;
    /*1-Print on screen the correvt lengths of both strings*/
     printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strlen(s1)-1] = '\0';
    s2[strlen(s2)-1] = '\0';
    l1=strlen(s1);
    l2=strlen(s2);
    printf("The length (including new line) of the first string is %d\n", l1);
    printf("The length (including new line) of the first string is %d\n", l2);

    /*2-Print on the screen the concatenation*/
    char s12[100];
    strcpy(s12, s1);
    strcat(s12, s2);
    printf("The concatenation is: %s\n",s12);

    /*3-Declare a third string, copy s1 into it and print the third string on the screen*/
    char s3[100];
    strcpy(s3,s1);
    printf("The third string is: %s\n",s3);

    /*4-Compare the two strings s1 and s2 and print a coreesponding message on the screen*/
    if(strcmp(s1,s2)>0)
        printf("The first string is greater\n");
    else
    {
        if(strcmp(s1,s2)==0)
            printf("The two strings are equal\n");
        else
            printf("The second string is greater\n");
    }

    /*5-find all the positions of the occurrences of c within s1*/
    printf("Enter the character:");
    scanf(" %c", &c);
    printf("The positions of the character %c are: ", c);
    for(i=0;i<=strlen(s1);i++)
        if(s1[i]==c)
            printf("%d ",i+1);
    /*I chose to print i+1 so the first letter to be on position 1, not on position 0*/
    return 0;
}
