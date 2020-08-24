#include <stdio.h>
#include <string.h>

int main () 
{
    char str1[50], str2[50],result=0;
   
    printf("\nEnter the String 1 : ");
    gets (str1);
   
    printf("\nEnter the String 2 : ");
    gets (str2);
   
    result=strcmp(str1,str2);
    
    if(result==0)
    {
        printf("\nBoth the strings are same.");  
    }
    else
    {
        printf("\nBoth the strings are different.");
    }
    
    return 0;
}
