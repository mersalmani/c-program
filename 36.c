#include<stdio.h>
int main()
{
char str[20];
int sum=0;
int l=strlen(str);
printf("enter the string:");
scanf("%c",str);
for(int i=0;i<=l;i++)
	{
		if(str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='&'||str[i]=='*')
		{
			sum=sum+1;
		}
	}
	printf("The total no of special characters in the String are %d",sum);
  getch();
	return 0;
}
