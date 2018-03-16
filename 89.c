#include<stdio.h>
#include<conio.h>

int main()
{
  char a[10],t;
  int l;
  gets(a);
  l=strlen(a);
  for(int i=0;i<=l-1;i++)
  {
    for(int j=i+1;j<l;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  for(int i=0;i<=l;i++)
  {
    printf("%c",a[i]);
  }
 return 0;
}
