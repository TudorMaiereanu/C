/*
    JTSK-320111
    a6_p10.c
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp, *gp;
   char ch;

   fp = fopen("text.txt", "r");
   gp = fopen("text_copy.txt", "w");

   if (fp == NULL)
    {
        printf("Some error occurred!\n");
        exit(1);
    }
    else
    {
        printf("Check the .txt file");
    }

   while (1) {
      ch = fgetc(fp);

      if (ch == EOF)
         break;
      else
         putc(ch, gp);
   }



   fclose(fp);
   fclose(gp);

   return 0;

}
