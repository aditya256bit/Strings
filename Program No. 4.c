#include <stdio.h>
#include <string.h>

int main ()
{

   char str1[20];
   int i=0, count=0;
   
   printf("\nEnter the String : ");
   gets (str1);
   
   for(i=0 ; str1[i]!='\0' ; i++)
   {
      if(str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U'||str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
      {
          count++;
      }
   }
   
   printf("\nThe no. of vowel letters are : %d ", count );
   
   return 0;

}
