#include<stdio.h>
#include<conio.h>
void  main()
{
int a[10],n;
int i, sum=0;
float avg;
printf("enter the values are:");
scanf("%d",&n);
printf("\n the values are\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++0
{
sum=sum+a[i];
}
avg=sum/n;

printf("\n the avg is:%f",avg);
getch();
}
