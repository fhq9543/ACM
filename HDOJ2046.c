#include<stdio.h>
int main()
{
 __int64 i,n,f1,f2,f3;
 while(scanf("%I64d",&n)!=EOF)
 {
  f1=0;f2=1;
  for(i=1;i<=n;i++)
  {
   f3=f1+f2;f1=f2;
   f2=f3;
  }
  printf("%I64d\n",f2);
 }
 return 0;
}
