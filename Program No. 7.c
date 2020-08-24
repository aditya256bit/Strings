#include <stdio.h>
#include <string.h>
int main () 
{
    char str0[10];
    char str1[7][10]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
    int i=0, flag=0 ;
    
    printf("\nEnter the Day : ");
    gets (str0);
    
    for (int i=0 ; str0[i]!='\0'; i++)
    {
        if(str0[i] >= 'a' && str0[i] <= 'z')
        {
            str0[i] = str0[i] -32;
        }
    }
    
    for(int i=1 ; i<11 ; i++)
    {
        int result1=strcmp(str0,str1[i]);
        if(result1==0)
        {
            printf("\nThe number of day is : %d", i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nPlease check the spelling.");
    }
    return 0;
}
