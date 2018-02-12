#include<stdio.h>
void main()
{
char str[20];
int i,sum=0;
printf("enter the string:");
scanf("%c",str);
for(int i=0;i<=l;i++)
	{
		if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
		{
			sum=sum+1;
		}
	}
	printf("The total no of numeric characters in the String are %d",sum);
	return 0;
}
