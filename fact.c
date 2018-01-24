#include<stdio.h.
int main()
{
int i,n,fact=1;
printf("calculate the number of factorial is:");
scanf("%d",&n);
for(i=0;i<=n;i++){
fact=fact*i;
printf("factorial is %d=%d\n",n,fact)
return 0;
}
}
