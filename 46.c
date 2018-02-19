#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value is:");
scanf("%d",&n);
while(n<=1000000)
{
n++;
break;
}
printf("%d",n);
getch();
}
