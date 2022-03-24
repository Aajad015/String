#include<stdio.h>  
#include <string.h>    
int main(){    
 char ch1[25]={'A', 'a', 'j', 'a', 'd', 'c', 'h', 'a', 'u', 'h', 'a' ,'n', '\0'};    
   char ch2[25];    
   //strcpy(ch2,ch);    
   printf("Value of second string is: %s",strcpy(ch2,ch1));    
 return 0;    
}    