#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,j,max;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(j=0;j<10;j++)
{
if(a[i]>max)
max=a[i];
}
printf("Maximum:%d",max);
return 0;
}
