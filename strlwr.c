/*#include<stdio.h>  
#include <string.h>    
int main(){    
 char ch[20];
 printf("Enetr the String :");
 scanf("%s",&ch);
 printf("%s lower string",strlwr(ch));
 
 return 0;    
}   */ 
#include<stdio.h>  
#include<string.h>    
int main(){    
  char str[20];    
  printf("Enter string: ");  
  scanf("%s",&str);
  //gets(str);//reads string from console    
  printf("String is: %s",str);    
  printf("\nLower String is: %s",strlwr(str));    
 return 0;    
}    