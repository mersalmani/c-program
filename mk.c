#include<stdio.h>
#include<conio.h>
void main()
{
int w,x,y,z;
clrscr();
printf("Enter value of w,x,y:");
scanf("%d%d%d",&w,&x,&y);
z=(w>x )?((w>y )?w:y ):((x>y )?x:y);
printf("\n %d is greatest number",z);
getch();
}
