#include<stdio.h>
#include<conio.h>
void main()
{
int n[20],a,i,s=0;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
scanf("%d",&n[i]);
}
for(i=1;i<=a;i++)
{
s=s+n[i];
}
printf("%d",s);
getch();
}
