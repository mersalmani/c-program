#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("\t %d%d",a,b)
getch();
}
