#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
int n,i,l;
scanf("%s",&str);
scanf("%d",&n);
l=strlen(str);
for(i=n;i<=l;i++)
{
printf("%c",str[i]);
 }
 
