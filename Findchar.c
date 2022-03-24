#include <stdio.h>
int main()
{
    char a[]="My Name is Aajad chauhan";
    char choice;
    int i,count=0;
    printf("Enter the character :");
    scanf("%c",&choice);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==choice)
        count++;
    }
    printf("Find the value of count %d\n",count);

    return 0;
}
