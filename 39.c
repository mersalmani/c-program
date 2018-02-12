#include<stdio.h>
#include<conio.h>
void display(int a,int b,int c,int d,int e);
void main()
{
int a, b,c,d,e;
printf("enter the values are:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
display(a,b,c,d,e);
}
getch();
}
void display(a,b,c,d,e)
{
if((a>b)&&(a>c)&&(a>d)&&(a>e))
{
printf("the biggest is %d",a);
}
else if((b>c)&&(b>d)&&(b>e))
{
printf(" the biggest value is %d",b);
}
else if((c>d)&&(c>e))
{
printf("enter biggest is %d",c);
}
else if(d>e)
{
printf("enter the maximum value is:%d",d);
}
else
{
printf("the biggest value is :%d",e);
}
return 0;
}
