#include<stdio.h>
int main()
{
int year;
printf("enter the year is:");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
{
printf("%d it is leap year",year);
else
printf("%d it is not leap year",year);
}
else
printf("%d it is leap year",year);
}
else
printf("%d it is not leap year",year);
}
return 0;
}
 
