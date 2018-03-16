#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int i,l;
l=strlen(s);
gets(s);
for(i=0;i<l;i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{
printf('%d",s[i]);
}
}
getch();
}
