#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the positive number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
printf("the sum of %d number is%d",n,sum);
return 0;
}
}

