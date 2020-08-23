#include <stdio.h>
#include <string.h>

int main () {

   char str1[12];
   char str2[12];
   char str3[12];
   int i=0;
   
   printf("\nEnter the First name : ");
   gets (str1);
   
   printf("Enter the Middle name : ");
   gets (str2);
   
   printf("Enter the Last name : ");
   gets (str3);
   
   strcat(strcat(str1 , " "),str2);
   strcat(strcat(str1 , " "),str3);
   
   printf("\nYour name is : %s ", str1 );
   printf("\nAnd your initials are : ");
   
   printf("%c", str1[0]);
   while (str1[i]!='\0')
    {
        if (str1[i]==' ')
        {
            printf("%c",str1[i+1]);
        }
        i++;
    }
   
   return 0;

}
