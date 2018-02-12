#include<stdio.h>
int main()
{
  int t,m,k;
  printf("Enter the two elements:");
  scanf("%d\t%d",&m,&k);
  t=m;
  m=k;
  k=t;
  printf("After swapping\n%d\n %d",m,k);
  return 0;
}
