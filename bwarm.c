#include<stdio.h>
int primenumber(int n);
int main()
{
int n1,n2,i,flag;
printf("enter the two number");
scanf("%d%d",&n1,&n2);
printf("the number between%d and %d are:",n1,n2)
for(i=n1+1;i<n2;++i)
{
pos=primenumber(i);
if(flag==1)
printf("%d",i);
)
return 0;
}
int PrimeNumber(int n)
{
    int j, flag= 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return pos;
}
