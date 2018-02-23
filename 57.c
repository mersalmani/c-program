#include<stdio.h>
#include<conio.h>
void main()
{
int t,a,b;
clrscr();
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("swap values are:%d%d",a,b);
getch();
}
