#include<stdio.h>
#include<string.h>
int main()
{
 char a[100],max;
 int i,j;
 while(gets(a))
 {
       j=strlen(a);
    max='a';
    for(i=0;i<j;i++)
    {
     if(a[i]>max)          
     max=a[i];
    }
    for(i=0;i<j;i++)
    {
     printf("%c",a[i]);
     if(a[i]==max)
      printf("(max)");
    }
    printf("\n");
 }
}
