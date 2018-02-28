#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i,a1=0,a2=1;
scanf("%d",&n);
for(i=2;i<=n;++i)
{
a=a1+a2;
a1=a2;
a2=a;
}
printf("%d\t",a);
getch();
}
