#include <stdio.h>
#include <string.h>

int main ()
{

   char str1[50];
   int i=0, count=0;
   
   printf("\nEnter the String : ");
   gets (str1);
   
   for(i=0 ; str1[i]!='\0' ; i++)
   {
      if(str1[i]==' ')
      {
          count++;
      }
   }
   
   count++;
   printf("\nThe no. of words present are : %d ", count);
   
   return 0;

}
