#include<stdio.h>
int main()
{
int n;
int count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n /=10;
++count;
}
printf(" the digit is: %d",count);
return 0;
}
