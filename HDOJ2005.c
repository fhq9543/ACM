#include<stdio.h>
int fun(int y)
{
 if((y%4==0)&&((y%100)!=0)||(y%400==0))
  return 1;
 else return 0;
}
int main()
{
 int year,month,day,i,j,sum;
 while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
 {
  sum=0;
  if(month>8) 
   sum+=(30*(month-1)+(month+1)/2+day);
  else sum+=(30*(month-1)+month/2+day);
  if(month>2)
  {
   if(fun(year))sum--;
   else sum-=2;
  }
  printf("%d\n",sum);
 }
 return 0;
}
