#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[]="abde";
char b[]="aaddcbbeee";
int count=0,i,j,vali,valj;
clrscr();
vali=strlen(b);
valj=strlen(a);
for(i=0;i<vali;i++)
{
for(j=0;j<valj;j++)
{
if(a[j]==b[i])
count++;

}}
if(vali==count)

printf("Match value");
else
printf("Value are not match");

getch();
}
