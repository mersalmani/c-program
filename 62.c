#include<stdio.h>
#include<conio.h> 
void main()
{
char a[10];
int l,i,count=0;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='0'||a[i]=='1')
{
count++;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}

getch();
}
