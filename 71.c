#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int pal=0;i;length;
scanf("%s",a);
length=strlen(a);
for(i=0;i<length;i++)
{
if(a[i]!=a[length-i-i])
{
pal=1;
break;
}}
if(pal==1)
printf("no");
else
printf("yes");

getch();
}
