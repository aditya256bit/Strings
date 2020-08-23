#include <stdio.h>
#include <string.h>

int main ()
{

   char str1[10];
   int i=0, count=0;
   
   printf("\nEnter the String : ");
   gets (str1);
   
   for(i=0 ; str1[i]!='\0' ; i++)
   {
      if(str1[i]>='A'&&str1[i]<='Z')
      {
          count++;
      }
   }
   
   printf("\nThe no. of capital letter are : %d ", count );
   
   return 0;

}
