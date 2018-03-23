#include<stdio.h>
#include<conio.h>
void main()
{
int n,or,rev,rem;
scanf("%d",&n);
or=n;
while(n!=0)
rem=n%10;
rev=rev*10+rem;
n=n/10;
printf("\n reverse no is:%d",rev);
getch();
}
