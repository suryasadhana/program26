#include<stdio.h>
#include<conio.h>
void main()
{
char string[20];
int i,count=0;
printf("enter the string");
gets(string);
for(i=0;string[i]!='\0';i++)
{
count++;
}
printf("%d",count);
getch();
}
