#include <stdio.h>
#include<string.h>
int main()
{
     int val;
     char a[]="Hello";
     //char b[]="Hello";
     char b[]="Aajad";
     if(strcmp(a,b)==0)    
      printf("Strings are equal");    
  else    
      printf("Strings are not equal");  
     return 0;
}