#include<stdio.h>
int main()
{
 __int64 i,s[60],n;
 while(scanf("%I64d",&n)!=EOF)
 {
  s[0]=0;s[1]=3;s[2]=s[3]=6;
  for(i=4;i<=n;i++)
   s[i]=s[i-1]+2*s[i-2];
  printf("%I64d\n",s[n]);
 }
 return 0;
}
