#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,i,n;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
count++;
}}
if(count>=3)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

