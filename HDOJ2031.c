#include<stdio.h>
void fun(int n,int r)
{
 if(n)
 {
    fun(n/r,r);
    printf("%c",n%r>9?n%r-10+'A':n%r+'0');
 }
    
}
int main()
{
   int n,r;
   while(scanf("%d%d",&n,&r)!=EOF)
   {
      if(n>0) fun(n,r);
      else if(n==0) putchar('0');
   else if(n<0) {putchar('-');fun(-n,r);}
   putchar('\n');
   }
return 0;
}
