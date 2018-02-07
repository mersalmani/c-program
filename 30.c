#include<stdio.h>
int main()
{
int hour,minutes,a,b;
printf("enter the hour and minutes are:");
scamf("%d%d",&hour,&minutes);
a=hour/60;
b=minute/60;
hour=minute%10;
if(a==b)
{
printf("the times are:");
}
return 0;
}


