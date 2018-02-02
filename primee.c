#include<stdio.h>
int main()
{
int rem,n,rev=0,ori;
printf("enter the number");
scanf("%d",&n);
ori=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(ori==rem)
printf("%d is yes");
else
printf("%d is no");

return 0;
}
