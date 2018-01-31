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
printf("%d is palindrome:",ori);
else
printf("%d is not palindrome:",ori);

return 0;
}
