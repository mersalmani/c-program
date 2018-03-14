#include<stdio.h>
#include<conio.h>
void main()
{
char s[50];
scanf("%s",s);
int l=strlen(s);
for(i=0;s[i]!=1;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i])
printf("yes");
else
printf("no");
}
getch();
}
