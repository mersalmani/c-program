#include<stdio.h>
int main()
{
int n,a,b,temp;
printf("the value a :");
scanf("%d",&a);
printf("enter the value b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the swap values are%d %d");
scanf("%d%d",&temp);
return 0;
}
