#include<stdio.h>
int main()
{
int n,i;
printf("enter the number is:");
scanf("%d",&n);
for(i=1;i<=5;++i)
{
printf("%d*%d=%d\n",i,n,n*i);
return 0;
}
