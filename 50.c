#include<stdio.h>
int main()
{
int num,count=0;
int a[15]={0},n,i;
scanf("%d",&num);
while(num!=0)
{
n=num%2;
if(n==1)
count++;
num=num/2;
}
if(n==1)

printf("yes \n);
else
printf("no\n");
return 0;
}

