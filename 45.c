#include<stdio.h>
int main()
{
int m;
int count=0;

scanf("%d",&m);
while(m!=0)
{
m=m/10;
count++;
}
printf("%d",m);
return 0;
}
